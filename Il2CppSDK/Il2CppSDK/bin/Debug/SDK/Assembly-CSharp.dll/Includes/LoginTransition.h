#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Transition" 

class LoginTransition: Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginTransition"));
	}

	template <typename T = float> T& ReconnetDelay() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
