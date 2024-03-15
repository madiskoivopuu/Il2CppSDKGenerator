#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResourceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResourceView"));
	}

	template <typename R = uintptr_t> R& ResourceImage() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ResourceCount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& CommonRarity() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& RareRarity() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& EpicRarity() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& LegendaryRarity() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Resource*> R& _resource() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& _duration() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0x6C);
	}

	template <typename R = void> R set_ItemRarity(Rarity* value) {
		return ((R (*)(LocationResourceView*, Rarity*))(Il2CppBase() + 0x171E7CC))(this, value);
	}
	template <typename R = void> R Init(Resource* resource, Il2CppString* resourceIconName, int32_t resourcesCount, TooltipView* tooltip) {
		return ((R (*)(LocationResourceView*, Resource*, Il2CppString*, int32_t, TooltipView*))(Il2CppBase() + 0x171E8A0))(this, resource, resourceIconName, resourcesCount, tooltip);
	}
	template <typename R = void> R SetCustomDescription(Il2CppString* text) {
		return ((R (*)(LocationResourceView*, Il2CppString*))(Il2CppBase() + 0x171EA44))(this, text);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(LocationResourceView*, uintptr_t))(Il2CppBase() + 0x171EA68))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(LocationResourceView*, uintptr_t))(Il2CppBase() + 0x171EA74))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(LocationResourceView*))(Il2CppBase() + 0x171ECB8))(this);
	}
	template <typename R = void> R OnClickHoldedHandler(bool isPressed, float duration) {
		return ((R (*)(LocationResourceView*, bool, float))(Il2CppBase() + 0x171EA84))(this, isPressed, duration);
	}

};

