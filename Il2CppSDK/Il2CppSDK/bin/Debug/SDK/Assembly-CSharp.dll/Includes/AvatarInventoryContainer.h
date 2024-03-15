#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryContainer.h" 

class AvatarInventoryContainer : public InventoryContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarInventoryContainer"));
	}

	template <typename R = HUDStorePanel*> R& CoinsPanel() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = HUDStorePanelSilver*> R& SilverPanel() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = HUDStorePanelInfluence*> R& InfluencePanel() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = HUDStorePanelTicket*> R& TicketsPanel() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = HUDStorePanelGuildCoins*> R& GuildCoinsPanel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& OrganizeBtn() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = int32_t> R& MaxMountSlotCount() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	 Il2CppList<InventorySlot*>*& BackPackSlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0xF0);
	}
	template <typename R = int32_t> R& _bonusSlotCount() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = int32_t> R& _mountSlotCount() {
		return *(R*)((uintptr_t)this + 0xFC);
	}
	template <typename R = AvatarResourcesContainer*> R& ResourcesContainer() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = AvatarWalletContainer*> R& WalletContainer() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& СurrencyPanel() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& ButtonsPanel() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& ResourcesDescription() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& WalletDescription() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	 Il2CppList<InventoryTab*>*& InventoryTabs() {
		return *(Il2CppList<InventoryTab*>**)((uintptr_t)this + 0x130);
	}
	template <typename R = TabType> R& CurrentTab() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& InventorySlotsPanel() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& ResourcesSlotsPanel() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& WalletSlotsPanel() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	 Action1<TabType>*& OnAnyTabClick() {
		return *(Action1<TabType>**)((uintptr_t)this + 0x158);
	}
	template <typename R = bool> R& IsTabsOn() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = bool> R& IsWalletTabOn() {
		return *(R*)((uintptr_t)this + 0x161);
	}
	template <typename R = float> R& _organizeTimeout() {
		return *(R*)((uintptr_t)this + 0x164);
	}

	template <typename R = TabType> R get_CurrentTab() {
		return ((R (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5A04))(this);
	}
	template <typename R = void> R set_CurrentTab(TabType value) {
		return ((R (*)(AvatarInventoryContainer*, TabType))(Il2CppBase() + 0xFB5A0C))(this, value);
	}
	template <typename R = bool> R get_IsTabsOn() {
		return ((R (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5A14))(this);
	}
	template <typename R = void> R set_IsTabsOn(bool value) {
		return ((R (*)(AvatarInventoryContainer*, bool))(Il2CppBase() + 0xFB5A1C))(this, value);
	}
	template <typename R = bool> R get_IsWalletTabOn() {
		return ((R (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5A28))(this);
	}
	template <typename R = void> R set_IsWalletTabOn(bool value) {
		return ((R (*)(AvatarInventoryContainer*, bool))(Il2CppBase() + 0xFB5A30))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5A3C))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5C94))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity, bool ignoreBop) {
		return ((R (*)(AvatarInventoryContainer*, IUIWindow*, GameEntity*, bool))(Il2CppBase() + 0xFB5EC8))(this, window, entity, ignoreBop);
	}
	template <typename R = void> R SetMode(TabType tabType) {
		return ((R (*)(AvatarInventoryContainer*, TabType))(Il2CppBase() + 0xFB6360))(this, tabType);
	}
	template <typename R = void> R OnOrganize() {
		return ((R (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB685C))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(AvatarInventoryContainer*, float))(Il2CppBase() + 0xFB6924))(this, deltaTime);
	}

};

