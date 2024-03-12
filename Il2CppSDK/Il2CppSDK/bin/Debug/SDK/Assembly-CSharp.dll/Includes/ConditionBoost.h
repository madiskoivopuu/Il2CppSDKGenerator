#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionBoost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionBoost"));
	}

	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Boost() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
