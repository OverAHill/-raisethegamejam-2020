// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AgentTaskManager.h"
#include "AgentCharacter.generated.h"

class TimeRewind;

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


	UAgentTaskManager* TaskManager;

	TimeRewind* mTimeRewind;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool CanPathToLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector PointerPosForPathfinding;


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
};