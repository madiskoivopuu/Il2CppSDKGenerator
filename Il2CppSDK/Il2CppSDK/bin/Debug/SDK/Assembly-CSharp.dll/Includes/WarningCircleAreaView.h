#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWarningAreaView.h" 

class WarningCircleAreaView : public BaseWarningAreaView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningCircleAreaView"));
	}

	template <typename R = uintptr_t> R& _baseCircle() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _holeCircle() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _circleAnimated() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _currentCoroutine() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R OnStartPlay() {
		return ((R (*)(WarningCircleAreaView*))(Il2CppBase() + 0x112C134))(this);
	}
	template <typename R = uintptr_t> R Rotune() {
		return ((R (*)(WarningCircleAreaView*))(Il2CppBase() + 0x112C234))(this);
	}

};

