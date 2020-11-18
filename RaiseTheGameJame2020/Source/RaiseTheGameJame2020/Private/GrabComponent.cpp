// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabComponent.h"

// Sets default values for this component's properties
UGrabComponent::UGrabComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	AreaBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Hide Collider"));
	AreaBoxCollider->InitBoxExtent(BoxColliderSize); // half the size of the box: x, y, z //change me
	AreaBoxCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	AreaBoxCollider->SetCollisionProfileName("Hide Box");
	AreaBoxCollider->OnComponentBeginOverlap.AddDynamic(this, &UGrabComponent::OnBoxBeginOverlap);
	AreaBoxCollider->OnComponentEndOverlap.AddDynamic(this, &UGrabComponent::OnBoxEndOverlap);

}


// Called when the game starts
void UGrabComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrabComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UGrabComponent::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GrabTarget = OtherActor;
}


void UGrabComponent::OnBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GrabTarget = nullptr;
}


void UGrabComponent::GrabGTarget()
{
	// 1. Check if grab is allow
	if (GrabTarget != nullptr) //is within range
	{
		if (GrabTarget->FindComponentByClass<UDragComponent>()->IsDragEnabled)
		{
			// 2. attach to socket
			GrabTarget->GetRootComponent()->AttachToComponent(this->GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform); // Transform Rules might need adjusting
			CurrentlyDragging = true;
			GrabTarget->FindComponentByClass<UDragComponent>()->IsBeingDragged = true;
		}
	}	
}

void UGrabComponent::ReleaseGTarget()
{
	// 1. Check if socketed
	if (CurrentlyDragging)
	{
		// 2. Un Attach Socket
		GrabTarget->GetRootComponent()->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform); // Transform Rules might need adjusting
		GrabTarget->FindComponentByClass<UDragComponent>()->IsBeingDragged = false;
	}
	
}