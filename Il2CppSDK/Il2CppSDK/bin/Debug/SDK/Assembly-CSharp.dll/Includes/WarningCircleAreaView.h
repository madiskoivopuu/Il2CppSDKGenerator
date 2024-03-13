#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWarningAreaView.h" 

class WarningCircleAreaView : public BaseWarningAreaView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningCircleAreaView"));
	}

	template <typename T = uintptr_t> T& _baseCircle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _holeCircle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _circleAnimated() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _currentCoroutine() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnStartPlay() {
		return ((T (*)(WarningCircleAreaView*))(Il2CppBase() + 0x112C134))(this);
	}
	template <typename T = uintptr_t> T Rotune() {
		return ((T (*)(WarningCircleAreaView*))(Il2CppBase() + 0x112C234))(this);
	}

};

