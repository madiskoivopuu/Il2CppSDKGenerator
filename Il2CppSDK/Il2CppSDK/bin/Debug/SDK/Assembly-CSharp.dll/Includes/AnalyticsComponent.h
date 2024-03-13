#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsComponent"));
	}

	template <typename T = AnalyticsTypes*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Param() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(AnalyticsComponent*, Il2CppObject*))(Il2CppBase() + 0x129F384))(this, targetObject);
	}

};

