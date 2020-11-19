//// Fill out your copyright notice in the Description page of Project Settings.
//
//#include "AgentBody.h"
//#include "RunFromKillerAgentTask.h"
//
//// Sets default values
//AAgentBody::AAgentBody()
//{
// 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//	TaskManager = CreateDefaultSubobject<UAgentTaskManager>(TEXT("Agent Task Manager"));
//}
//
//// Called when the game starts or when spawned
//void AAgentBody::BeginPlay()
//{
//	Super::BeginPlay();
//	TaskManager->SetupTaskManager(this, actionLocations);
//}
//
//// Called every frame
//void AAgentBody::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//void AAgentBody::SignalWitnessedDeath(AActor* killerReference)
//{
//	TaskManager->ForceTaskToFront(new RunFromKillerAgentTask(this, killerReference));
//}