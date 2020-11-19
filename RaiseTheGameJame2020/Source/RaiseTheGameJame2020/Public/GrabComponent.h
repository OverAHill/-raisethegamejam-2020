// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/BoxComponent.h"
#include "DragComponent.h"
#include "TestActor.h"
#include "GrabComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RAISETHEGAMEJAME2020_API UGrabComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	AActor* GrabTarget;

	bool CurrentlyDragging = false;

	void GrabGTarget();

	void ReleaseGTarget();

	UFUNCTION()
		void OnEnterGrabZone(AActor* OtherActor);


	UFUNCTION()
		void OnLeaveGrabZone(AActor* OtherActor);

};
