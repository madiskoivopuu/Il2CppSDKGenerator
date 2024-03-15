#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewManager"));
	}

	template <typename R = ViewManager*> static R& _instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _viewRoot() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<GameViewLink*>*> R& _sceneGameViews() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*& _views() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> static R& _tag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = ViewManager*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x15CA0B8))(0);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ViewManager*))(Il2CppBase() + 0x15CC890))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ViewManager*))(Il2CppBase() + 0x15CCA74))(this);
	}
	template <typename R = uintptr_t> R GetViewOrDefault(GameEntity* entity, uintptr_t rootTransform) {
		return ((R (*)(ViewManager*, GameEntity*, uintptr_t))(Il2CppBase() + 0x15CA2C8))(this, entity, rootTransform);
	}
	template <typename R = uintptr_t> R GetViewFromPrefab(PrefabComponent* prefabComponent, uintptr_t rootTransform) {
		return ((R (*)(ViewManager*, PrefabComponent*, uintptr_t))(Il2CppBase() + 0x15CCAC4))(this, prefabComponent, rootTransform);
	}

};

