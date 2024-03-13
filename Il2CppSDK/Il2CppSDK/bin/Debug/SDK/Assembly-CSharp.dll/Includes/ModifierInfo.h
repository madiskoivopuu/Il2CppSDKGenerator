#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierInfo"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Dependents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Action3ICommonContexts*, bool, GameEntity*>*> T& Calc() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

