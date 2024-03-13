#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyActionBulletSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyActionBulletSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(ApplyActionBulletSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x18929F0))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* entity) {
		return ((T (*)(ApplyActionBulletSystem*, ActionEntity*))(Il2CppBase() + 0x1892B54))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* entities) {
		return ((T (*)(ApplyActionBulletSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x1892BA0))(this, entities);
	}

};

