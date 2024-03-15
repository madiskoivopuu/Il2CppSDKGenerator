#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Transition.h" 

class LoginTransition : public Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginTransition"));
	}

	template <typename R = float> R& ReconnetDelay() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

