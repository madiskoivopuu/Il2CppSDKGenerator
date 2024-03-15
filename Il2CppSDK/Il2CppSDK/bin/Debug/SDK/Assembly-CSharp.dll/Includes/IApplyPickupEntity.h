#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyPickupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyPickupEntity"));
	}


	template <typename R = ApplyPickupComponent*> R get_applyPickup() {
		return ((R (*)(IApplyPickupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyPickup() {
		return ((R (*)(IApplyPickupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((R (*)(IApplyPickupEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x0))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename R = void> R ReplaceApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((R (*)(IApplyPickupEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x0))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename R = void> R RemoveApplyPickup() {
		return ((R (*)(IApplyPickupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

