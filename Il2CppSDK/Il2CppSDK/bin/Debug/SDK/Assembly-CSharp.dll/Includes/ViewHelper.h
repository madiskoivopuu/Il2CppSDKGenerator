#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewHelper"));
	}


	template <typename T = GameEntity*> static T AddView(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x15C9B78))(0, entity);
	}
	template <typename T = GameEntity*> static T AddView_1(GameEntity* entity, PrefabComponent* prefabComponent, bool hidden) {
		return ((T (*)(void *, GameEntity*, PrefabComponent*, bool))(Il2CppBase() + 0x15CA8D8))(0, entity, prefabComponent, hidden);
	}
	template <typename T = GameEntity*> static T AddView_2(GameEntity* entity, uintptr_t go, bool hidden) {
		return ((T (*)(void *, GameEntity*, uintptr_t, bool))(Il2CppBase() + 0x15CA5BC))(0, entity, go, hidden);
	}
	template <typename T = GameEntity*> static T ReplaceView(GameEntity* entity, Il2CppString* prefabName, WorldResourcesType* resourceType, bool hidden) {
		return ((T (*)(void *, GameEntity*, Il2CppString*, WorldResourcesType*, bool))(Il2CppBase() + 0x15CAA88))(0, entity, prefabName, resourceType, hidden);
	}
	template <typename T = GameEntity*> static T ReplaceView_1(GameEntity* entity, uintptr_t go, bool hidden) {
		return ((T (*)(void *, GameEntity*, uintptr_t, bool))(Il2CppBase() + 0x15CAC2C))(0, entity, go, hidden);
	}
	template <typename T = void> static T OnEntityWillBeDestroyed(uintptr_t context, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15CB130))(0, context, entity);
	}

};

