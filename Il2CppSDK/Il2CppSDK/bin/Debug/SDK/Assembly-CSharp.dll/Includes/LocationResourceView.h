#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResourceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResourceView"));
	}

	template <typename T = uintptr_t> T& ResourceImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ResourceCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CommonRarity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RareRarity() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& EpicRarity() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& LegendaryRarity() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Resource*> T& _resource() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = TooltipView*> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& _duration() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = void> T set_ItemRarity(Rarity* value) {
		return ((T (*)(LocationResourceView*, Rarity*))(Il2CppBase() + 0x171E7CC))(this, value);
	}
	template <typename T = void> T Init(Resource* resource, Il2CppString* resourceIconName, int32_t resourcesCount, TooltipView* tooltip) {
		return ((T (*)(LocationResourceView*, Resource*, Il2CppString*, int32_t, TooltipView*))(Il2CppBase() + 0x171E8A0))(this, resource, resourceIconName, resourcesCount, tooltip);
	}
	template <typename T = void> T SetCustomDescription(Il2CppString* text) {
		return ((T (*)(LocationResourceView*, Il2CppString*))(Il2CppBase() + 0x171EA44))(this, text);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(LocationResourceView*, uintptr_t))(Il2CppBase() + 0x171EA68))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(LocationResourceView*, uintptr_t))(Il2CppBase() + 0x171EA74))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LocationResourceView*))(Il2CppBase() + 0x171ECB8))(this);
	}
	template <typename T = void> T OnClickHoldedHandler(bool isPressed, float duration) {
		return ((T (*)(LocationResourceView*, bool, float))(Il2CppBase() + 0x171EA84))(this, isPressed, duration);
	}

};

