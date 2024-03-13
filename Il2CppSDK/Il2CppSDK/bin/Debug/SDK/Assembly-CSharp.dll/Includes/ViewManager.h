#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewManager"));
	}

	template <typename T = ViewManager*> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _viewRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _sceneGameViews() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T& _views() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> static T& _tag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = ViewManager*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x15CA0B8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ViewManager*))(Il2CppBase() + 0x15CC890))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ViewManager*))(Il2CppBase() + 0x15CCA74))(this);
	}
	template <typename T = uintptr_t> T GetViewOrDefault(GameEntity* entity, uintptr_t rootTransform) {
		return ((T (*)(ViewManager*, GameEntity*, uintptr_t))(Il2CppBase() + 0x15CA2C8))(this, entity, rootTransform);
	}
	template <typename T = uintptr_t> T GetViewFromPrefab(PrefabComponent* prefabComponent, uintptr_t rootTransform) {
		return ((T (*)(ViewManager*, PrefabComponent*, uintptr_t))(Il2CppBase() + 0x15CCAC4))(this, prefabComponent, rootTransform);
	}

};

