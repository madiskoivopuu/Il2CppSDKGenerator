#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKTriggerComponent"));
	}

	template <typename T = bool> T& Move() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AFKTriggerComponent*, uintptr_t))(Il2CppBase() + 0x1D95984))(this, targetObject);
	}

};

}
