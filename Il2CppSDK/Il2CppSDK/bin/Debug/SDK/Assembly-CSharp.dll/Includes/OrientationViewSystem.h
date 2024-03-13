#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OrientationViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OrientationViewSystem"));
	}


	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(OrientationViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x11E49FC))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(OrientationViewSystem*, GameEntity*))(Il2CppBase() + 0x11E4B04))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(OrientationViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x11E4B64))(this, entities);
	}

};

