#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyTenacityRegenerationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTenacityRegenerationComponent"));
	}

	template <typename R = bool> R& DependsOnMaxTenacity() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyTenacityRegenerationComponent*, Il2CppObject*))(Il2CppBase() + 0x18956E4))(this, targetObject);
	}

};

