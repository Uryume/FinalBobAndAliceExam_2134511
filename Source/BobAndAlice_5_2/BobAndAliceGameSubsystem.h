// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BobAndAliceGameSubsystem.generated.h"

UCLASS()
class BOBANDALICE_5_2_API UBobAndAliceGameSubsystem : public UGameInstanceSubsystem
{
  GENERATED_BODY()

public:
  virtual void Initialize(FSubsystemCollectionBase &Collection) override;

  virtual void Deinitialize() override;

  UFUNCTION(BlueprintCallable)
  void SaveTimerToSubSystem(const float TimeLimit);
  UFUNCTION(BlueprintCallable,BlueprintPure)
  float GetLocalSavedTimer() const;

  UFUNCTION(BlueprintCallable)
  void SavePackageDelivered(const bool Delivered);
  UFUNCTION(BlueprintCallable,BlueprintPure)
  bool GetPackagedDelivered() const;
  
  UFUNCTION(BlueprintCallable)
  void SavePackageCollected(const bool PackageCollected);
  UFUNCTION(BlueprintCallable,BlueprintPure)
  bool GetPackageCollected() const;

private:
  float LocalTimer = 45;
  bool isPackageCollected;
  bool LocalPackagedDelivered = false;
};
