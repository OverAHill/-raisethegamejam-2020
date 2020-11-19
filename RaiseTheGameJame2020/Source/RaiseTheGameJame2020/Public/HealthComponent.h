// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RAISETHEGAMEJAME2020_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//USphereComponent* VisibilitySphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HealthValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Alive = true;
};
