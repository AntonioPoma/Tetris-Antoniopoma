// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorBlock.h"
#include "EstructuraBlock.h"
#include "BlockGeneral.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockGeneral : public AActor, public IEstructuraBlock
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockGeneral();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	//The Swimming Pool's name
	FString TamanoBloque;
	//The Lobby Area's name
	FString ColorBloque;
	//The Rooms's name
	FString Material;

	//Set the name of the Swimming Pool
	void SetTamanoBloque(FString myTamanoBloque);
	//Set the name of the Lobby Area
	void SetColorBloque(FString myColorBloque);
	//Set the name of the Rooms
	void SetMaterial(FString myMaterial);


	//Logs all the Lodging floors
	void BloqueCaracteristicas();

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Mesh;

};
