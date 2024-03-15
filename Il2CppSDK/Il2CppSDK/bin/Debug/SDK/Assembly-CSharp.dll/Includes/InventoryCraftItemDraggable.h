#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItemDraggable.h" 

class InventoryCraftItemDraggable : public InventoryItemDraggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryCraftItemDraggable"));
	}

	template <typename R = uintptr_t> R& LockImage() {
		return *(R*)((uintptr_t)this + 0x188);
	}

	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(InventoryCraftItemDraggable*, bool))(Il2CppBase() + 0x14715EC))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(InventoryCraftItemDraggable*, bool))(Il2CppBase() + 0x1471658))(this, visual);
	}

};

