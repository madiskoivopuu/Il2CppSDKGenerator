#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDestroyChildrenComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDestroyChildrenComponent"));
	}

	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyDestroyChildrenComponent*, Il2CppObject*))(Il2CppBase() + 0x18940D8))(this, target);
	}

};

