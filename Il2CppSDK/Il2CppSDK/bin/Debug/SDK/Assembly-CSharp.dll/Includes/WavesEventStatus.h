#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WavesEventStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WavesEventStatus"));
	}

	template <typename T = uintptr_t> T& _eventName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _statusPanel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _wavesCountText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _targetsPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _targetsCountText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _timerPanel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _finishPanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _finishText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _wavesEventId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _waveIndex() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _targetsCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& _currentLanguage() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = bool> T get_Active() {
		return ((T (*)(WavesEventStatus*))(Il2CppBase() + 0x112E268))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(WavesEventStatus*, bool))(Il2CppBase() + 0x112E28C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WavesEventStatus*))(Il2CppBase() + 0x112E2F0))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(WavesEventStatus*))(Il2CppBase() + 0x112E2F8))(this);
	}

};

