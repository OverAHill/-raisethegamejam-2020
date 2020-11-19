// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TargetActor.h"
#include "APlayerTask.generated.h"

UCLASS()
class RAISETHEGAMEJAME2020_API AAPlayerTask : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(Category = Tasks, VisibleAnywhere, BlueprintReadOnly)
	bool bIsCompleted;
	bool bIsActive;


	UPROPERTY()
	class USceneComponent* TaskRootComponent;

	UPROPERTY(Category = Tasks, EditInstanceOnly, BlueprintReadOnly)
	FString TaskName;
	UPROPERTY(Category = Tasks, EditInstanceOnly, BlueprintReadOnly)
	class UBoxComponent* TaskEntry;
	UPROPERTY(Category = Tasks, EditInstanceOnly, BlueprintReadOnly)
	class UBoxComponent* TaskExit;
	UPROPERTY(Category = Tasks, EditInstanceOnly, BlueprintReadOnly)
	class UBoxComponent* TaskArea;

	UPROPERTY(Category = Tasks, EditInstanceOnly, BlueprintReadOnly)
	TArray<ATargetActor*> TargetActors;

	// Sets default values for this actor's properties
	AAPlayerTask();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Component Overlap Events
	UFUNCTION()
	void OnTaskEntryOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnTaskEntryOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION()
	void OnTaskExitOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnTaskExitOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION()
	void OnTaskAreaEntryOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnTaskAreaOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetIsCompleted(bool state);
	bool GetIsCompleted();

	void SetIsActive(bool state);
	bool GetIsActive();
};