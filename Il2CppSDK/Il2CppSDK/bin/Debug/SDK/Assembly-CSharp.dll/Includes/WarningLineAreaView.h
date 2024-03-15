#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWarningAreaView.h" 

class WarningLineAreaView : public BaseWarningAreaView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningLineAreaView"));
	}

	template <typename R = uintptr_t> R& _rightPart() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _leftPart() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _middlePart() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _currentCoroutine() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R OnStartPlay() {
		return ((R (*)(WarningLineAreaView*))(Il2CppBase() + 0x112D494))(this);
	}
	template <typename R = uintptr_t> R Rotune() {
		return ((R (*)(WarningLineAreaView*))(Il2CppBase() + 0x112D5B4))(this);
	}

};

