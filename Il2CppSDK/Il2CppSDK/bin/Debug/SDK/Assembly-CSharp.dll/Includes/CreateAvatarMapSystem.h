#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateAvatarMapSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateAvatarMapSystem"));
	}

	template <typename T = MapUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(CreateAvatarMapSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x134AA38))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(CreateAvatarMapSystem*, GameEntity*))(Il2CppBase() + 0x134AA90))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(CreateAvatarMapSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x134AAAC))(this, entities);
	}

};

