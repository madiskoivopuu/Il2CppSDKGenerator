#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HidePlayerOverlap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HidePlayerOverlap"));
	}

	template <typename R = bool> R& Activate_animation() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& activated() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = float> R& Chance() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = bool> R& DestroyAfter() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Countdown() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& Timer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& Randomize() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = uintptr_t> R& animator() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Start() {
		return ((R (*)(HidePlayerOverlap*))(Il2CppBase() + 0x1C43CA8))(this);
	}
	template <typename R = void> R Kostyl() {
		return ((R (*)(HidePlayerOverlap*))(Il2CppBase() + 0x1C43D48))(this);
	}
	template <typename R = void> R OnTriggerEnter(uintptr_t Player) {
		return ((R (*)(HidePlayerOverlap*, uintptr_t))(Il2CppBase() + 0x1C43E68))(this, Player);
	}
	template <typename R = void> R OnTriggerExit(uintptr_t Player) {
		return ((R (*)(HidePlayerOverlap*, uintptr_t))(Il2CppBase() + 0x1C44014))(this, Player);
	}
	template <typename R = void> R Update() {
		return ((R (*)(HidePlayerOverlap*))(Il2CppBase() + 0x1C440B8))(this);
	}

};

