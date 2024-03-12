#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TooltipProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TooltipProxy"));
	}

	template <typename T = uintptr_t> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& GetTitleAndText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& GetItemEntity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& GetInventoryEntity() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& PlayerStats() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& MountStats() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& PetStats() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = float> T& _pressedTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& RecentlyShowed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsShow() {
		return *(T*)((uintptr_t)this + 0x49);
	}

	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F4264))(this);
	}
	template <typename T = void> T set_TooltipView(uintptr_t value) {
		return ((T (*)(TooltipProxy*, uintptr_t))(Il2CppBase() + 0x14F426C))(this, value);
	}
	template <typename T = void*> T get_GetTitleAndText() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F4274))(this);
	}
	template <typename T = void> T set_GetTitleAndText(void* value) {
		return ((T (*)(TooltipProxy*, void*))(Il2CppBase() + 0x14F427C))(this, value);
	}
	template <typename T = void*> T get_GetItemEntity() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F4284))(this);
	}
	template <typename T = void> T set_GetItemEntity(void* value) {
		return ((T (*)(TooltipProxy*, void*))(Il2CppBase() + 0x14F428C))(this, value);
	}
	template <typename T = void*> T get_GetInventoryEntity() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F4294))(this);
	}
	template <typename T = void> T set_GetInventoryEntity(void* value) {
		return ((T (*)(TooltipProxy*, void*))(Il2CppBase() + 0x14F429C))(this, value);
	}
	template <typename T = bool> T get_RecentlyShowed() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F42A4))(this);
	}
	template <typename T = void> T set_RecentlyShowed(bool value) {
		return ((T (*)(TooltipProxy*, bool))(Il2CppBase() + 0x14F42AC))(this, value);
	}
	template <typename T = bool> T get_IsShow() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F42B8))(this);
	}
	template <typename T = void> T set_IsShow(bool value) {
		return ((T (*)(TooltipProxy*, bool))(Il2CppBase() + 0x14F42C0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F42CC))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(TooltipProxy*, uintptr_t))(Il2CppBase() + 0x14F4328))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F4414))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F48A8))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(TooltipProxy*, uintptr_t))(Il2CppBase() + 0x14F48B0))(this, eventData);
	}
	template <typename T = void> T HideTooltip() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F4354))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(TooltipProxy*))(Il2CppBase() + 0x14F44C8))(this);
	}

};

}
