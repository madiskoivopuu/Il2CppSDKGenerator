#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccumulativeExchangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccumulativeExchangeComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Filters() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Rewards() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AccumulativeReward() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ConsiderDurability() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& SecondsToComplete() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& SpeedUpCurrencyCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& AnalyticEvent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& Effect() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& InfoText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& WindowIcon() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& WindowDesk() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& UseButtonText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& GetRewardButtonText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& SpeedUpButtonText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& WaitTillEndWarningText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& TakeRewardWarningText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AccumulativeExchangeComponent*, uintptr_t))(Il2CppBase() + 0x18DF7D4))(this, target);
	}

};

}
