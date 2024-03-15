#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotsContainer"));
	}

	template <typename R = uintptr_t> R& Root() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<InventorySlot*>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

