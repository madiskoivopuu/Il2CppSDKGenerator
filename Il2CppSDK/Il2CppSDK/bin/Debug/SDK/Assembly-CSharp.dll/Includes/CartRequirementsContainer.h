#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CartRequirementsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartRequirementsContainer"));
	}

	template <typename T = Il2CppList<InventorySlot*>*> T& PrerequisiteSlots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<CurrencyInventoryItem*>*> T& CurrencyItems() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = InventoryItemDraggable*> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& DontShowBop() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppList<InventoryItem*>*> T Bind(UIWindow* window, GameEntity* entity) {
		return ((T (*)(CartRequirementsContainer*, UIWindow*, GameEntity*))(Il2CppBase() + 0x13E8274))(this, window, entity);
	}

};

