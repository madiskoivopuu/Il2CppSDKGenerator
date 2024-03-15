#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDQuadInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDQuadInfo"));
	}

	template <typename R = TerritoryNames*> R& TerritoryNamesPrefab() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& TerritoryBorderPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TerritoryNames*> R& _territoryNames() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _territoryBorder() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Bind(IUIWindow* window) {
		return ((R (*)(HUDQuadInfo*, IUIWindow*))(Il2CppBase() + 0x127AD0C))(this, window);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDQuadInfo*, float))(Il2CppBase() + 0x127AF7C))(this, deltaTime);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(HUDQuadInfo*))(Il2CppBase() + 0x127B8D4))(this);
	}
	template <typename R = Il2CppString*> R GetQuadName(AccountEntity* account, int32_t quadId) {
		return ((R (*)(HUDQuadInfo*, AccountEntity*, int32_t))(Il2CppBase() + 0x127B5F8))(this, account, quadId);
	}

};

