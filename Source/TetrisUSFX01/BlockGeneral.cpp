// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockGeneral.h"

// Sets default values
ABlockGeneral::ABlockGeneral()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Block Mesh");
	RootComponent = Mesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockFinder(TEXT("StaticMesh'/Game/Mesh/block.block'"));
	if (BlockFinder.Succeeded())
	{
		Mesh->SetStaticMesh(BlockFinder.Object);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("mesh not found"));
	}
}

// Called when the game starts or when spawned
void ABlockGeneral::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlockGeneral::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABlockGeneral::SetTamanoBloque(FString myTamanoBloque)
{
	TamanoBloque = myTamanoBloque;
}

void ABlockGeneral::SetColorBloque(FString myColorBloque)
{
	ColorBloque = myColorBloque;
}

void ABlockGeneral::SetMaterial(FString myMaterial)
{

	Material = myMaterial;
}

void ABlockGeneral::BloqueCaracteristicas()
{

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *TamanoBloque));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s"), *ColorBloque));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("%s"), *Material));

}

