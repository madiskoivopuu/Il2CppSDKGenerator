#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueConditionComponent"));
	}

	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(StatueConditionComponent*, uintptr_t))(Il2CppBase() + 0x148FB60))(this, target);
	}

};

}
