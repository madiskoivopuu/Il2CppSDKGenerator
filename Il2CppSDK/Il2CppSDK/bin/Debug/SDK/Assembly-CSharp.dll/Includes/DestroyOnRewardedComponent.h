#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyOnRewardedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyOnRewardedComponent"));
	}

	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DestroyOnRewardedComponent*, uintptr_t))(Il2CppBase() + 0xEBEBB8))(this, target);
	}

};

}
