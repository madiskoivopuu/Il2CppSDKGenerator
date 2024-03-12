#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BPRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BPRewardsComponent"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& Dictionary() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Set(uintptr_t currencyType, int32_t main, int32_t premium) {
		return ((T (*)(BPRewardsComponent*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xFBA3A0))(this, currencyType, main, premium);
	}
	template <typename T = uintptr_t> T Get(uintptr_t currencyType) {
		return ((T (*)(BPRewardsComponent*, uintptr_t))(Il2CppBase() + 0xFBA474))(this, currencyType);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BPRewardsComponent*, uintptr_t))(Il2CppBase() + 0xFBA4F0))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BPRewardsComponent*, uintptr_t))(Il2CppBase() + 0xFBA588))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BPRewardsComponent*, uintptr_t))(Il2CppBase() + 0xFBA72C))(this, writer);
	}

};

}
