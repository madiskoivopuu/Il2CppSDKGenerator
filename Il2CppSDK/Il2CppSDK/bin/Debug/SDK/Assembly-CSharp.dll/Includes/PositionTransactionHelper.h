#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionTransactionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionTransactionHelper"));
	}


	template <typename T = void> static T MoveView(uintptr_t target, uintptr_t ease, float duration, uintptr_t end) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x16D5BA8))(0, target, ease, duration, end);
	}
	template <typename T = void> static T MoveView_1(uintptr_t target, uintptr_t ease, float duration, uintptr_t start, uintptr_t end) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D5CEC))(0, target, ease, duration, start, end);
	}
	template <typename T = void> static T MoveView_2(uintptr_t target, uintptr_t transactionComponent, uintptr_t end) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D5D84))(0, target, transactionComponent, end);
	}
	template <typename T = void> static T MoveView_3(uintptr_t target, uintptr_t transactionComponent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D5F34))(0, target, transactionComponent);
	}
	template <typename T = void> static T MoveView_4(uintptr_t target, uintptr_t transactionComponent, uintptr_t start, uintptr_t end) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D5EA4))(0, target, transactionComponent, start, end);
	}
	template <typename T = void> static T StopMoveView(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D5F88))(0, target);
	}

};

}
