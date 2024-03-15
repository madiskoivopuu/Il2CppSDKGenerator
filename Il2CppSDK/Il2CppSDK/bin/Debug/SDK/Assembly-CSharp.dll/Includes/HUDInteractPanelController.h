#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDInteractPanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInteractPanelController"));
	}

	template <typename R = uintptr_t> R& _interactPanel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = HUDInteractButton*> R& _interactButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _fishingPanel() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = HUDFishingButton*> R& _fishingButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = HUDFishnetButton*> R& _fishnetButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = HUDWindow*> R& _hudWindow() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Bind(HUDWindow* hudWindow) {
		return ((R (*)(HUDInteractPanelController*, HUDWindow*))(Il2CppBase() + 0x14585DC))(this, hudWindow);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDInteractPanelController*, float))(Il2CppBase() + 0x14586C4))(this, deltaTime);
	}

};

