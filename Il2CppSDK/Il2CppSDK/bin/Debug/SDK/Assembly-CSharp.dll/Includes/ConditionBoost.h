#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionBoost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionBoost"));
	}

	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Boost() {
		return *(R*)((uintptr_t)this + 0x8);
	}


};

