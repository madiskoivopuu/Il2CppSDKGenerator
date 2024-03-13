#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrerequisiteContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrerequisiteContainer"));
	}

	template <typename T = Il2CppList<InventorySlot*>*> T& PrerequisiteSlots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = InventoryItemDraggable*> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& DontShowBop() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Bind(IUIWindow* window, GameEntity* entity) {
		return ((T (*)(PrerequisiteContainer*, IUIWindow*, GameEntity*))(Il2CppBase() + 0x16E0F64))(this, window, entity);
	}

};

