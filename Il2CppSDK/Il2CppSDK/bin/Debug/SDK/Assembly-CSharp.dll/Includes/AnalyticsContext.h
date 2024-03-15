#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 
#include "AnalyticsEntity.h" 

class AnalyticsContext : public Context1<AnalyticsEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsContext"));
	}

	template <typename R = Il2CppString*> static R& Sublabel() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 HashSet1<AnalyticsEntity*>* GetEntitiesByEventParams(Il2CppString* eventName, Il2CppString* action, Il2CppString* label, Il2CppString* sublabel) {
		return ((HashSet1<AnalyticsEntity*>* (*)(AnalyticsContext*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12A06A8))(this, eventName, action, label, sublabel);
	}

};

