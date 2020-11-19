// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "HealthComponent.h"
#include "PlayerAttackComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RAISETHEGAMEJAME2020_API UPlayerAttackComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerAttackComponent();
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool CanAttack = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* ViewBoxCollider; // No cones

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector BoxColliderSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SphereRadius = 5.0f;

	UFUNCTION()
		void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnEnterView(AActor* OtherActor);

	UFUNCTION()
		void OnBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
		void OnLeaveView(AActor* OtherActor);

	UFUNCTION()
		void AttackTarget();


	UFUNCTION()
		void SelectTarget();

	float CalculateDistanceAway(const FVector otherPos);

	void OrderTargetsInView();

	TArray<AActor*> TargetsInView;
	AActor* CurrentTarget;

};
