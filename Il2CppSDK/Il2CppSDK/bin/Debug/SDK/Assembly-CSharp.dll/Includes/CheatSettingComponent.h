#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatSettingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatSettingComponent"));
	}

	template <typename T = Il2CppString*> T& Category() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CheatSettingComponent*, uintptr_t))(Il2CppBase() + 0x173CDF0))(this, target);
	}

};

}
