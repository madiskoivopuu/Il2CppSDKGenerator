#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorEventsProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorEventsProxy"));
	}

	 HashSet1<IAnimatorEventsProxyListener*>*& _listeners() {
		return *(HashSet1<IAnimatorEventsProxyListener*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Raise(uintptr_t animationEvent) {
		return ((R (*)(AnimatorEventsProxy*, uintptr_t))(Il2CppBase() + 0x188D970))(this, animationEvent);
	}
	template <typename R = void> R AddListener(IAnimatorEventsProxyListener* listener) {
		return ((R (*)(AnimatorEventsProxy*, IAnimatorEventsProxyListener*))(Il2CppBase() + 0x188D46C))(this, listener);
	}
	template <typename R = void> R RemoveListener(IAnimatorEventsProxyListener* listener) {
		return ((R (*)(AnimatorEventsProxy*, IAnimatorEventsProxyListener*))(Il2CppBase() + 0x188D8F8))(this, listener);
	}

};

