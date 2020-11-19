// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GrabComponent.h"
#include "PlayerAttackComponent.h"
#include "TestActor.h"
#include "RaiseTheGameJame2020Character.generated.h"

class TimeRewind;
class UParticleSystemComponent;

UCLASS(config=Game)
class ARaiseTheGameJame2020Character : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	ARaiseTheGameJame2020Character();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	void Rewind();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }



//=================================================================================================
// Variables
//=================================================================================================
public:
	UPROPERTY(VisibleAnywhere, Category = "Time Rewind")
	UParticleSystemComponent* RewindParticleSystem;

protected:
	TimeRewind* mTimeRewind;
	bool Rewinding;

private:


public:
	// Update
	UFUNCTION(BlueprintCallable)
	void AUpdate(float deltaSeconds);

	void TestFunc();
	void TestAnotherFunc();

	UPROPERTY(EditAnywhere, Category = "Player stats:");
	float Bloodlust;
	UPROPERTY(EditAnywhere, Category = "Player stats:");
	float TestValue;

	float DeltaTime;

	bool bPlayerKilled;


	//
	// Ang Testing Stuff
	//


	UPROPERTY(EditAnywhere)
		float GrabSphereRadius;

	UPROPERTY(EditAnywhere)
		FVector ViewBoxHalfSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* GrabSphereCollider; // If in grab range

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UBoxComponent* ViewBoxCollider; // If in view/attack range

	UPROPERTY(EditAnywhere)
		UPlayerAttackComponent* AttackComp; // ->AttackTarget()

	UFUNCTION()
		void OnViewBoxBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnViewBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere)
		UGrabComponent* GrabComp; // ->GrabGtarget()  ->ReleaseGTarget()

	UFUNCTION()
		void OnGrabSphereBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnGrabSphereEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	void AttackTarget();

	void AttemptGrab();

	void GrabTarget();

	void ReleaseTarget();
};