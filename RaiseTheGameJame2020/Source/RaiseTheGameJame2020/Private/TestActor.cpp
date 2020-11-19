// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	RootComponent = sphere;
	sphere->InitSphereRadius(40.0f);


	// New Attack and Grab Component Set Up
	DragComp = CreateDefaultSubobject<UDragComponent>(TEXT("NPCDrag"));
	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("NPCHealth"));
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

