#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyTeleportEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyTeleportEntity"));
	}


	template <typename R = ApplyTeleportComponent*> R get_applyTeleport() {
		return ((R (*)(IApplyTeleportEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyTeleport() {
		return ((R (*)(IApplyTeleportEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource newDirection, float newOffset, bool newIgnoreWall) {
		return ((R (*)(IApplyTeleportEntity*, Il2CppString*, TargetsSelector*, DirectionSource, float, bool))(Il2CppBase() + 0x0))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename R = void> R ReplaceApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource newDirection, float newOffset, bool newIgnoreWall) {
		return ((R (*)(IApplyTeleportEntity*, Il2CppString*, TargetsSelector*, DirectionSource, float, bool))(Il2CppBase() + 0x0))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename R = void> R RemoveApplyTeleport() {
		return ((R (*)(IApplyTeleportEntity*))(Il2CppBase() + 0x0))(this);
	}

};

