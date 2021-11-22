// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HawkProject : ModuleRules
{
	public HawkProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
