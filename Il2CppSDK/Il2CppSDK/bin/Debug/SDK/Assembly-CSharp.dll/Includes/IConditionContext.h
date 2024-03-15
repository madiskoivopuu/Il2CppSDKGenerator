#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IConditionContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IConditionContext"));
	}


	template <typename R = ConditionContext*> R get_conditions() {
		return ((R (*)(IConditionContext*))(Il2CppBase() + 0x0))(this);
	}

};

