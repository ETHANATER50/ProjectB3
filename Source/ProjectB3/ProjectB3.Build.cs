// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectB3 : ModuleRules
{
	public ProjectB3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
