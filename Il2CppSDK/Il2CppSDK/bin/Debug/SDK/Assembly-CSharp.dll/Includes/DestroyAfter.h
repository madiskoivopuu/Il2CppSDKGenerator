#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyAfter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyAfter"));
	}

	template <typename T = bool> T& _byDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _delay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DestroyAfter*))(Il2CppBase() + 0xEBC4C4))(this);
	}
	template <typename T = void> T DestroyByAnimationEvent() {
		return ((T (*)(DestroyAfter*))(Il2CppBase() + 0xEBC564))(this);
	}

};

