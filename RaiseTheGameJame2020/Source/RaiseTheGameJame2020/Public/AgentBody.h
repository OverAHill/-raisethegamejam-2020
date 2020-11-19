//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "AgentTaskManager.h"
//#include "AgentBody.generated.h"
//
//UCLASS()
//class RAISETHEGAMEJAME2020_API AAgentBody : public AActor
//{
//	GENERATED_BODY()
//	
//public:	
//	// Sets default values for this actor's properties
//	AAgentBody();
//
//	UPROPERTY(EditAnywhere, Category = "AI")
//	TArray<FVector> actionLocations;
//
//protected:
//	UAgentTaskManager* TaskManager;
//
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	void SignalWitnessedDeath(AActor* killerReference);
//
//};