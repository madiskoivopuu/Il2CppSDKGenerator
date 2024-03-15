#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyOnRewardedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyOnRewardedComponent"));
	}

	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DestroyOnRewardedComponent*, Il2CppObject*))(Il2CppBase() + 0xEBEBB8))(this, target);
	}

};

