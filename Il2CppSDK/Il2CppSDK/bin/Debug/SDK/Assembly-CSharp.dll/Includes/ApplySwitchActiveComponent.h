#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySwitchActiveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySwitchActiveComponent"));
	}

	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& SetActive() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& OnEffectName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& OffEffectName() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplySwitchActiveComponent*, uintptr_t))(Il2CppBase() + 0x1895548))(this, target);
	}

};

}
