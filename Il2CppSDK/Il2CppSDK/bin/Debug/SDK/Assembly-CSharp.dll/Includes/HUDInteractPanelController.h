#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDInteractPanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInteractPanelController"));
	}

	template <typename T = uintptr_t> T& _interactPanel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = HUDInteractButton*> T& _interactButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _fishingPanel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = HUDFishingButton*> T& _fishingButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = HUDFishnetButton*> T& _fishnetButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = HUDWindow*> T& _hudWindow() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Bind(HUDWindow* hudWindow) {
		return ((T (*)(HUDInteractPanelController*, HUDWindow*))(Il2CppBase() + 0x14585DC))(this, hudWindow);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDInteractPanelController*, float))(Il2CppBase() + 0x14586C4))(this, deltaTime);
	}

};

