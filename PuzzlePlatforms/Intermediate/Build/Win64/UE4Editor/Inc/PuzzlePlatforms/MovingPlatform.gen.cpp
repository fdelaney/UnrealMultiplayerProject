// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MovingPlatform.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_AMovingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
// End Cross Module References
	void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
	{
	}
	UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
	{
		return AMovingPlatform::StaticClass();
	}
	UClass* Z_Construct_UClass_AMovingPlatform()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AStaticMeshActor();
			Z_Construct_UPackage__Script_PuzzlePlatforms();
			OuterClass = AMovingPlatform::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_ZSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ZSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ZSpeed, AMovingPlatform), 0x0010000000000001);
				UProperty* NewProp_YSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("YSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(YSpeed, AMovingPlatform), 0x0010000000000001);
				UProperty* NewProp_XSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("XSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(XSpeed, AMovingPlatform), 0x0010000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<AMovingPlatform> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MovingPlatform.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MovingPlatform.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_ZSpeed, TEXT("Category"), TEXT("MovingPlatform"));
				MetaData->SetValue(NewProp_ZSpeed, TEXT("ModuleRelativePath"), TEXT("MovingPlatform.h"));
				MetaData->SetValue(NewProp_YSpeed, TEXT("Category"), TEXT("MovingPlatform"));
				MetaData->SetValue(NewProp_YSpeed, TEXT("ModuleRelativePath"), TEXT("MovingPlatform.h"));
				MetaData->SetValue(NewProp_XSpeed, TEXT("Category"), TEXT("MovingPlatform"));
				MetaData->SetValue(NewProp_XSpeed, TEXT("ModuleRelativePath"), TEXT("MovingPlatform.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingPlatform, 3295622949);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingPlatform(Z_Construct_UClass_AMovingPlatform, &AMovingPlatform::StaticClass, TEXT("/Script/PuzzlePlatforms"), TEXT("AMovingPlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
