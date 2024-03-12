#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDQuadInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDQuadInfo"));
	}

	template <typename T = uintptr_t> T& TerritoryNamesPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TerritoryBorderPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _territoryNames() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _territoryBorder() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDQuadInfo*, uintptr_t))(Il2CppBase() + 0x127AD0C))(this, window);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDQuadInfo*, float))(Il2CppBase() + 0x127AF7C))(this, deltaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HUDQuadInfo*))(Il2CppBase() + 0x127B8D4))(this);
	}
	template <typename T = Il2CppString*> T GetQuadName(uintptr_t account, int32_t quadId) {
		return ((T (*)(HUDQuadInfo*, uintptr_t, int32_t))(Il2CppBase() + 0x127B5F8))(this, account, quadId);
	}

};

}
