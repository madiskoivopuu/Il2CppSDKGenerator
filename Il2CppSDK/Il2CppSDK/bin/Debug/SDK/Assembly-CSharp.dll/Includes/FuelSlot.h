#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventorySlot" 

class FuelSlot: InventorySlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelSlot"));
	}

	template <typename T = uintptr_t> T& FuelPlaceholder() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Splitter() {
		return *(T*)((uintptr_t)this + 0x88);
	}


};

}
