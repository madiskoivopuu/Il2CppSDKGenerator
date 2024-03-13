#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItemDraggable.h" 

class InventoryCraftItemDraggable : public InventoryItemDraggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryCraftItemDraggable"));
	}

	template <typename T = uintptr_t> T& LockImage() {
		return *(T*)((uintptr_t)this + 0x188);
	}

	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(InventoryCraftItemDraggable*, bool))(Il2CppBase() + 0x14715EC))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(InventoryCraftItemDraggable*, bool))(Il2CppBase() + 0x1471658))(this, visual);
	}

};

