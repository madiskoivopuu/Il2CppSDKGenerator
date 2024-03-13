#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWarningAreaView.h" 

class WarningLineAreaView : public BaseWarningAreaView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningLineAreaView"));
	}

	template <typename T = uintptr_t> T& _rightPart() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _leftPart() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _middlePart() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _currentCoroutine() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnStartPlay() {
		return ((T (*)(WarningLineAreaView*))(Il2CppBase() + 0x112D494))(this);
	}
	template <typename T = uintptr_t> T Rotune() {
		return ((T (*)(WarningLineAreaView*))(Il2CppBase() + 0x112D5B4))(this);
	}

};

