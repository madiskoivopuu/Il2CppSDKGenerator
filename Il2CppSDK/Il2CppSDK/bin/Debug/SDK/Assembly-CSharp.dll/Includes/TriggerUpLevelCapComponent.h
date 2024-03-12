#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerUpLevelCapComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerUpLevelCapComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerUpLevelCapComponent*, uintptr_t))(Il2CppBase() + 0x1525BAC))(this, target);
	}

};

}
