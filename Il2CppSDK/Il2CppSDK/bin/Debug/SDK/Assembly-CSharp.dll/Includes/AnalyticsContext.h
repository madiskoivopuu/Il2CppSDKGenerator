#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class AnalyticsContext : public Context1<AnalyticsEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsContext"));
	}

	template <typename T = Il2CppString*> static T& Sublabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = HashSet1AnalyticsEntity*>*> T GetEntitiesByEventParams(Il2CppString* eventName, Il2CppString* action, Il2CppString* label, Il2CppString* sublabel) {
		return ((T (*)(AnalyticsContext*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12A06A8))(this, eventName, action, label, sublabel);
	}

};

