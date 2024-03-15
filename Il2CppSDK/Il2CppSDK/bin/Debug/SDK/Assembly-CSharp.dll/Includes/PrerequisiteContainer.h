#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrerequisiteContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrerequisiteContainer"));
	}

	 Il2CppList<InventorySlot*>*& PrerequisiteSlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& DontShowBop() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity) {
		return ((R (*)(PrerequisiteContainer*, IUIWindow*, GameEntity*))(Il2CppBase() + 0x16E0F64))(this, window, entity);
	}

};

