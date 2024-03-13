#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExtractWorkEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExtractWorkEntity"));
	}


	template <typename T = ExtractWorkComponent*> T get_extractWork() {
		return ((T (*)(IExtractWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasExtractWork() {
		return ((T (*)(IExtractWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((T (*)(IExtractWorkEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0x0))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename T = void> T ReplaceExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((T (*)(IExtractWorkEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0x0))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename T = void> T RemoveExtractWork() {
		return ((T (*)(IExtractWorkEntity*))(Il2CppBase() + 0x0))(this);
	}

};

