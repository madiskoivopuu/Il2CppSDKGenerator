#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAnimatorEventsProxyListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAnimatorEventsProxyListener"));
	}


	template <typename R = void> R Raise(uintptr_t animationEvent) {
		return ((R (*)(IAnimatorEventsProxyListener*, uintptr_t))(Il2CppBase() + 0x0))(this, animationEvent);
	}

};
