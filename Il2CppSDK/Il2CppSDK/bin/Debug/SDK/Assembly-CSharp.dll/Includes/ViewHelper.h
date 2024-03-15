#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewHelper"));
	}


	template <typename R = GameEntity*> static R AddView(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x15C9B78))(0, entity);
	}
	template <typename R = GameEntity*> static R AddView_1(GameEntity* entity, PrefabComponent* prefabComponent, bool hidden) {
		return ((R (*)(void *, GameEntity*, PrefabComponent*, bool))(Il2CppBase() + 0x15CA8D8))(0, entity, prefabComponent, hidden);
	}
	template <typename R = GameEntity*> static R AddView_2(GameEntity* entity, uintptr_t go, bool hidden) {
		return ((R (*)(void *, GameEntity*, uintptr_t, bool))(Il2CppBase() + 0x15CA5BC))(0, entity, go, hidden);
	}
	template <typename R = GameEntity*> static R ReplaceView(GameEntity* entity, Il2CppString* prefabName, ProtoModels::WorldResourcesType resourceType, bool hidden) {
		return ((R (*)(void *, GameEntity*, Il2CppString*, ProtoModels::WorldResourcesType, bool))(Il2CppBase() + 0x15CAA88))(0, entity, prefabName, resourceType, hidden);
	}
	template <typename R = GameEntity*> static R ReplaceView_1(GameEntity* entity, uintptr_t go, bool hidden) {
		return ((R (*)(void *, GameEntity*, uintptr_t, bool))(Il2CppBase() + 0x15CAC2C))(0, entity, go, hidden);
	}
	template <typename R = void> static R OnEntityWillBeDestroyed(uintptr_t context, uintptr_t entity) {
		return ((R (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15CB130))(0, context, entity);
	}

};

