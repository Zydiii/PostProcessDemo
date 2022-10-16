// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PostProcess : ModuleRules
{
	public PostProcess(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
