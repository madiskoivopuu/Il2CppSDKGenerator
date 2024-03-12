#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseActionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseActionComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T GetActionName(uintptr_t world, uintptr_t actor, uintptr_t target) {
		return ((T (*)(BaseActionComponent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xFBB874))(this, world, actor, target);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BaseActionComponent*, uintptr_t))(Il2CppBase() + 0xFBB964))(this, targetObject);
	}

};

}
