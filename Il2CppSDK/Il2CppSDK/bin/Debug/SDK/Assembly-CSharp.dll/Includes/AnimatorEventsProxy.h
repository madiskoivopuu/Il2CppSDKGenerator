#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorEventsProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorEventsProxy"));
	}

	template <typename T = HashSet1IAnimatorEventsProxyListener*>*> T& _listeners() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Raise(uintptr_t animationEvent) {
		return ((T (*)(AnimatorEventsProxy*, uintptr_t))(Il2CppBase() + 0x188D970))(this, animationEvent);
	}
	template <typename T = void> T AddListener(IAnimatorEventsProxyListener* listener) {
		return ((T (*)(AnimatorEventsProxy*, IAnimatorEventsProxyListener*))(Il2CppBase() + 0x188D46C))(this, listener);
	}
	template <typename T = void> T RemoveListener(IAnimatorEventsProxyListener* listener) {
		return ((T (*)(AnimatorEventsProxy*, IAnimatorEventsProxyListener*))(Il2CppBase() + 0x188D8F8))(this, listener);
	}

};

