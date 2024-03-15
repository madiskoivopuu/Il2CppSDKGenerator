#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FusionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FusionComponent"));
	}

	template <typename R = float> R& Cooldown() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& AnalyticName() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(FusionComponent*, Il2CppObject*))(Il2CppBase() + 0x1601EE0))(this, target);
	}

};

