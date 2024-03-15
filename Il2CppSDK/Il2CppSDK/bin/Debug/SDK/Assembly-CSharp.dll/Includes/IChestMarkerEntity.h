#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChestMarkerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChestMarkerEntity"));
	}


	template <typename R = ChestMarkerComponent*> R get_chestMarker() {
		return ((R (*)(IChestMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasChestMarker() {
		return ((R (*)(IChestMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((R (*)(IChestMarkerEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newSlotIndex, newItemName);
	}
	template <typename R = void> R ReplaceChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((R (*)(IChestMarkerEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newSlotIndex, newItemName);
	}
	template <typename R = void> R RemoveChestMarker() {
		return ((R (*)(IChestMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

