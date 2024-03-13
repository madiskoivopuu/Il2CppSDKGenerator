#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class ChestWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestWindow"));
	}

	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& DescriptionRoot() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& TimersRoot() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& AliveTimer() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& CloseTimer() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& IconCorpse() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& IconChest() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& IconBank() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& IconCursedAltar() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = InventoryContainer*> T& ChestContainer() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& TakeAllButton() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& PutAllButton() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& OrganizeButton() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& _upgradeButton() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& _upgradeGoldButton() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = HUDShowChestMarker*> T& _showChestMarker() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _shareButton() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& _shareButtonOn() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& _shareButtonOff() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& CurrentUpgradeButton() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = bool> T& CanUpgrade() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& _upgradeWindowId() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& _organizeTimeout() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = int32_t> T& _send() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = float> T& _sendTime() {
		return *(T*)((uintptr_t)this + 0x200);
	}

	template <typename T = uintptr_t> T get_CurrentUpgradeButton() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x1743490))(this);
	}
	template <typename T = void> T set_CurrentUpgradeButton(uintptr_t value) {
		return ((T (*)(ChestWindow*, uintptr_t))(Il2CppBase() + 0x1743498))(this, value);
	}
	template <typename T = bool> T get_CanUpgrade() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x17434A8))(this);
	}
	template <typename T = void> T set_CanUpgrade(bool value) {
		return ((T (*)(ChestWindow*, bool))(Il2CppBase() + 0x17434B0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x17434BC))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x174370C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x1743804))(this);
	}
	template <typename T = void> T OnOrganize() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x1744AD4))(this);
	}
	template <typename T = void> T OnPutAll() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x1744B98))(this);
	}
	template <typename T = void> T UpdateAliveTimer(GameEntity* target) {
		return ((T (*)(ChestWindow*, GameEntity*))(Il2CppBase() + 0x17444CC))(this, target);
	}
	template <typename T = void> T UpdateCloseTimer(GameEntity* target) {
		return ((T (*)(ChestWindow*, GameEntity*))(Il2CppBase() + 0x17448B0))(this, target);
	}
	template <typename T = void> T OnShowWarningHook(WarningDataForClient* data, uintptr_t hooked) {
		return ((T (*)(ChestWindow*, WarningDataForClient*, uintptr_t))(Il2CppBase() + 0x1744D90))(this, data, hooked);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ChestWindow*, float))(Il2CppBase() + 0x1744F8C))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x17458A0))(this);
	}
	template <typename T = void> T OnTakeAll() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x1745B1C))(this);
	}
	template <typename T = void> T OnUpgrade() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x1745D18))(this);
	}
	template <typename T = void> T OnChangeShare() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x17460B4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChestWindow*))(Il2CppBase() + 0x17461B8))(this);
	}
	template <typename T = void> T OnTakeAllResultEvent(int32_t targetId, bool full) {
		return ((T (*)(ChestWindow*, int32_t, bool))(Il2CppBase() + 0x1746424))(this, targetId, full);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(ChestWindow*, float))(Il2CppBase() + 0x17464F0))(this, deltaTime);
	}
	template <typename T = void> T OnUpgradeb__44_0(int32_t id) {
		return ((T (*)(ChestWindow*, int32_t))(Il2CppBase() + 0x1746710))(this, id);
	}
	template <typename T = void> T OnUpgradeb__44_1(IUIWindow* w) {
		return ((T (*)(ChestWindow*, IUIWindow*))(Il2CppBase() + 0x17467E8))(this, w);
	}

};

