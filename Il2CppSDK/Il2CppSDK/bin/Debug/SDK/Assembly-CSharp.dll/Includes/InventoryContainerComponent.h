#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryContainerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryContainerComponent"));
	}

	template <typename R = Il2CppArray<RequiredItem*>*> R& RequiredItems() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& AnalyticName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& ButtonText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& NoFreeSlotsText() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(InventoryContainerComponent*, Il2CppObject*))(Il2CppBase() + 0x1471504))(this, target);
	}

};

