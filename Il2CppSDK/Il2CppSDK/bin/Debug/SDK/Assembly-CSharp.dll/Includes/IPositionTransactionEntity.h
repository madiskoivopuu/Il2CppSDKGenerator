#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPositionTransactionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPositionTransactionEntity"));
	}


	template <typename T = uintptr_t> T get_positionTransaction() {
		return ((T (*)(IPositionTransactionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPositionTransaction() {
		return ((T (*)(IPositionTransactionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPositionTransaction(uintptr_t newEase, float newDuration, int64_t newStartTime, uintptr_t newStartPosition, uintptr_t newEndPosition) {
		return ((T (*)(IPositionTransactionEntity*, uintptr_t, float, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T ReplacePositionTransaction(uintptr_t newEase, float newDuration, int64_t newStartTime, uintptr_t newStartPosition, uintptr_t newEndPosition) {
		return ((T (*)(IPositionTransactionEntity*, uintptr_t, float, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T RemovePositionTransaction() {
		return ((T (*)(IPositionTransactionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
