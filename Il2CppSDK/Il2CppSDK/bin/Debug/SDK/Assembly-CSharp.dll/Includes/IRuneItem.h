#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneItem"));
	}


	template <typename R = InventorySlot*> R get_Slot() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = RuneItemState> R get_RuneItemState() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_RuneItemState(RuneItemState value) {
		return ((R (*)(IRuneItem*, RuneItemState))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = Il2CppString*> R get_RuneBlueprint() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsMaxGrade() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_RuneCount() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsRuneItem() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(IRuneItem*, bool))(Il2CppBase() + 0x0))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(IRuneItem*, bool))(Il2CppBase() + 0x0))(this, visual);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_Permanent() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_RectTransform() {
		return ((R (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}

};

