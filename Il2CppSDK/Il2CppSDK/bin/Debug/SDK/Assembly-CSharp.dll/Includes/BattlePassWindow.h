#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BattlePassWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassWindow"));
	}

	template <typename R = uintptr_t> R& _npcLAPanel() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _npcIcon() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _npcIconBack() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _npcBackGradient() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _npcDialogueText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _LATimerText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _LATimerClock() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _npcRAPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _npcRAIcon() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _npcRAIconBack() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _npcRABackGradient() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _npcRADialogueText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _RATimerText() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _RATimerClock() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _leftTracery() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _rightTracery() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _bottomTracery() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _scroll() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = float> R& _leftOffsetMultiplier() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = BattlePassItem*> R& _bpItemPrefab() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	 Il2CppList<BattlePassItem*>*& _bpItems() {
		return *(Il2CppList<BattlePassItem*>**)((uintptr_t)this + 0x118);
	}
	template <typename R = BattlePassInfinityItem*> R& _bpInfinityItem() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& _gapRect() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& _premiumLock() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& _premiumText() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = HUDStorePanelUniversal*> R& _storePanel() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = BattlePassProgress*> R& _progressBar() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = BattlePassNextPrizeItem*> R& _bpBestItemPrefab() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& _bpBestItemPlaceholderPrefab() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& _bpBestItemContent() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& _bpBestRewardMaxPosition() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& _premiumButton() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& _bestRewardsButton() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& _lockPremiumImage() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& _premiumButtonText() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& _getAllRewardsButton() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& _getAllRewardsButtonText() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& _getAllRewardsButtonAnim() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& _getAllRewardsButtonNotifText() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = uintptr_t> R& _buttonsRoot() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& _bpEndTimerText() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = uintptr_t> R& _levelNotReachedRoot() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = uintptr_t> R& _levelNotReachedText() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& _buyLvlButton() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = uintptr_t> R& _buyLvlButtonText() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = uintptr_t> R& _buyLvlButtonPercentContainer() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = uintptr_t> R& _buyLvlButtonPercentText() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = uintptr_t> R& _seasonText() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	template <typename R = uintptr_t> R& _cheatPanel() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = uintptr_t> R& _resetCheatButton() {
		return *(R*)((uintptr_t)this + 0x208);
	}
	template <typename R = uintptr_t> R& _resetRewardCheatButton() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	template <typename R = uintptr_t> R& _addCheatButton() {
		return *(R*)((uintptr_t)this + 0x218);
	}
	template <typename R = uintptr_t> R& _addCheatField() {
		return *(R*)((uintptr_t)this + 0x220);
	}
	template <typename R = BattlePassWindowState*> R& State() {
		return *(R*)((uintptr_t)this + 0x228);
	}
	template <typename R = Il2CppString*> R& _eventEndKey() {
		return *(R*)((uintptr_t)this + 0x230);
	}

	template <typename R = BattlePassWindowState*> R get_State() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167D328))(this);
	}
	template <typename R = void> R set_State(BattlePassWindowState* value) {
		return ((R (*)(BattlePassWindow*, BattlePassWindowState*))(Il2CppBase() + 0x167D330))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167D340))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167D7D0))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167EECC))(this);
	}
	template <typename R = void> R InitBattlePassData() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167DCE0))(this);
	}
	template <typename R = void> R InitNPCDialogue() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167E1A8))(this);
	}
	template <typename R = void> R InitTraceries() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167E9F0))(this);
	}
	template <typename R = void> R UpdateSeasonInfo() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167F2A0))(this);
	}
	template <typename R = void> R InitItems(AccountEntity* account) {
		return ((R (*)(BattlePassWindow*, AccountEntity*))(Il2CppBase() + 0x167F400))(this, account);
	}
	template <typename R = void> R UpdateBestItemsPositions(uintptr_t value) {
		return ((R (*)(BattlePassWindow*, uintptr_t))(Il2CppBase() + 0x1680590))(this, value);
	}
	template <typename R = void> R UpdateManualBP(AccountEntity* account) {
		return ((R (*)(BattlePassWindow*, AccountEntity*))(Il2CppBase() + 0x1680794))(this, account);
	}
	template <typename R = void> R AddBestResources(BattlePassItem* bpItem, ItemEntity* entity) {
		return ((R (*)(BattlePassWindow*, BattlePassItem*, ItemEntity*))(Il2CppBase() + 0x16801B8))(this, bpItem, entity);
	}
	template <typename R = void> R AddClaimedBestResources(Il2CppString* blueprint, Il2CppString* resource, int32_t count, bool isPremium) {
		return ((R (*)(BattlePassWindow*, Il2CppString*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1680DD4))(this, blueprint, resource, count, isPremium);
	}
	template <typename R = void> R UpdateGetAllRewardsButtons() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x16803F0))(this);
	}
	template <typename R = void> R SetScrollToCurrentStep() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167EDB4))(this);
	}
	template <typename R = void> R InitCheats() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167EE9C))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x167DA34))(this);
	}
	template <typename R = void> R BuyPremium() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x1681054))(this);
	}
	template <typename R = void> R BuyLevelsOrPoints() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x168125C))(this);
	}
	template <typename R = void> R GetAllRewards() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x1681464))(this);
	}
	template <typename R = uintptr_t> R ShowGetRewardButtonNotification() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x1681544))(this);
	}
	template <typename R = void> R ShowBestRewards() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x16815BC))(this);
	}
	template <typename R = bool> R CheckPremium(AccountEntity* account, bool isInit) {
		return ((R (*)(BattlePassWindow*, AccountEntity*, bool))(Il2CppBase() + 0x16816D0))(this, account, isInit);
	}
	template <typename R = void> R UpdateStatePrioritized() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x1681CD0))(this);
	}
	template <typename R = bool> R CheckLevel(AccountEntity* account) {
		return ((R (*)(BattlePassWindow*, AccountEntity*))(Il2CppBase() + 0x1681ECC))(this, account);
	}
	template <typename R = bool> R CheckProgress(AccountEntity* account) {
		return ((R (*)(BattlePassWindow*, AccountEntity*))(Il2CppBase() + 0x168211C))(this, account);
	}
	template <typename R = void> R OnProgressChanged(int32_t currentCurrencyValue) {
		return ((R (*)(BattlePassWindow*, int32_t))(Il2CppBase() + 0x16823B4))(this, currentCurrencyValue);
	}
	template <typename R = void> R UpdateEndBpTimerText() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x1682468))(this);
	}
	template <typename R = void> R UpdateBpTimer() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x168297C))(this);
	}
	template <typename R = bool> R CheckClaimedSteps(AccountEntity* account) {
		return ((R (*)(BattlePassWindow*, AccountEntity*))(Il2CppBase() + 0x16831D8))(this, account);
	}
	template <typename R = bool> R CalculateRewardsCount(AccountEntity* account) {
		return ((R (*)(BattlePassWindow*, AccountEntity*))(Il2CppBase() + 0x1683270))(this, account);
	}
	template <typename R = void> R UpdateBestRewardsProgress() {
		return ((R (*)(BattlePassWindow*))(Il2CppBase() + 0x1683564))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BattlePassWindow*, float))(Il2CppBase() + 0x1683680))(this, deltaTime);
	}
	template <typename R = void> R UpdateManualBPb__70_0(int32_t i) {
		return ((R (*)(BattlePassWindow*, int32_t))(Il2CppBase() + 0x1683B18))(this, i);
	}

};

