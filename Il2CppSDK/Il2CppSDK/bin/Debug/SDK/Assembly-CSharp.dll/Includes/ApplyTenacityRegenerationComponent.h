#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyTenacityRegenerationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTenacityRegenerationComponent"));
	}

	template <typename T = bool> T& DependsOnMaxTenacity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ApplyTenacityRegenerationComponent*, Il2CppObject*))(Il2CppBase() + 0x18956E4))(this, targetObject);
	}

};

