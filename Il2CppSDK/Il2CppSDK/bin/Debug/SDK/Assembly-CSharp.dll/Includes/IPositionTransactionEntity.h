#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPositionTransactionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPositionTransactionEntity"));
	}


	template <typename R = PositionTransactionComponent*> R get_positionTransaction() {
		return ((R (*)(IPositionTransactionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPositionTransaction() {
		return ((R (*)(IPositionTransactionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPositionTransaction(Ease newEase, float newDuration, int64_t newStartTime, Vec2 newStartPosition, Vec2 newEndPosition) {
		return ((R (*)(IPositionTransactionEntity*, Ease, float, int64_t, Vec2, Vec2))(Il2CppBase() + 0x0))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R ReplacePositionTransaction(Ease newEase, float newDuration, int64_t newStartTime, Vec2 newStartPosition, Vec2 newEndPosition) {
		return ((R (*)(IPositionTransactionEntity*, Ease, float, int64_t, Vec2, Vec2))(Il2CppBase() + 0x0))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R RemovePositionTransaction() {
		return ((R (*)(IPositionTransactionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

