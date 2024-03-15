#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class ChestWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestWindow"));
	}

	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& DescriptionRoot() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& TimersRoot() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& AliveTimer() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& CloseTimer() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& IconCorpse() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& IconChest() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& IconBank() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& IconCursedAltar() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = InventoryContainer*> R& ChestContainer() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& TakeAllButton() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& PutAllButton() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& OrganizeButton() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = uintptr_t> R& _upgradeButton() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& _upgradeGoldButton() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = HUDShowChestMarker*> R& _showChestMarker() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = uintptr_t> R& _shareButton() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& _shareButtonOn() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = uintptr_t> R& _shareButtonOff() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = uintptr_t> R& CurrentUpgradeButton() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = bool> R& CanUpgrade() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = int32_t> R& _upgradeWindowId() {
		return *(R*)((uintptr_t)this + 0x1F4);
	}
	template <typename R = float> R& _organizeTimeout() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	template <typename R = int32_t> R& _send() {
		return *(R*)((uintptr_t)this + 0x1FC);
	}
	template <typename R = float> R& _sendTime() {
		return *(R*)((uintptr_t)this + 0x200);
	}

	template <typename R = uintptr_t> R get_CurrentUpgradeButton() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x1743490))(this);
	}
	template <typename R = void> R set_CurrentUpgradeButton(uintptr_t value) {
		return ((R (*)(ChestWindow*, uintptr_t))(Il2CppBase() + 0x1743498))(this, value);
	}
	template <typename R = bool> R get_CanUpgrade() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x17434A8))(this);
	}
	template <typename R = void> R set_CanUpgrade(bool value) {
		return ((R (*)(ChestWindow*, bool))(Il2CppBase() + 0x17434B0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x17434BC))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x174370C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x1743804))(this);
	}
	template <typename R = void> R OnOrganize() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x1744AD4))(this);
	}
	template <typename R = void> R OnPutAll() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x1744B98))(this);
	}
	template <typename R = void> R UpdateAliveTimer(GameEntity* target) {
		return ((R (*)(ChestWindow*, GameEntity*))(Il2CppBase() + 0x17444CC))(this, target);
	}
	template <typename R = void> R UpdateCloseTimer(GameEntity* target) {
		return ((R (*)(ChestWindow*, GameEntity*))(Il2CppBase() + 0x17448B0))(this, target);
	}
	template <typename R = void> R OnShowWarningHook(WarningDataForClient data, uintptr_t hooked) {
		return ((R (*)(ChestWindow*, WarningDataForClient, uintptr_t))(Il2CppBase() + 0x1744D90))(this, data, hooked);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ChestWindow*, float))(Il2CppBase() + 0x1744F8C))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x17458A0))(this);
	}
	template <typename R = void> R OnTakeAll() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x1745B1C))(this);
	}
	template <typename R = void> R OnUpgrade() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x1745D18))(this);
	}
	template <typename R = void> R OnChangeShare() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x17460B4))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ChestWindow*))(Il2CppBase() + 0x17461B8))(this);
	}
	template <typename R = void> R OnTakeAllResultEvent(int32_t targetId, bool full) {
		return ((R (*)(ChestWindow*, int32_t, bool))(Il2CppBase() + 0x1746424))(this, targetId, full);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(ChestWindow*, float))(Il2CppBase() + 0x17464F0))(this, deltaTime);
	}
	template <typename R = void> R OnUpgradeb__44_0(int32_t id) {
		return ((R (*)(ChestWindow*, int32_t))(Il2CppBase() + 0x1746710))(this, id);
	}
	template <typename R = void> R OnUpgradeb__44_1(IUIWindow* w) {
		return ((R (*)(ChestWindow*, IUIWindow*))(Il2CppBase() + 0x17467E8))(this, w);
	}

};

