#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassSlot"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& _defaultIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _defaultColor() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _defaultFrameColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _frameRarityIcon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = TooltipProxy*> R& _tooltipProxy() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _iconNotify() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _className() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = ItemEntity*> R& ClassEntity() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	 Action1<PlayerClassSlot*>*& ClickEvent() {
		return *(Action1<PlayerClassSlot*>**)((uintptr_t)this + 0x78);
	}

	template <typename R = ItemEntity*> R get_ClassEntity() {
		return ((R (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B73B1C))(this);
	}
	template <typename R = void> R set_ClassEntity(ItemEntity* value) {
		return ((R (*)(PlayerClassSlot*, ItemEntity*))(Il2CppBase() + 0x1B73B24))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1<PlayerClassSlot*>* value) {
		return ((R (*)(PlayerClassSlot*, Action1<PlayerClassSlot*>*))(Il2CppBase() + 0x1B73B2C))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1<PlayerClassSlot*>* value) {
		return ((R (*)(PlayerClassSlot*, Action1<PlayerClassSlot*>*))(Il2CppBase() + 0x1B73BCC))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B73C6C))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B73D78))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltipView) {
		return ((R (*)(PlayerClassSlot*, TooltipView*))(Il2CppBase() + 0x1B73DAC))(this, tooltipView);
	}
	template <typename R = ItemEntity*> R GetItemEntity() {
		return ((R (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B73DC8))(this);
	}
	template <typename R = void> R UpdateView(GameEntity* avatar) {
		return ((R (*)(PlayerClassSlot*, GameEntity*))(Il2CppBase() + 0x1B73DD0))(this, avatar);
	}
	template <typename R = void> R UpdateClassNotify() {
		return ((R (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B74058))(this);
	}
	template <typename R = void> R Awakeb__16_0() {
		return ((R (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B74244))(this);
	}

};

