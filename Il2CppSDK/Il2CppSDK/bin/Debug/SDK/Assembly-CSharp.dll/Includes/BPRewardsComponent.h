#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BPRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BPRewardsComponent"));
	}

	 Il2CppDictionary<CurrencyType*, Reward*>*& Dictionary() {
		return *(Il2CppDictionary<CurrencyType*, Reward*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Set(CurrencyType* currencyType, int32_t main, int32_t premium) {
		return ((R (*)(BPRewardsComponent*, CurrencyType*, int32_t, int32_t))(Il2CppBase() + 0xFBA3A0))(this, currencyType, main, premium);
	}
	template <typename R = Reward*> R Get(CurrencyType* currencyType) {
		return ((R (*)(BPRewardsComponent*, CurrencyType*))(Il2CppBase() + 0xFBA474))(this, currencyType);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BPRewardsComponent*, Il2CppObject*))(Il2CppBase() + 0xFBA4F0))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BPRewardsComponent*, uintptr_t))(Il2CppBase() + 0xFBA588))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BPRewardsComponent*, uintptr_t))(Il2CppBase() + 0xFBA72C))(this, writer);
	}

};

