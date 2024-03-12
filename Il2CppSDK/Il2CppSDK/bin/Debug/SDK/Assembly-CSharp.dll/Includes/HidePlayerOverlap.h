#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HidePlayerOverlap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HidePlayerOverlap"));
	}

	template <typename T = bool> T& Activate_animation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& activated() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& Chance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& DestroyAfter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Countdown() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Randomize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(HidePlayerOverlap*))(Il2CppBase() + 0x1C43CA8))(this);
	}
	template <typename T = void> T Kostyl() {
		return ((T (*)(HidePlayerOverlap*))(Il2CppBase() + 0x1C43D48))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t Player) {
		return ((T (*)(HidePlayerOverlap*, uintptr_t))(Il2CppBase() + 0x1C43E68))(this, Player);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t Player) {
		return ((T (*)(HidePlayerOverlap*, uintptr_t))(Il2CppBase() + 0x1C44014))(this, Player);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HidePlayerOverlap*))(Il2CppBase() + 0x1C440B8))(this);
	}

};

}
