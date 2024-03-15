#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateViewSystem"));
	}


	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(RotateViewSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x11A527C))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(RotateViewSystem*, GameEntity*))(Il2CppBase() + 0x11A5384))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(RotateViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x11A53D0))(this, entities);
	}

};

