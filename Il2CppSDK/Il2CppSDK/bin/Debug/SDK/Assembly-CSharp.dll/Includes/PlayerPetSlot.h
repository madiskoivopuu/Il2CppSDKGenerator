#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerPetSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerPetSlot"));
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
	template <typename R = TooltipProxy*> R& _tooltipProxy() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _newPanel() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _newCountText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& _petName() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& _init() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 Nullable1int32_t>*& _newCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x64);
	}
	template <typename R = ItemEntity*> R& PetEntity() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	 Action1PlayerPetSlot*>*& ClickEvent() {
		return *(Action1PlayerPetSlot*>**)((uintptr_t)this + 0x78);
	}

	template <typename R = ItemEntity*> R get_PetEntity() {
		return ((R (*)(PlayerPetSlot*))(Il2CppBase() + 0x156CDAC))(this);
	}
	template <typename R = void> R set_PetEntity(ItemEntity* value) {
		return ((R (*)(PlayerPetSlot*, ItemEntity*))(Il2CppBase() + 0x156CDB4))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1PlayerPetSlot*>* value) {
		return ((R (*)(PlayerPetSlot*, Action1PlayerPetSlot*>*))(Il2CppBase() + 0x156CDBC))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1PlayerPetSlot*>* value) {
		return ((R (*)(PlayerPetSlot*, Action1PlayerPetSlot*>*))(Il2CppBase() + 0x156CE5C))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerPetSlot*))(Il2CppBase() + 0x156CEFC))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(PlayerPetSlot*))(Il2CppBase() + 0x156D008))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltipView) {
		return ((R (*)(PlayerPetSlot*, TooltipView*))(Il2CppBase() + 0x156D05C))(this, tooltipView);
	}
	template <typename R = InventorySlotEntity*> R GetInventoryEntity() {
		return ((R (*)(PlayerPetSlot*))(Il2CppBase() + 0x156D078))(this);
	}
	template <typename R = void> R UpdateView(GameEntity* avatar) {
		return ((R (*)(PlayerPetSlot*, GameEntity*))(Il2CppBase() + 0x156D1B4))(this, avatar);
	}
	template <typename R = void> R Awakeb__17_0() {
		return ((R (*)(PlayerPetSlot*))(Il2CppBase() + 0x156D6DC))(this);
	}

};

