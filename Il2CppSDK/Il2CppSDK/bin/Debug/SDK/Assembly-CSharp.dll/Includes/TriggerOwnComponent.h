#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerOwnComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerOwnComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerOwnComponent*, uintptr_t))(Il2CppBase() + 0x15258EC))(this, target);
	}

};

}
