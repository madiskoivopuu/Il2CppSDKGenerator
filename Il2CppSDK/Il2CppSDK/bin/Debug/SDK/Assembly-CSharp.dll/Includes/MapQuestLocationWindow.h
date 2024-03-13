#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class MapQuestLocationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapQuestLocationWindow"));
	}

	template <typename T = bool> static T& isShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _showButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _locationImage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _eventCaption() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _eventDescription() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _resourcesPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rewardResourceViews() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = TooltipTrigger*> T& _rewardTooltip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& silentClose() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& updateDescriptionTimer() {
		return *(T*)((uintptr_t)this + 0xB9);
	}

	template <typename T = bool> static T get_isShowed() {
		return ((T (*)(void *))(Il2CppBase() + 0x12C2CC8))(0);
	}
	template <typename T = void> static T set_isShowed(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x12C2D14))(0, value);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(MapQuestLocationWindow*))(Il2CppBase() + 0x12C2D68))(this);
	}
	template <typename T = void> T InitResourcesPanel(Il2CppArray<uintptr_t>* resources, Il2CppString* tooltipText) {
		return ((T (*)(MapQuestLocationWindow*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x12C35D0))(this, resources, tooltipText);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(MapQuestLocationWindow*))(Il2CppBase() + 0x12C3A2C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MapQuestLocationWindow*, float))(Il2CppBase() + 0x12C3AFC))(this, deltaTime);
	}
	template <typename T = void> T ShowLocation() {
		return ((T (*)(MapQuestLocationWindow*))(Il2CppBase() + 0x12C3CEC))(this);
	}

};

