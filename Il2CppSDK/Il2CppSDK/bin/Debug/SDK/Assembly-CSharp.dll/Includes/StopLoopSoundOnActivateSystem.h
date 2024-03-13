#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopLoopSoundOnActivateSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopLoopSoundOnActivateSystem"));
	}


	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(StopLoopSoundOnActivateSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x1404BA4))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(StopLoopSoundOnActivateSystem*, GameEntity*))(Il2CppBase() + 0x1404D08))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(StopLoopSoundOnActivateSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1404D34))(this, entities);
	}

};

