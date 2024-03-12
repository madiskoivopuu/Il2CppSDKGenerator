#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChestMarkerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChestMarkerEntity"));
	}


	template <typename T = uintptr_t> T get_chestMarker() {
		return ((T (*)(IChestMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasChestMarker() {
		return ((T (*)(IChestMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((T (*)(IChestMarkerEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newSlotIndex, newItemName);
	}
	template <typename T = void> T ReplaceChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((T (*)(IChestMarkerEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newSlotIndex, newItemName);
	}
	template <typename T = void> T RemoveChestMarker() {
		return ((T (*)(IChestMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
