#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseRuneContainer" 

class ClassRuneContainer: BaseRuneContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneContainer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _inventorySlots() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _runeItemPrefab() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _runeItemLockPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _lockItems() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _playerClassType() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _isLocked() {
		return *(T*)((uintptr_t)this + 0x91);
	}

	template <typename T = int32_t> T get_GridWidth() {
		return ((T (*)(ClassRuneContainer*))(Il2CppBase() + 0x159BD84))(this);
	}
	template <typename T = void> T Bind(uintptr_t runePanel) {
		return ((T (*)(ClassRuneContainer*, uintptr_t))(Il2CppBase() + 0x159BD8C))(this, runePanel);
	}
	template <typename T = uintptr_t> T GetFirstEmptyOrDeactivatedSlot() {
		return ((T (*)(ClassRuneContainer*))(Il2CppBase() + 0x159CCC8))(this);
	}

};

}
