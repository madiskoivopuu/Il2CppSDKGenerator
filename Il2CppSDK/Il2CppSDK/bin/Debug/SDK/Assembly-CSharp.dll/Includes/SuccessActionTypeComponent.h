#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SuccessActionTypeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SuccessActionTypeComponent"));
	}

	template <typename T = ActionType*> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

