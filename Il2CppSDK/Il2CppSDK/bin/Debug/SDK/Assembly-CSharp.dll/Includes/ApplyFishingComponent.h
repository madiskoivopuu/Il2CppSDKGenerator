#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyFishingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyFishingComponent"));
	}

	template <typename R = Parameters*> R& Param() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = StateParameters> R& State() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyFishingComponent*, Il2CppObject*))(Il2CppBase() + 0x1894378))(this, targetObject);
	}

};

