#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISlotCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISlotCountEntity"));
	}


	template <typename R = SlotCountComponent*> R get_slotCount() {
		return ((R (*)(ISlotCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSlotCount() {
		return ((R (*)(ISlotCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSlotCount(int32_t newValue) {
		return ((R (*)(ISlotCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceSlotCount(int32_t newValue) {
		return ((R (*)(ISlotCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveSlotCount() {
		return ((R (*)(ISlotCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

