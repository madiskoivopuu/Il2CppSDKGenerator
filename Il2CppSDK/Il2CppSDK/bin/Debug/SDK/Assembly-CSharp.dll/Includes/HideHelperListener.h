#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideHelperListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideHelperListener"));
	}


	template <typename T = void> T Execute(uintptr_t entity, float deltaTime) {
		return ((T (*)(HideHelperListener*, uintptr_t, float))(Il2CppBase() + 0x0))(this, entity, deltaTime);
	}

};

}
