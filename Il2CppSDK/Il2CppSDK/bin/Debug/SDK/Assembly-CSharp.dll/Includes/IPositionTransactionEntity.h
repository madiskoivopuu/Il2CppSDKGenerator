#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPositionTransactionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPositionTransactionEntity"));
	}


	template <typename T = PositionTransactionComponent*> T get_positionTransaction() {
		return ((T (*)(IPositionTransactionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPositionTransaction() {
		return ((T (*)(IPositionTransactionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPositionTransaction(Ease* newEase, float newDuration, int64_t newStartTime, Vec2* newStartPosition, Vec2* newEndPosition) {
		return ((T (*)(IPositionTransactionEntity*, Ease*, float, int64_t, Vec2*, Vec2*))(Il2CppBase() + 0x0))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T ReplacePositionTransaction(Ease* newEase, float newDuration, int64_t newStartTime, Vec2* newStartPosition, Vec2* newEndPosition) {
		return ((T (*)(IPositionTransactionEntity*, Ease*, float, int64_t, Vec2*, Vec2*))(Il2CppBase() + 0x0))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T RemovePositionTransaction() {
		return ((T (*)(IPositionTransactionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

