#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISlotCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISlotCountEntity"));
	}


	template <typename T = SlotCountComponent*> T get_slotCount() {
		return ((T (*)(ISlotCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSlotCount() {
		return ((T (*)(ISlotCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSlotCount(int32_t newValue) {
		return ((T (*)(ISlotCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceSlotCount(int32_t newValue) {
		return ((T (*)(ISlotCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveSlotCount() {
		return ((T (*)(ISlotCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

