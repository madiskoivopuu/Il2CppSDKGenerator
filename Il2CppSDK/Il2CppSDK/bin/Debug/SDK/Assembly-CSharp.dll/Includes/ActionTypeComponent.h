#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionTypeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionTypeComponent"));
	}

	template <typename R = ActionType*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

