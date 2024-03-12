#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftConditionComponent"));
	}

	template <typename T = void*> T& OutputSlotsEmpty() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CraftConditionComponent*, uintptr_t))(Il2CppBase() + 0x1341604))(this, target);
	}

};

}
