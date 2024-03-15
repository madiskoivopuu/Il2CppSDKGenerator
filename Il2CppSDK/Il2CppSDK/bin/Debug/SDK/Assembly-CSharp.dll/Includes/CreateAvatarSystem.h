#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateAvatarSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateAvatarSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(CreateAvatarSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x134ABC8))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(CreateAvatarSystem*, GameEntity*))(Il2CppBase() + 0x134AC20))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(CreateAvatarSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x134AC3C))(this, entities);
	}
	template <typename R = void> R Executeb__4_1(IUIWindow* w) {
		return ((R (*)(CreateAvatarSystem*, IUIWindow*))(Il2CppBase() + 0x134BD80))(this, w);
	}
	template <typename R = void> R Executeb__4_2(IUIWindow* w) {
		return ((R (*)(CreateAvatarSystem*, IUIWindow*))(Il2CppBase() + 0x134BDD0))(this, w);
	}
	template <typename R = void> R Executeb__4_4(IUIWindow* w2) {
		return ((R (*)(CreateAvatarSystem*, IUIWindow*))(Il2CppBase() + 0x134BF78))(this, w2);
	}

};

