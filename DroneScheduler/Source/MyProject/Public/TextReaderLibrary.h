// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextReaderLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UTextReaderLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintPure, Category = "Project CPP Nodes", meta = (Keywords = "Load Text File"))
		static bool LoadTxt(FString FileNameA, FString& SaveTextA);

	UFUNCTION(BlueprintCallable, Category = "Project CPP Nodes", meta = (Keywords = "Save Text File"))
		static bool SaveTxt(FString SaveTextB, FString FileNameB);
};
