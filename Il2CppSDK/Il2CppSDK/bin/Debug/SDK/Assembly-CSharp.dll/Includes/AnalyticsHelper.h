#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsHelper"));
	}


	template <typename T = AnalyticsEntity*> static T OnEvent(AnalyticsContext* context, AnalyticsSystem* system, Il2CppString* eventName, Il2CppString* action, Il2CppString* label, Il2CppString* sublabel, int64_t value, bool isOftenEvent, int64_t creationTime, bool isFirstTimeEvent, int64_t valueTwo) {
		return ((T (*)(void *, AnalyticsContext*, AnalyticsSystem*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, bool, int64_t, bool, int64_t))(Il2CppBase() + 0x12A275C))(0, context, system, eventName, action, label, sublabel, value, isOftenEvent, creationTime, isFirstTimeEvent, valueTwo);
	}

};

