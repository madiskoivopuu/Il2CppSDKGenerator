#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrackBoxView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrackBoxView"));
	}

	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& complete() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& activeView() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& inactiveView() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& onClick() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isComplete() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isActive() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& manualTrackingEnabled() {
		return *(T*)((uintptr_t)this + 0x42);
	}

	template <typename T = bool> T get_IsActive() {
		return ((T (*)(TrackBoxView*))(Il2CppBase() + 0x150E0AC))(this);
	}
	template <typename T = void> T Bind(uintptr_t onClick, bool manualTrackingEnabled, bool canBeChanged, bool isActive, bool isComplete) {
		return ((T (*)(TrackBoxView*, uintptr_t, bool, bool, bool, bool))(Il2CppBase() + 0x150E0B4))(this, onClick, manualTrackingEnabled, canBeChanged, isActive, isComplete);
	}
	template <typename T = void> T SwitchState(bool isActive, bool isComplete) {
		return ((T (*)(TrackBoxView*, bool, bool))(Il2CppBase() + 0x150E1D0))(this, isActive, isComplete);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(TrackBoxView*))(Il2CppBase() + 0x150E268))(this);
	}
	template <typename T = void> T OnCompleteClick() {
		return ((T (*)(TrackBoxView*))(Il2CppBase() + 0x150E288))(this);
	}

};

}
