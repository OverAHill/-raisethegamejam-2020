// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAttackComponent.h"

// Sets default values for this component's properties
UPlayerAttackComponent::UPlayerAttackComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// TO DO: Root Component Set up

	//Sphere collider for detecting general area around the player
	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
	SphereCollider->InitSphereRadius(10.0f);
	SphereCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereCollider->SetCollisionProfileName("Attack Radius");
	SphereCollider->OnComponentBeginOverlap.AddDynamic(this, &UPlayerAttackComponent::OnSphereBeginOverlap);
	SphereCollider->OnComponentEndOverlap.AddDynamic(this, &UPlayerAttackComponent::OnSphereEndOverlap);

	//Box (rectangle) collider to simulate the players view and to help determin the target
	// TO DO: Set location and size of box so it extends in front of the player
	ViewBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("View Collider"));
	ViewBoxCollider->InitBoxExtent(FVector(5, 2, 5)); // half the size of the box: x, y, z //change me
	ViewBoxCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	ViewBoxCollider->SetCollisionProfileName("View Box");
	ViewBoxCollider->OnComponentBeginOverlap.AddDynamic(this, &UPlayerAttackComponent::OnBoxBeginOverlap);
	ViewBoxCollider->OnComponentEndOverlap.AddDynamic(this, &UPlayerAttackComponent::OnBoxEndOverlap);


	// ...
}


// Called when the game starts
void UPlayerAttackComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerAttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UPlayerAttackComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	PotentialTargets.Add(OtherActor);
}


void UPlayerAttackComponent::OnSphereEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Remove from list of potential targets as they are no longer in range
	if (PotentialTargets.Contains(OtherActor))
	{
		int x = PotentialTargets.Find(OtherActor);
		PotentialTargets.RemoveAt(x);
	}

	if (PotentialTargets.Num() == 0)
		CanAttack = false;
}


void UPlayerAttackComponent::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 1. add to potential targets, if not already there
	if (!PotentialTargets.Contains(OtherActor))
		PotentialTargets.Add(OtherActor);

	TargetsInView.Add(OtherActor);

	if(TargetsInView.Num() > 1)
		OrderTargetsInView();

	CanAttack = true;

	// 2. compare distance to CurrentTarget
	if (CalculateDistanceAway(OtherActor->GetActorLocation()) < CalculateDistanceAway(CurrentTarget->GetActorLocation()))
	{
		// 3. if closer replace
		CurrentTarget = OtherActor;
	}

}


void UPlayerAttackComponent::OnBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Just remove from TargetsInView
	if (TargetsInView.Contains(OtherActor))
	{
		int x = TargetsInView.Find(OtherActor);
		TargetsInView.RemoveAt(x);
	}
	
	// 1. If current target remove 
	if (CurrentTarget == OtherActor)
	{
		CurrentTarget = nullptr;

		// 2. Set new current target
		if (TargetsInView.Num() != 0)
		{
			//Compare distances in the TargetsInView Tarrray
			// Have TargetsInView already ordered and (re)ordered when a new actor is added
			SelectTarget();
		}
		else
		{
			// No target
			CanAttack = false;
		}
	}
}

void UPlayerAttackComponent::SelectTarget()
{
	//select target based on 
	// 1. Order the TArray, sets target in the function
	OrderTargetsInView();
}

void UPlayerAttackComponent::AttackTarget()
{
	// One hit kill
	// kill range

	// 1. Get health component
	// 2. Call "Kill" Function

	//TArray<UActorComponent> targetComponents = CurrentTarget->GetComponents();
	//CurrentTarget->FindComponentByClass(TSubclassOf<UActorComponent> UHealthComponent);
	CurrentTarget->FindComponentByClass<UHealthComponent>();
	
}


float UPlayerAttackComponent::CalculateDistanceAway(const FVector otherPos)
{
	// Avoid using sqrt, compare unsqrt distance
	float dist = (otherPos - this->GetOwner()->GetActorLocation()).SizeSquared(); 
	return dist;
}

void UPlayerAttackComponent::OrderTargetsInView()
{
	// 1. One pass to locate the lowest
	// 2. Set the lowest

	int lowestDistIndex = 0;

	for (int i = 1; i < TargetsInView.Num(); ++i)
	{
		float currLowest = CalculateDistanceAway(TargetsInView[lowestDistIndex]->GetActorLocation());
		float next = CalculateDistanceAway(TargetsInView[i]->GetActorLocation());

		if (next < currLowest)
		{
			lowestDistIndex = i;
		}
	}

	CurrentTarget = TargetsInView[lowestDistIndex];
}