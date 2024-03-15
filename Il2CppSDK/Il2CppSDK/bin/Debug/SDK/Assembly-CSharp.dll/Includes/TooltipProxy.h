#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TooltipProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TooltipProxy"));
	}

	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Func1<ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>*>*& GetTitleAndText() {
		return *(Func1<ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>*>**)((uintptr_t)this + 0x20);
	}
	 Func1<ItemEntity*>*& GetItemEntity() {
		return *(Func1<ItemEntity*>**)((uintptr_t)this + 0x28);
	}
	 Func1<InventorySlotEntity*>*& GetInventoryEntity() {
		return *(Func1<InventorySlotEntity*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& PlayerStats() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& MountStats() {
		return *(R*)((uintptr_t)this + 0x39);
	}
	template <typename R = bool> R& PetStats() {
		return *(R*)((uintptr_t)this + 0x3A);
	}
	template <typename R = float> R& _pressedTime() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& RecentlyShowed() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& IsShow() {
		return *(R*)((uintptr_t)this + 0x49);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(TooltipProxy*))(Il2CppBase() + 0x14F4264))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(TooltipProxy*, TooltipView*))(Il2CppBase() + 0x14F426C))(this, value);
	}
	 Func1<ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>*>* get_GetTitleAndText() {
		return ((Func1<ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>*>* (*)(TooltipProxy*))(Il2CppBase() + 0x14F4274))(this);
	}
	template <typename R = void> R set_GetTitleAndText(Func1<ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>*>* value) {
		return ((R (*)(TooltipProxy*, Func1<ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>*>*))(Il2CppBase() + 0x14F427C))(this, value);
	}
	 Func1<ItemEntity*>* get_GetItemEntity() {
		return ((Func1<ItemEntity*>* (*)(TooltipProxy*))(Il2CppBase() + 0x14F4284))(this);
	}
	template <typename R = void> R set_GetItemEntity(Func1<ItemEntity*>* value) {
		return ((R (*)(TooltipProxy*, Func1<ItemEntity*>*))(Il2CppBase() + 0x14F428C))(this, value);
	}
	 Func1<InventorySlotEntity*>* get_GetInventoryEntity() {
		return ((Func1<InventorySlotEntity*>* (*)(TooltipProxy*))(Il2CppBase() + 0x14F4294))(this);
	}
	template <typename R = void> R set_GetInventoryEntity(Func1<InventorySlotEntity*>* value) {
		return ((R (*)(TooltipProxy*, Func1<InventorySlotEntity*>*))(Il2CppBase() + 0x14F429C))(this, value);
	}
	template <typename R = bool> R get_RecentlyShowed() {
		return ((R (*)(TooltipProxy*))(Il2CppBase() + 0x14F42A4))(this);
	}
	template <typename R = void> R set_RecentlyShowed(bool value) {
		return ((R (*)(TooltipProxy*, bool))(Il2CppBase() + 0x14F42AC))(this, value);
	}
	template <typename R = bool> R get_IsShow() {
		return ((R (*)(TooltipProxy*))(Il2CppBase() + 0x14F42B8))(this);
	}
	template <typename R = void> R set_IsShow(bool value) {
		return ((R (*)(TooltipProxy*, bool))(Il2CppBase() + 0x14F42C0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(TooltipProxy*))(Il2CppBase() + 0x14F42CC))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(TooltipProxy*, uintptr_t))(Il2CppBase() + 0x14F4328))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(TooltipProxy*))(Il2CppBase() + 0x14F4414))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(TooltipProxy*))(Il2CppBase() + 0x14F48A8))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(TooltipProxy*, uintptr_t))(Il2CppBase() + 0x14F48B0))(this, eventData);
	}
	template <typename R = void> R HideTooltip() {
		return ((R (*)(TooltipProxy*))(Il2CppBase() + 0x14F4354))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(TooltipProxy*))(Il2CppBase() + 0x14F44C8))(this);
	}

};

