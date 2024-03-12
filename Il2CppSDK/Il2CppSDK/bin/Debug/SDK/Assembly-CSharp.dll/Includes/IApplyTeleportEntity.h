#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyTeleportEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyTeleportEntity"));
	}


	template <typename T = uintptr_t> T get_applyTeleport() {
		return ((T (*)(IApplyTeleportEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyTeleport() {
		return ((T (*)(IApplyTeleportEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyTeleport(Il2CppString* newTargetName, uintptr_t newSelector, uintptr_t newDirection, float newOffset, bool newIgnoreWall) {
		return ((T (*)(IApplyTeleportEntity*, Il2CppString*, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x0))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename T = void> T ReplaceApplyTeleport(Il2CppString* newTargetName, uintptr_t newSelector, uintptr_t newDirection, float newOffset, bool newIgnoreWall) {
		return ((T (*)(IApplyTeleportEntity*, Il2CppString*, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x0))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename T = void> T RemoveApplyTeleport() {
		return ((T (*)(IApplyTeleportEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
