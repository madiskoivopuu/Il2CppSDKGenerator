#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccumulativeExchangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccumulativeExchangeComponent"));
	}

	template <typename R = Il2CppArray<ExchangeResource>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<FilteredResources>*> R& Filters() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<RewardResource>*> R& Rewards() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = RewardResource> R& AccumulativeReward() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& ConsiderDurability() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& SecondsToComplete() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = int32_t> R& SpeedUpCurrencyCount() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& AnalyticEvent() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& Effect() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& InfoText() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& WindowIcon() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& WindowDesk() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& UseButtonText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& GetRewardButtonText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppString*> R& SpeedUpButtonText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppString*> R& WaitTillEndWarningText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppString*> R& TakeRewardWarningText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AccumulativeExchangeComponent*, Il2CppObject*))(Il2CppBase() + 0x18DF7D4))(this, target);
	}

};

