#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrackBoxView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrackBoxView"));
	}

	template <typename R = uintptr_t> R& button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& complete() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& activeView() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& inactiveView() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& onClick() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& isComplete() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& isActive() {
		return *(R*)((uintptr_t)this + 0x41);
	}
	template <typename R = bool> R& manualTrackingEnabled() {
		return *(R*)((uintptr_t)this + 0x42);
	}

	template <typename R = bool> R get_IsActive() {
		return ((R (*)(TrackBoxView*))(Il2CppBase() + 0x150E0AC))(this);
	}
	template <typename R = void> R Bind(uintptr_t onClick, bool manualTrackingEnabled, bool canBeChanged, bool isActive, bool isComplete) {
		return ((R (*)(TrackBoxView*, uintptr_t, bool, bool, bool, bool))(Il2CppBase() + 0x150E0B4))(this, onClick, manualTrackingEnabled, canBeChanged, isActive, isComplete);
	}
	template <typename R = void> R SwitchState(bool isActive, bool isComplete) {
		return ((R (*)(TrackBoxView*, bool, bool))(Il2CppBase() + 0x150E1D0))(this, isActive, isComplete);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(TrackBoxView*))(Il2CppBase() + 0x150E268))(this);
	}
	template <typename R = void> R OnCompleteClick() {
		return ((R (*)(TrackBoxView*))(Il2CppBase() + 0x150E288))(this);
	}

};

