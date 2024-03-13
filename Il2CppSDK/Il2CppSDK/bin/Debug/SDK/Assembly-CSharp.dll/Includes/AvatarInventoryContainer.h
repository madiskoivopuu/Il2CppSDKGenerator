#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryContainer.h" 

class AvatarInventoryContainer : public InventoryContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarInventoryContainer"));
	}

	template <typename T = HUDStorePanel*> T& CoinsPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = HUDStorePanelSilver*> T& SilverPanel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = HUDStorePanelInfluence*> T& InfluencePanel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = HUDStorePanelTicket*> T& TicketsPanel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = HUDStorePanelGuildCoins*> T& GuildCoinsPanel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& OrganizeBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& MaxMountSlotCount() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<InventorySlot*>*> T& BackPackSlots() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& _bonusSlotCount() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& _mountSlotCount() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = AvatarResourcesContainer*> T& ResourcesContainer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = AvatarWalletContainer*> T& WalletContainer() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& СurrencyPanel() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& ButtonsPanel() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& ResourcesDescription() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& WalletDescription() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppList<InventoryTab*>*> T& InventoryTabs() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = TabType*> T& CurrentTab() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& InventorySlotsPanel() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& ResourcesSlotsPanel() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& WalletSlotsPanel() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Action1TabType*>*> T& OnAnyTabClick() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& IsTabsOn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& IsWalletTabOn() {
		return *(T*)((uintptr_t)this + 0x161);
	}
	template <typename T = float> T& _organizeTimeout() {
		return *(T*)((uintptr_t)this + 0x164);
	}

	template <typename T = TabType*> T get_CurrentTab() {
		return ((T (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5A04))(this);
	}
	template <typename T = void> T set_CurrentTab(TabType* value) {
		return ((T (*)(AvatarInventoryContainer*, TabType*))(Il2CppBase() + 0xFB5A0C))(this, value);
	}
	template <typename T = bool> T get_IsTabsOn() {
		return ((T (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5A14))(this);
	}
	template <typename T = void> T set_IsTabsOn(bool value) {
		return ((T (*)(AvatarInventoryContainer*, bool))(Il2CppBase() + 0xFB5A1C))(this, value);
	}
	template <typename T = bool> T get_IsWalletTabOn() {
		return ((T (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5A28))(this);
	}
	template <typename T = void> T set_IsWalletTabOn(bool value) {
		return ((T (*)(AvatarInventoryContainer*, bool))(Il2CppBase() + 0xFB5A30))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5A3C))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB5C94))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window, GameEntity* entity, bool ignoreBop) {
		return ((T (*)(AvatarInventoryContainer*, IUIWindow*, GameEntity*, bool))(Il2CppBase() + 0xFB5EC8))(this, window, entity, ignoreBop);
	}
	template <typename T = void> T SetMode(TabType* tabType) {
		return ((T (*)(AvatarInventoryContainer*, TabType*))(Il2CppBase() + 0xFB6360))(this, tabType);
	}
	template <typename T = void> T OnOrganize() {
		return ((T (*)(AvatarInventoryContainer*))(Il2CppBase() + 0xFB685C))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(AvatarInventoryContainer*, float))(Il2CppBase() + 0xFB6924))(this, deltaTime);
	}

};

