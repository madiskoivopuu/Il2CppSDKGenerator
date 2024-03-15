#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsComponent"));
	}

	template <typename R = AnalyticsTypes*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Param() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AnalyticsComponent*, Il2CppObject*))(Il2CppBase() + 0x129F384))(this, targetObject);
	}

};

