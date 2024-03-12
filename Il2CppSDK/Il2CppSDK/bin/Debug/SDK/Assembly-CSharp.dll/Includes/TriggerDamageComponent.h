#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerDamageComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerDamageComponent*, uintptr_t))(Il2CppBase() + 0x1525654))(this, target);
	}

};

}
