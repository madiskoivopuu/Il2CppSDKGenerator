#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerUnlockComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerUnlockComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerUnlockComponent*, uintptr_t))(Il2CppBase() + 0x1525BA0))(this, target);
	}

};

}
