// Copyright Panayiotis Philippou 2017.

#include "EscapeRoom.h"
#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	//Find the owning actor
	AActor* Owner = GetOwner();

	//Create rotator
	//FRotator NewRotation = FRotator(0.0f, 0.0f, 0.0f);

	Owner->SetActorRotation(NewRotation);

	FString ObjectName = GetOwner()->GetName();
	FString ObjectPosition = GetOwner()->GetActorRotation().ToString();
	UE_LOG(LogTemp, Error, TEXT("Position Report for %s %s "), *ObjectName, *ObjectPosition);

}


// Called every frame
void UOpenDoor::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

