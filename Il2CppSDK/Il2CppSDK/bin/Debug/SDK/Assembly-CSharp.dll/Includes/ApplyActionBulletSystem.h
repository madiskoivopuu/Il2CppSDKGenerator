#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyActionBulletSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyActionBulletSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<ActionEntity*>* GetTrigger(IContext1<ActionEntity*>* context) {
		return ((ICollector1<ActionEntity*>* (*)(ApplyActionBulletSystem*, IContext1<ActionEntity*>*))(Il2CppBase() + 0x18929F0))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* entity) {
		return ((R (*)(ApplyActionBulletSystem*, ActionEntity*))(Il2CppBase() + 0x1892B54))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* entities) {
		return ((R (*)(ApplyActionBulletSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x1892BA0))(this, entities);
	}

};

