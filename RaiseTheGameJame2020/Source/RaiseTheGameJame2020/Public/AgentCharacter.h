// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AgentTaskManager.h"
#include "DragComponent.h"
#include "HealthComponent.h"
#include "Components/SphereComponent.h"
#include "AgentCharacter.generated.h"

UCLASS()
class RAISETHEGAMEJAME2020_API AAgentCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAgentCharacter();

	UPROPERTY(EditAnywhere, Category = "AI")
		TArray<FVector> actionLocations;

	/** What type of AI this is. Can either be "Locations" "Idle" or "Random" If left blank will default to Random Points. */
	UPROPERTY(EditAnywhere, Category = "AI")
		FString AIType;


protected:
	UAgentTaskManager* TaskManager;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool CanPathToLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector PointerPosForPathfinding;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	UGrabComponent* GrabComp = nullptr;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SignalWitnessedDeath(AActor* killerReference);

	UFUNCTION(BlueprintImplementableEvent)
	void PathfindToLocation(FVector position);

	UFUNCTION(BlueprintImplementableEvent)
	void IsLocationPathable(FVector position);

	UFUNCTION(BlueprintImplementableEvent)
	void GoToRandomLocation();


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* sphere;

	// Ang Testing Stuff
	UPROPERTY(EditAnywhere)
		UDragComponent* DragComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHealthComponent* HealthComp;
};