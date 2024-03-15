#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseRuneContainer.h" 

class ClassRuneContainer : public BaseRuneContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneContainer"));
	}

	 Il2CppList<InventorySlot*>*& _inventorySlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x70);
	}
	template <typename R = RuneItem*> R& _runeItemPrefab() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = ClassRuneLockItem*> R& _runeItemLockPrefab() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	 Il2CppDictionary<int32_t, ClassRuneLockItem*>*& _lockItems() {
		return *(Il2CppDictionary<int32_t, ClassRuneLockItem*>**)((uintptr_t)this + 0x88);
	}
	template <typename R = PlayerClassType*> R& _playerClassType() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = bool> R& _isLocked() {
		return *(R*)((uintptr_t)this + 0x91);
	}

	template <typename R = int32_t> R get_GridWidth() {
		return ((R (*)(ClassRuneContainer*))(Il2CppBase() + 0x159BD84))(this);
	}
	template <typename R = void> R Bind(IRuneInventoryPanel* runePanel) {
		return ((R (*)(ClassRuneContainer*, IRuneInventoryPanel*))(Il2CppBase() + 0x159BD8C))(this, runePanel);
	}
	template <typename R = ClassRuneItem*> R GetFirstEmptyOrDeactivatedSlot() {
		return ((R (*)(ClassRuneContainer*))(Il2CppBase() + 0x159CCC8))(this);
	}

};

