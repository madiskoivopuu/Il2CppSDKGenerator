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

	template <typename T = Il2CppString*> T GetActionName(ICommonContexts* world, GameEntity* actor, GameEntity* target) {
		return ((T (*)(BaseActionComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0xFBB874))(this, world, actor, target);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(BaseActionComponent*, Il2CppObject*))(Il2CppBase() + 0xFBB964))(this, targetObject);
	}

};

