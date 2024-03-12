#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAnalyticsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAnalyticsEntity"));
	}


	template <typename T = uintptr_t> T get_analytics() {
		return ((T (*)(IAnalyticsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAnalytics() {
		return ((T (*)(IAnalyticsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAnalytics(uintptr_t newType, Il2CppString* newParam) {
		return ((T (*)(IAnalyticsEntity*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newParam);
	}
	template <typename T = void> T ReplaceAnalytics(uintptr_t newType, Il2CppString* newParam) {
		return ((T (*)(IAnalyticsEntity*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newParam);
	}
	template <typename T = void> T RemoveAnalytics() {
		return ((T (*)(IAnalyticsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
