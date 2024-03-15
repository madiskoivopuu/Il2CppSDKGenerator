#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAnalyticsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAnalyticsEntity"));
	}


	template <typename R = AnalyticsComponent*> R get_analytics() {
		return ((R (*)(IAnalyticsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAnalytics() {
		return ((R (*)(IAnalyticsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAnalytics(AnalyticsTypes newType, Il2CppString* newParam) {
		return ((R (*)(IAnalyticsEntity*, AnalyticsTypes, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newParam);
	}
	template <typename R = void> R ReplaceAnalytics(AnalyticsTypes newType, Il2CppString* newParam) {
		return ((R (*)(IAnalyticsEntity*, AnalyticsTypes, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newParam);
	}
	template <typename R = void> R RemoveAnalytics() {
		return ((R (*)(IAnalyticsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

