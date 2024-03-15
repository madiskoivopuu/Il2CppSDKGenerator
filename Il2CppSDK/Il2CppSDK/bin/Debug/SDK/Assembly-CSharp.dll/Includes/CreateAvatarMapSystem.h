#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateAvatarMapSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateAvatarMapSystem"));
	}

	template <typename R = MapUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(CreateAvatarMapSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x134AA38))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(CreateAvatarMapSystem*, GameEntity*))(Il2CppBase() + 0x134AA90))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(CreateAvatarMapSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x134AAAC))(this, entities);
	}

};

