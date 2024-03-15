#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassNextPrizeItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassNextPrizeItem"));
	}

	template <typename R = BattlePassItem*> R& BattlePassItem() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& PrevProgress() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& PrevProgressImage() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& NextProgress() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& NextProgressImage() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& InfitiyLock() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& Placeholder() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = BattlePassWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& _lastCurrencyValue() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& _fromPoins() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = int32_t> R& _currentPoints() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& _nextPoints() {
		return *(R*)((uintptr_t)this + 0x6C);
	}

	template <typename R = uintptr_t> R get_Placeholder() {
		return ((R (*)(BattlePassNextPrizeItem*))(Il2CppBase() + 0x167CA40))(this);
	}
	template <typename R = void> R set_Placeholder(uintptr_t value) {
		return ((R (*)(BattlePassNextPrizeItem*, uintptr_t))(Il2CppBase() + 0x167CA48))(this, value);
	}
	template <typename R = void> R Bind(uintptr_t placeholder, BattlePassWindow* window, int32_t fromPoints, int32_t currentPoints, int32_t nextPoints, bool nextIsInfinity) {
		return ((R (*)(BattlePassNextPrizeItem*, uintptr_t, BattlePassWindow*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x167CA50))(this, placeholder, window, fromPoints, currentPoints, nextPoints, nextIsInfinity);
	}
	template <typename R = void> R UpdateProgress() {
		return ((R (*)(BattlePassNextPrizeItem*))(Il2CppBase() + 0x167CB54))(this);
	}

};

