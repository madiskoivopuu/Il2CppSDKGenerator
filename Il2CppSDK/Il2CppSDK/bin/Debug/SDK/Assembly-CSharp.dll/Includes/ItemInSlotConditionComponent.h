#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseItemConditionComponent.h" 

class ItemInSlotConditionComponent : public BaseItemConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemInSlotConditionComponent"));
	}

	template <typename R = int32_t> R& SlotIndex() {
		return *(R*)((uintptr_t)this + 0x3C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ItemInSlotConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x14CC934))(this, target);
	}

};

