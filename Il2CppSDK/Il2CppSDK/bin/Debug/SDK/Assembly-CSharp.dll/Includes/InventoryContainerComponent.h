#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryContainerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryContainerComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& RequiredItems() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& AnalyticName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ButtonText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& NoFreeSlotsText() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(InventoryContainerComponent*, uintptr_t))(Il2CppBase() + 0x1471504))(this, target);
	}

};

}
