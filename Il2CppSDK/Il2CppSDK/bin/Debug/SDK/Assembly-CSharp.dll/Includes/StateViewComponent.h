#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateViewComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FirstOfValues() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(StateViewComponent*, uintptr_t))(Il2CppBase() + 0x148F540))(this, target);
	}

};

}
