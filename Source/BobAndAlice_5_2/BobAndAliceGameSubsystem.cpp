#include "BobAndAliceGameSubsystem.h"

void UBobAndAliceGameSubsystem::Initialize(
    FSubsystemCollectionBase &Collection) {
  Super::Initialize(Collection);
}

void UBobAndAliceGameSubsystem::Deinitialize() { Super::Deinitialize(); }

void UBobAndAliceGameSubsystem::SaveTimerToSubSystem(const float TimeLimit)
{
	LocalTimer = TimeLimit;
}
float UBobAndAliceGameSubsystem::GetLocalSavedTimer() const
{
	return LocalTimer;
}

void UBobAndAliceGameSubsystem::SavePackageCollected(const bool PackageCollected)
{
	isPackageCollected = PackageCollected;
}
bool UBobAndAliceGameSubsystem::GetPackageCollected() const
{
	return isPackageCollected;
}

void UBobAndAliceGameSubsystem::SavePackageDelivered(const bool Delivered)
{
	LocalPackagedDelivered = Delivered;
}

bool UBobAndAliceGameSubsystem::GetPackagedDelivered() const
{
	return LocalPackagedDelivered;
}
