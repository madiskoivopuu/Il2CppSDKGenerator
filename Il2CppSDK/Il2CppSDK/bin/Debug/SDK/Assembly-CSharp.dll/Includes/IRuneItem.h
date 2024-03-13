#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneItem"));
	}


	template <typename T = InventorySlot*> T get_Slot() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = RuneItemState*> T get_RuneItemState() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_RuneItemState(RuneItemState* value) {
		return ((T (*)(IRuneItem*, RuneItemState*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T get_RuneBlueprint() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsMaxGrade() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_RuneCount() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsRuneItem() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(IRuneItem*, bool))(Il2CppBase() + 0x0))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(IRuneItem*, bool))(Il2CppBase() + 0x0))(this, visual);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_Permanent() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_RectTransform() {
		return ((T (*)(IRuneItem*))(Il2CppBase() + 0x0))(this);
	}

};

