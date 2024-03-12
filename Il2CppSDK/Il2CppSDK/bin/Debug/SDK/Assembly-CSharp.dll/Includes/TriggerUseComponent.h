#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerUseComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerUseComponent*, uintptr_t))(Il2CppBase() + 0x1525BB8))(this, target);
	}

};

}
