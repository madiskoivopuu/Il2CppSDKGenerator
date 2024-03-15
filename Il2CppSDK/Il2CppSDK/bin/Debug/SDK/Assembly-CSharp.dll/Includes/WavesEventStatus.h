#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WavesEventStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WavesEventStatus"));
	}

	template <typename R = uintptr_t> R& _eventName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _statusPanel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _wavesCountText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _targetsPanel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _targetsCountText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _timerPanel() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _finishPanel() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _finishText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& _wavesEventId() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& _waveIndex() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = int32_t> R& _targetsCount() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& _currentLanguage() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = bool> R get_Active() {
		return ((R (*)(WavesEventStatus*))(Il2CppBase() + 0x112E268))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(WavesEventStatus*, bool))(Il2CppBase() + 0x112E28C))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(WavesEventStatus*))(Il2CppBase() + 0x112E2F0))(this);
	}
	template <typename R = void> R UpdateView() {
		return ((R (*)(WavesEventStatus*))(Il2CppBase() + 0x112E2F8))(this);
	}

};

