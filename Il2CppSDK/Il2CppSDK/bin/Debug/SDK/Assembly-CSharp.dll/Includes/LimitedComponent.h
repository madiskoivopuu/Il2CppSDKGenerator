#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LimitedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LimitedComponent"));
	}

	template <typename T = void*> T& Min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Max() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(LimitedComponent*, uintptr_t))(Il2CppBase() + 0x142CA7C))(this, target);
	}

};

}
