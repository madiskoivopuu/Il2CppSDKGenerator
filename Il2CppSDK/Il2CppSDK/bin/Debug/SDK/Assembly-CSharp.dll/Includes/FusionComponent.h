#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FusionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FusionComponent"));
	}

	template <typename T = float> T& Cooldown() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& AnalyticName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(FusionComponent*, uintptr_t))(Il2CppBase() + 0x1601EE0))(this, target);
	}

};

}
