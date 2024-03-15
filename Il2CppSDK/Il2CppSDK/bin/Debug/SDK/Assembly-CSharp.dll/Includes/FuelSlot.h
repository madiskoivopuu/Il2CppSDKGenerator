#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventorySlot.h" 

class FuelSlot : public InventorySlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelSlot"));
	}

	template <typename R = uintptr_t> R& FuelPlaceholder() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Splitter() {
		return *(R*)((uintptr_t)this + 0x88);
	}


};

