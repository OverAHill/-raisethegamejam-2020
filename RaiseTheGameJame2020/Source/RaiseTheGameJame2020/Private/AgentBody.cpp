// Fill out your copyright notice in the Description page of Project Settings.


#include "AgentBody.h"

// Sets default values
AAgentBody::AAgentBody()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAgentBody::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAgentBody::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

