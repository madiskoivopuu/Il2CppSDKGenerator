#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDGlobalBuffInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDGlobalBuffInfo"));
	}

	template <typename R = Il2CppArray<HUDBuffItem*>*> R& _itemPrefabs() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppList<HUDBuffItem*>*& _views() {
		return *(Il2CppList<HUDBuffItem*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 IGroup1<TempBuffEntity*>*& _entities() {
		return *(IGroup1<TempBuffEntity*>**)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Bind(UIWindow* window) {
		return ((R (*)(HUDGlobalBuffInfo*, UIWindow*))(Il2CppBase() + 0x1454E50))(this, window);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(HUDGlobalBuffInfo*, float))(Il2CppBase() + 0x1455100))(this, deltaTime);
	}
	template <typename R = HUDBuffItem*> R GetPrefab(TempBuffEntity* entity) {
		return ((R (*)(HUDGlobalBuffInfo*, TempBuffEntity*))(Il2CppBase() + 0x1455858))(this, entity);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(HUDGlobalBuffInfo*))(Il2CppBase() + 0x1455950))(this);
	}

};

