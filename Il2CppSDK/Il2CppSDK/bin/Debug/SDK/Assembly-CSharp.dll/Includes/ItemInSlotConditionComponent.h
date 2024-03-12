#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseItemConditionComponent" 

class ItemInSlotConditionComponent: BaseItemConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemInSlotConditionComponent"));
	}

	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ItemInSlotConditionComponent*, uintptr_t))(Il2CppBase() + 0x14CC934))(this, target);
	}

};

}
