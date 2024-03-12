#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGiantReputationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGiantReputationEntity"));
	}


	template <typename T = uintptr_t> T get_giantReputation() {
		return ((T (*)(IGiantReputationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGiantReputation() {
		return ((T (*)(IGiantReputationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGiantReputation(int32_t newCount) {
		return ((T (*)(IGiantReputationEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceGiantReputation(int32_t newCount) {
		return ((T (*)(IGiantReputationEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveGiantReputation() {
		return ((T (*)(IGiantReputationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
