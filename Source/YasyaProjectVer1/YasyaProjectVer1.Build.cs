// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class YasyaProjectVer1 : ModuleRules
{
	public YasyaProjectVer1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
