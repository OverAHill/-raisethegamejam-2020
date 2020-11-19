// Fill out your copyright notice in the Description page of Project Settings.


#include "HideTestActor.h"

// Sets default values
AHideTestActor::AHideTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HideBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	RootComponent = HideBoxCollider;

	HideComp = CreateDefaultSubobject<UHideComponent>(TEXT("Hide Space"));

	HideBoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AHideTestActor::OnBoxBeginOverlap);
	HideBoxCollider->OnComponentEndOverlap.AddDynamic(this, &AHideTestActor::OnBoxEndOverlap);

}

// Called when the game starts or when spawned
void AHideTestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHideTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHideTestActor::OnBoxBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Hide Overlap");

	ATestActor* Enemy = Cast<ATestActor>(OtherActor);

	if (Enemy)
	{
		HideComp->OnActorEnterHideZone(Enemy);
	}
	
}

void AHideTestActor::OnBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}