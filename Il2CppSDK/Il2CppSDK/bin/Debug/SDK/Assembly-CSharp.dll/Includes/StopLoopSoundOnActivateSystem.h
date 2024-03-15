#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopLoopSoundOnActivateSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopLoopSoundOnActivateSystem"));
	}


	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(StopLoopSoundOnActivateSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x1404BA4))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(StopLoopSoundOnActivateSystem*, GameEntity*))(Il2CppBase() + 0x1404D08))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(StopLoopSoundOnActivateSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1404D34))(this, entities);
	}

};

