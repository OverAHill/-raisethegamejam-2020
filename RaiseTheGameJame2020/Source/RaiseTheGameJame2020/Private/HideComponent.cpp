// Fill out your copyright notice in the Description page of Project Settings.


#include "HideComponent.h"

// Sets default values for this component's properties
UHideComponent::UHideComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	AreaBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Hide Collider"));
	AreaBoxCollider->InitBoxExtent(BoxColliderSize); // half the size of the box: x, y, z //change me
	AreaBoxCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	AreaBoxCollider->SetCollisionProfileName("Hide Box");
	AreaBoxCollider->OnComponentBeginOverlap.AddDynamic(this, &UHideComponent::OnBoxBeginOverlap);

	// On overlap, allow player ability to hide (delete) the body

	// ...
}


// Called when the game starts
void UHideComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHideComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UHideComponent::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 1. If OtherActor has a drag component
	// 2. Check if currently alive
	// 3. Check if currently being dragged

	if (OtherActor->FindComponentByClass<UDragComponent>()->IsDragEnabled) // Health is zero
	{
		if (!OtherActor->FindComponentByClass<UDragComponent>()->IsBeingDragged) // Not being Dragged
		{
			OtherActor->Destroy(); // Delete
			// OtherActor->SetActorHiddenInGame(true); // Set Hidden Instead
		}
	}
	
	
}


