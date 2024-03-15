#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierInfo"));
	}

	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<int32_t>*> R& Dependents() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action3<ICommonContexts*, bool, GameEntity*>*& Calc() {
		return *(Action3<ICommonContexts*, bool, GameEntity*>**)((uintptr_t)this + 0x20);
	}


};

