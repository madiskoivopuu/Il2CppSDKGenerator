#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImmuneConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImmuneConditionComponent"));
	}

	template <typename T = void*> T& Unstopable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& DebuffImmune() {
		return *(T*)((uintptr_t)this + 0x12);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ImmuneConditionComponent*, uintptr_t))(Il2CppBase() + 0x1E3DC14))(this, target);
	}

};

}
