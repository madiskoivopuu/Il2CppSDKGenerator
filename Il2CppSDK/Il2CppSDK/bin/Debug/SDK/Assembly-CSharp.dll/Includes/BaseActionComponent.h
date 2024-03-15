#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseActionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseActionComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Item>*> R& List() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R GetActionName(ICommonContexts* world, GameEntity* actor, GameEntity* target) {
		return ((R (*)(BaseActionComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0xFBB874))(this, world, actor, target);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BaseActionComponent*, Il2CppObject*))(Il2CppBase() + 0xFBB964))(this, targetObject);
	}

};

