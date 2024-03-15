#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerMountSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerMountSlot"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& _defaultIcon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _defaultColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _activeMark() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = TooltipProxy*> R& _tooltipProxy() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& _mountName() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& _activeMagic() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& _init() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = ItemEntity*> R& MountEntity() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	 Action1<PlayerMountSlot*>*& ClickEvent() {
		return *(Action1<PlayerMountSlot*>**)((uintptr_t)this + 0x70);
	}

	template <typename R = ItemEntity*> R get_MountEntity() {
		return ((R (*)(PlayerMountSlot*))(Il2CppBase() + 0x156B918))(this);
	}
	template <typename R = void> R set_MountEntity(ItemEntity* value) {
		return ((R (*)(PlayerMountSlot*, ItemEntity*))(Il2CppBase() + 0x156B920))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1<PlayerMountSlot*>* value) {
		return ((R (*)(PlayerMountSlot*, Action1<PlayerMountSlot*>*))(Il2CppBase() + 0x156B928))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1<PlayerMountSlot*>* value) {
		return ((R (*)(PlayerMountSlot*, Action1<PlayerMountSlot*>*))(Il2CppBase() + 0x156B9C8))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerMountSlot*))(Il2CppBase() + 0x156BA68))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(PlayerMountSlot*))(Il2CppBase() + 0x156BB74))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltipView) {
		return ((R (*)(PlayerMountSlot*, TooltipView*))(Il2CppBase() + 0x156BBD4))(this, tooltipView);
	}
	template <typename R = ItemEntity*> R GetItemEntity() {
		return ((R (*)(PlayerMountSlot*))(Il2CppBase() + 0x156BBF0))(this);
	}
	template <typename R = void> R UpdateView(GameEntity* avatar) {
		return ((R (*)(PlayerMountSlot*, GameEntity*))(Il2CppBase() + 0x156BBF8))(this, avatar);
	}
	template <typename R = void> R Awakeb__16_0() {
		return ((R (*)(PlayerMountSlot*))(Il2CppBase() + 0x156C05C))(this);
	}

};

