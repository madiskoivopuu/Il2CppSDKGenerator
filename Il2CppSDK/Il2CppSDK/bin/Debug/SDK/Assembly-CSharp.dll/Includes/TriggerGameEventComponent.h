#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerGameEventComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerGameEventComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerGameEventComponent*, uintptr_t))(Il2CppBase() + 0x15258BC))(this, target);
	}

};

}
