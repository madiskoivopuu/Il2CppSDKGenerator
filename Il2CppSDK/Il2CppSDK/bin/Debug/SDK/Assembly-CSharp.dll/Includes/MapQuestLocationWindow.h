#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class MapQuestLocationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapQuestLocationWindow"));
	}

	template <typename R = bool> static R& isShowed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _showButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _locationImage() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _eventCaption() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _eventDescription() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _resourcesPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _rewardResourceViews() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = TooltipTrigger*> R& _rewardTooltip() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = bool> R& silentClose() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = bool> R& updateDescriptionTimer() {
		return *(R*)((uintptr_t)this + 0xB9);
	}

	template <typename R = bool> static R get_isShowed() {
		return ((R (*)(void *))(Il2CppBase() + 0x12C2CC8))(0);
	}
	template <typename R = void> static R set_isShowed(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x12C2D14))(0, value);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(MapQuestLocationWindow*))(Il2CppBase() + 0x12C2D68))(this);
	}
	template <typename R = void> R InitResourcesPanel(Il2CppArray<Resource>* resources, Il2CppString* tooltipText) {
		return ((R (*)(MapQuestLocationWindow*, Il2CppArray<Resource>*, Il2CppString*))(Il2CppBase() + 0x12C35D0))(this, resources, tooltipText);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(MapQuestLocationWindow*))(Il2CppBase() + 0x12C3A2C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MapQuestLocationWindow*, float))(Il2CppBase() + 0x12C3AFC))(this, deltaTime);
	}
	template <typename R = void> R ShowLocation() {
		return ((R (*)(MapQuestLocationWindow*))(Il2CppBase() + 0x12C3CEC))(this);
	}

};

