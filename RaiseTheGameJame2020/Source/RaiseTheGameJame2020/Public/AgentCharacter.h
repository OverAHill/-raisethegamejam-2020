// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AgentTaskManager.h"
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


protected:
	UAgentTaskManager* TaskManager;

	FVector PointerPosForPathfinding;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SignalWitnessedDeath(AActor* killerReference);

	UFUNCTION(BlueprintImplementableEvent)
	void PathfindToLocation(FVector position);
};
