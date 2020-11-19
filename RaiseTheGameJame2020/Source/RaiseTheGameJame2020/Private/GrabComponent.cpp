// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabComponent.h"

// Sets default values for this component's properties
UGrabComponent::UGrabComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
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



void UGrabComponent::OnEnterGrabZone(AActor* OtherActor)
{
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Grab Overlap");
	GrabTarget = nullptr;

	AAgentCharacter* Enemy = Cast<AAgentCharacter>(OtherActor);

	if (Enemy)
	{
		GrabTarget = OtherActor;

	}
}

void UGrabComponent::OnLeaveGrabZone(AActor* OtherActor)
{
	GrabTarget = nullptr;
}

void UGrabComponent::GrabGTarget()
{
	// 1. Check if grab is allow
	if (GrabTarget) //is within range
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Grab GTarget Attempt");

		if (GrabTarget->FindComponentByClass<UDragComponent>()->IsDragEnabled)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Grab GTarget Attempt Passed");

			// 2. attach to socket
			GrabTarget->GetRootComponent()->AttachToComponent(this->GetOwner()->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale); // Transform Rules might need adjusting
			CurrentlyDragging = true;

			GrabTarget->FindComponentByClass<UDragComponent>()->IsBeingDragged = true;
		}
	}
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Grab Target nullptr");

	}
}

void UGrabComponent::ReleaseGTarget() //Release Doesnt Work Rn
{
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Release GTarget Attempt");

	// 1. Check if socketed
	//if (CurrentlyDragging)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Release GTarget Attempt Passed STep 1");
		if (GrabTarget)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Release GTarget Attempt Passed Step 2");

			// 2. Un Attach Socket
			//GrabTarget->GetRootComponent()->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform); // Transform Rules might need adjusting
			GrabTarget->GetRootComponent()->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
			//GrabTarget->FindComponentByClass<UDragComponent>()->IsBeingDragged = false;
			//GrabTarget->FindComponentByClass<UDragComponent>()->IsBeingDragged = false;
			CurrentlyDragging = false;
		}
		
	}
	
}