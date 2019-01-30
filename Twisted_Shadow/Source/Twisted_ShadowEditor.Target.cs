// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Twisted_ShadowEditorTarget : TargetRules
{
	public Twisted_ShadowEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Twisted_Shadow" } );
	}
}
