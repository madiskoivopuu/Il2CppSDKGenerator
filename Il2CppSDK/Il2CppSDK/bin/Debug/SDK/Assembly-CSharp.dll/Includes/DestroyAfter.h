#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyAfter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyAfter"));
	}

	template <typename R = bool> R& _byDelay() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& _delay() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R Start() {
		return ((R (*)(DestroyAfter*))(Il2CppBase() + 0xEBC4C4))(this);
	}
	template <typename R = void> R DestroyByAnimationEvent() {
		return ((R (*)(DestroyAfter*))(Il2CppBase() + 0xEBC564))(this);
	}

};

