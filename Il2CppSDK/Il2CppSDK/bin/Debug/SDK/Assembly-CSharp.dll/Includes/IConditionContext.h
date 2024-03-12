#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IConditionContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IConditionContext"));
	}


	template <typename T = uintptr_t> T get_conditions() {
		return ((T (*)(IConditionContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
