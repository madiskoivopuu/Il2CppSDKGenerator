#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassNextPrizeItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassNextPrizeItem"));
	}

	template <typename T = uintptr_t> T& BattlePassItem() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& PrevProgress() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PrevProgressImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& NextProgress() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& NextProgressImage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& InfitiyLock() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Placeholder() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _lastCurrencyValue() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _fromPoins() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _currentPoints() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _nextPoints() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = uintptr_t> T get_Placeholder() {
		return ((T (*)(BattlePassNextPrizeItem*))(Il2CppBase() + 0x167CA40))(this);
	}
	template <typename T = void> T set_Placeholder(uintptr_t value) {
		return ((T (*)(BattlePassNextPrizeItem*, uintptr_t))(Il2CppBase() + 0x167CA48))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t placeholder, uintptr_t window, int32_t fromPoints, int32_t currentPoints, int32_t nextPoints, bool nextIsInfinity) {
		return ((T (*)(BattlePassNextPrizeItem*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x167CA50))(this, placeholder, window, fromPoints, currentPoints, nextPoints, nextIsInfinity);
	}
	template <typename T = void> T UpdateProgress() {
		return ((T (*)(BattlePassNextPrizeItem*))(Il2CppBase() + 0x167CB54))(this);
	}

};

}
