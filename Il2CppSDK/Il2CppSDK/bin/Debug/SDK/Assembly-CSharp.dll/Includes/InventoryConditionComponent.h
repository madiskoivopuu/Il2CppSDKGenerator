#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryConditionComponent"));
	}

	template <typename T = bool> T& IsEmpty() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1int32_t>*> T& MinCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& CountArming() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(InventoryConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x146EE0C))(this, target);
	}

};

