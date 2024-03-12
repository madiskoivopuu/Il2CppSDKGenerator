#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerTargetComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerTargetComponent*, uintptr_t))(Il2CppBase() + 0x1525B94))(this, target);
	}

};

}
