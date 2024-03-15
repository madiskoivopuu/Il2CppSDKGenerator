#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SuccessActionTypeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SuccessActionTypeComponent"));
	}

	template <typename R = ActionType*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

