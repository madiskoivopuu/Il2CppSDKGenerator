#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassProgress"));
	}

	template <typename R = uintptr_t> R& _rootRect() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _mainProgressImage() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _mainToInfinityProgressImage() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _infinityProgressImage() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _mainBackground() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _infinityBackground() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _valueByMainStep() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _valueForFistStep() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _pointValues() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& _lastCurrencyValue() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& _mainProgressPointsCount() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = int32_t> R& _lastMainPointsValue() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& _lastPointsValue() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = int32_t> R& _pointsToInfinityPart() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& _pointsOnInfinityPart() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = bool> R& _hasInfinity() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _progressColor() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = BattlePassWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Clean() {
		return ((R (*)(BattlePassProgress*))(Il2CppBase() + 0x167CC5C))(this);
	}
	template <typename R = void> R Bind(BattlePassWindow* window, Il2CppArray<int32_t>* pointValues, int32_t pointsOnInfinityStep) {
		return ((R (*)(BattlePassProgress*, BattlePassWindow*, Il2CppArray<int32_t>*, int32_t))(Il2CppBase() + 0x167CCAC))(this, window, pointValues, pointsOnInfinityStep);
	}
	template <typename R = void> R CheckInfinity() {
		return ((R (*)(BattlePassProgress*))(Il2CppBase() + 0x167CE04))(this);
	}
	template <typename R = void> R UpdateProgress() {
		return ((R (*)(BattlePassProgress*))(Il2CppBase() + 0x167CF0C))(this);
	}

};

