// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Twisted_ShadowTarget : TargetRules
{
	public Twisted_ShadowTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Twisted_Shadow" } );
	}
}
