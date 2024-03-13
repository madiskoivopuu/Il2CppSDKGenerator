#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateAvatarSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateAvatarSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(CreateAvatarSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x134ABC8))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(CreateAvatarSystem*, GameEntity*))(Il2CppBase() + 0x134AC20))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(CreateAvatarSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x134AC3C))(this, entities);
	}
	template <typename T = void> T Executeb__4_1(IUIWindow* w) {
		return ((T (*)(CreateAvatarSystem*, IUIWindow*))(Il2CppBase() + 0x134BD80))(this, w);
	}
	template <typename T = void> T Executeb__4_2(IUIWindow* w) {
		return ((T (*)(CreateAvatarSystem*, IUIWindow*))(Il2CppBase() + 0x134BDD0))(this, w);
	}
	template <typename T = void> T Executeb__4_4(IUIWindow* w2) {
		return ((T (*)(CreateAvatarSystem*, IUIWindow*))(Il2CppBase() + 0x134BF78))(this, w2);
	}

};

