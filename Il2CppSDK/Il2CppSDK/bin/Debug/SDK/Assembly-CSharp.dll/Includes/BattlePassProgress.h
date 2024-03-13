#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassProgress"));
	}

	template <typename T = uintptr_t> T& _rootRect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _mainProgressImage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _mainToInfinityProgressImage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _infinityProgressImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _mainBackground() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _infinityBackground() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _valueByMainStep() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _valueForFistStep() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pointValues() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _lastCurrencyValue() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _mainProgressPointsCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _lastMainPointsValue() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _lastPointsValue() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _pointsToInfinityPart() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _pointsOnInfinityPart() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& _hasInfinity() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _progressColor() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = BattlePassWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Clean() {
		return ((T (*)(BattlePassProgress*))(Il2CppBase() + 0x167CC5C))(this);
	}
	template <typename T = void> T Bind(BattlePassWindow* window, Il2CppArray<uintptr_t>* pointValues, int32_t pointsOnInfinityStep) {
		return ((T (*)(BattlePassProgress*, BattlePassWindow*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x167CCAC))(this, window, pointValues, pointsOnInfinityStep);
	}
	template <typename T = void> T CheckInfinity() {
		return ((T (*)(BattlePassProgress*))(Il2CppBase() + 0x167CE04))(this);
	}
	template <typename T = void> T UpdateProgress() {
		return ((T (*)(BattlePassProgress*))(Il2CppBase() + 0x167CF0C))(this);
	}

};

