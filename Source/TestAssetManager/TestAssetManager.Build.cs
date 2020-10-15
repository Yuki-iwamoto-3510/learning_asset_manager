// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestAssetManager : ModuleRules
{
	public TestAssetManager(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
