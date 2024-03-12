#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyPickupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyPickupEntity"));
	}


	template <typename T = uintptr_t> T get_applyPickup() {
		return ((T (*)(IApplyPickupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyPickup() {
		return ((T (*)(IApplyPickupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((T (*)(IApplyPickupEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x0))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename T = void> T ReplaceApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((T (*)(IApplyPickupEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x0))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename T = void> T RemoveApplyPickup() {
		return ((T (*)(IApplyPickupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
