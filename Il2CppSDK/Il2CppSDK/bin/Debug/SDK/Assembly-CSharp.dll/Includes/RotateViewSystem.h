#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateViewSystem"));
	}


	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(RotateViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x11A527C))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(RotateViewSystem*, GameEntity*))(Il2CppBase() + 0x11A5384))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(RotateViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x11A53D0))(this, entities);
	}

};

