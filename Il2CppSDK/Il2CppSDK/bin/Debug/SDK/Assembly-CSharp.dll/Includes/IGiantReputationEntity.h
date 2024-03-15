#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGiantReputationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGiantReputationEntity"));
	}


	template <typename R = GiantReputationComponent*> R get_giantReputation() {
		return ((R (*)(IGiantReputationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGiantReputation() {
		return ((R (*)(IGiantReputationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGiantReputation(int32_t newCount) {
		return ((R (*)(IGiantReputationEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceGiantReputation(int32_t newCount) {
		return ((R (*)(IGiantReputationEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveGiantReputation() {
		return ((R (*)(IGiantReputationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

