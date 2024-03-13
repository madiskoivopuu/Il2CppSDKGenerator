#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerPetSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerPetSlot"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _defaultIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _defaultColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = TooltipProxy*> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _newPanel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _newCountText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _petName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _init() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Nullable1int32_t>*> T& _newCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = ItemEntity*> T& PetEntity() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Action1PlayerPetSlot*>*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = ItemEntity*> T get_PetEntity() {
		return ((T (*)(PlayerPetSlot*))(Il2CppBase() + 0x156CDAC))(this);
	}
	template <typename T = void> T set_PetEntity(ItemEntity* value) {
		return ((T (*)(PlayerPetSlot*, ItemEntity*))(Il2CppBase() + 0x156CDB4))(this, value);
	}
	template <typename T = void> T add_ClickEvent(Action1PlayerPetSlot*>* value) {
		return ((T (*)(PlayerPetSlot*, Action1PlayerPetSlot*>*))(Il2CppBase() + 0x156CDBC))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(Action1PlayerPetSlot*>* value) {
		return ((T (*)(PlayerPetSlot*, Action1PlayerPetSlot*>*))(Il2CppBase() + 0x156CE5C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerPetSlot*))(Il2CppBase() + 0x156CEFC))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(PlayerPetSlot*))(Il2CppBase() + 0x156D008))(this);
	}
	template <typename T = void> T Init(TooltipView* tooltipView) {
		return ((T (*)(PlayerPetSlot*, TooltipView*))(Il2CppBase() + 0x156D05C))(this, tooltipView);
	}
	template <typename T = InventorySlotEntity*> T GetInventoryEntity() {
		return ((T (*)(PlayerPetSlot*))(Il2CppBase() + 0x156D078))(this);
	}
	template <typename T = void> T UpdateView(GameEntity* avatar) {
		return ((T (*)(PlayerPetSlot*, GameEntity*))(Il2CppBase() + 0x156D1B4))(this, avatar);
	}
	template <typename T = void> T Awakeb__17_0() {
		return ((T (*)(PlayerPetSlot*))(Il2CppBase() + 0x156D6DC))(this);
	}

};

