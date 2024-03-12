#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerLevelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerLevelComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerLevelComponent*, uintptr_t))(Il2CppBase() + 0x15258E0))(this, target);
	}

};

}
