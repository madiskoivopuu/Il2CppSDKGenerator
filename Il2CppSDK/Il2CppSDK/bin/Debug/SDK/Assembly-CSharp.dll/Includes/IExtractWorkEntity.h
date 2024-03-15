#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExtractWorkEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExtractWorkEntity"));
	}


	template <typename R = ExtractWorkComponent*> R get_extractWork() {
		return ((R (*)(IExtractWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasExtractWork() {
		return ((R (*)(IExtractWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((R (*)(IExtractWorkEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0x0))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename R = void> R ReplaceExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((R (*)(IExtractWorkEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0x0))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename R = void> R RemoveExtractWork() {
		return ((R (*)(IExtractWorkEntity*))(Il2CppBase() + 0x0))(this);
	}

};

