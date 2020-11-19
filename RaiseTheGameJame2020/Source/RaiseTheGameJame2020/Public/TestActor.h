// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DragComponent.h"
#include "HealthComponent.h"
#include "Components/SphereComponent.h"
#include "TestActor.generated.h"

UCLASS()
class RAISETHEGAMEJAME2020_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* sphere;

	// Ang Testing Stuff
	UPROPERTY(EditAnywhere)
		UDragComponent* DragComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHealthComponent* HealthComp;
};
