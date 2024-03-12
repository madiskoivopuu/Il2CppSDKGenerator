#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDGlobalBuffInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDGlobalBuffInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _itemPrefabs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _views() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDGlobalBuffInfo*, uintptr_t))(Il2CppBase() + 0x1454E50))(this, window);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(HUDGlobalBuffInfo*, float))(Il2CppBase() + 0x1455100))(this, deltaTime);
	}
	template <typename T = uintptr_t> T GetPrefab(uintptr_t entity) {
		return ((T (*)(HUDGlobalBuffInfo*, uintptr_t))(Il2CppBase() + 0x1455858))(this, entity);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HUDGlobalBuffInfo*))(Il2CppBase() + 0x1455950))(this);
	}

};

}
