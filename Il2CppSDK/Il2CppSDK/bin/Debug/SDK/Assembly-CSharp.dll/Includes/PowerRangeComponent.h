#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PowerRangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PowerRangeComponent"));
	}

	template <typename T = void*> T& Min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Max() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PowerRangeComponent*, uintptr_t))(Il2CppBase() + 0x16DCE54))(this, target);
	}

};

}
