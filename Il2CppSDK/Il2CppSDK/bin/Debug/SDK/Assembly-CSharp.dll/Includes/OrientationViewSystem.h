#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OrientationViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OrientationViewSystem"));
	}


	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(OrientationViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x11E49FC))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(OrientationViewSystem*, GameEntity*))(Il2CppBase() + 0x11E4B04))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(OrientationViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x11E4B64))(this, entities);
	}

};

