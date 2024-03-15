#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryConditionComponent"));
	}

	template <typename R = bool> R& IsEmpty() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1int32_t>*& MinCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x14);
	}
	template <typename R = bool> R& CountArming() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(InventoryConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x146EE0C))(this, target);
	}

};

