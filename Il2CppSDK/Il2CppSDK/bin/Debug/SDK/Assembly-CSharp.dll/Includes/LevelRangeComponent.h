#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelRangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelRangeComponent"));
	}

	template <typename T = void*> T& Min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Max() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(LevelRangeComponent*, uintptr_t))(Il2CppBase() + 0x142BC50))(this, target);
	}

};

}
