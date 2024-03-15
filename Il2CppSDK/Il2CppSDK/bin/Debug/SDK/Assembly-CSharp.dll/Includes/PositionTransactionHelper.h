#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionTransactionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionTransactionHelper"));
	}


	template <typename R = void> static R MoveView(GameEntity* target, Ease* ease, float duration, Vec2* end) {
		return ((R (*)(void *, GameEntity*, Ease*, float, Vec2*))(Il2CppBase() + 0x16D5BA8))(0, target, ease, duration, end);
	}
	template <typename R = void> static R MoveView_1(GameEntity* target, Ease* ease, float duration, Vec2* start, Vec2* end) {
		return ((R (*)(void *, GameEntity*, Ease*, float, Vec2*, Vec2*))(Il2CppBase() + 0x16D5CEC))(0, target, ease, duration, start, end);
	}
	template <typename R = void> static R MoveView_2(GameEntity* target, PositionTransactionComponent* transactionComponent, Vec2* end) {
		return ((R (*)(void *, GameEntity*, PositionTransactionComponent*, Vec2*))(Il2CppBase() + 0x16D5D84))(0, target, transactionComponent, end);
	}
	template <typename R = void> static R MoveView_3(GameEntity* target, PositionTransactionComponent* transactionComponent) {
		return ((R (*)(void *, GameEntity*, PositionTransactionComponent*))(Il2CppBase() + 0x16D5F34))(0, target, transactionComponent);
	}
	template <typename R = void> static R MoveView_4(GameEntity* target, PositionTransactionComponent* transactionComponent, Vec2* start, Vec2* end) {
		return ((R (*)(void *, GameEntity*, PositionTransactionComponent*, Vec2*, Vec2*))(Il2CppBase() + 0x16D5EA4))(0, target, transactionComponent, start, end);
	}
	template <typename R = void> static R StopMoveView(GameEntity* target) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x16D5F88))(0, target);
	}

};

