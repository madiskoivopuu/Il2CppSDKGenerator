#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FontanelContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FontanelContainer"));
	}

	 Il2CppList<InventorySlot*>*& PrerequisiteSlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x18);
	}
	 Il2CppList<CurrencyInventoryItem*>*& CurrencyItems() {
		return *(Il2CppList<CurrencyInventoryItem*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& DontShowBop() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 Il2CppList<InventoryItem*>* Bind(UIWindow* window, GameEntity* entity) {
		return ((Il2CppList<InventoryItem*>* (*)(FontanelContainer*, UIWindow*, GameEntity*))(Il2CppBase() + 0x15FA4D4))(this, window, entity);
	}

};

