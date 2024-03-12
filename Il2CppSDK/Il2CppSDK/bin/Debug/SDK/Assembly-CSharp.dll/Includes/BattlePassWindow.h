#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class BattlePassWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassWindow"));
	}

	template <typename T = uintptr_t> T& _npcLAPanel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _npcIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _npcIconBack() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _npcBackGradient() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _npcDialogueText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _LATimerText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _LATimerClock() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _npcRAPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _npcRAIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _npcRAIconBack() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _npcRABackGradient() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _npcRADialogueText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _RATimerText() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _RATimerClock() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _leftTracery() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _rightTracery() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _bottomTracery() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _scroll() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& _leftOffsetMultiplier() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _bpItemPrefab() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bpItems() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _bpInfinityItem() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _gapRect() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _premiumLock() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _premiumText() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _storePanel() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _progressBar() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _bpBestItemPrefab() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _bpBestItemPlaceholderPrefab() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _bpBestItemContent() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _bpBestRewardMaxPosition() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _premiumButton() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _bestRewardsButton() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _lockPremiumImage() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& _premiumButtonText() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& _getAllRewardsButton() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& _getAllRewardsButtonText() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& _getAllRewardsButtonAnim() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& _getAllRewardsButtonNotifText() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& _buttonsRoot() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& _bpEndTimerText() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& _levelNotReachedRoot() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _levelNotReachedText() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& _buyLvlButton() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& _buyLvlButtonText() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& _buyLvlButtonPercentContainer() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& _buyLvlButtonPercentText() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& _seasonText() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& _cheatPanel() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& _resetCheatButton() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& _resetRewardCheatButton() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& _addCheatButton() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& _addCheatField() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = Il2CppString*> T& _eventEndKey() {
		return *(T*)((uintptr_t)this + 0x230);
	}

	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167D328))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(BattlePassWindow*, uintptr_t))(Il2CppBase() + 0x167D330))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167D340))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167D7D0))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167EECC))(this);
	}
	template <typename T = void> T InitBattlePassData() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167DCE0))(this);
	}
	template <typename T = void> T InitNPCDialogue() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167E1A8))(this);
	}
	template <typename T = void> T InitTraceries() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167E9F0))(this);
	}
	template <typename T = void> T UpdateSeasonInfo() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167F2A0))(this);
	}
	template <typename T = void> T InitItems(uintptr_t account) {
		return ((T (*)(BattlePassWindow*, uintptr_t))(Il2CppBase() + 0x167F400))(this, account);
	}
	template <typename T = void> T UpdateBestItemsPositions(Il2CppVector2 value) {
		return ((T (*)(BattlePassWindow*, Il2CppVector2))(Il2CppBase() + 0x1680590))(this, value);
	}
	template <typename T = void> T UpdateManualBP(uintptr_t account) {
		return ((T (*)(BattlePassWindow*, uintptr_t))(Il2CppBase() + 0x1680794))(this, account);
	}
	template <typename T = void> T AddBestResources(uintptr_t bpItem, uintptr_t entity) {
		return ((T (*)(BattlePassWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16801B8))(this, bpItem, entity);
	}
	template <typename T = void> T AddClaimedBestResources(Il2CppString* blueprint, Il2CppString* resource, int32_t count, bool isPremium) {
		return ((T (*)(BattlePassWindow*, Il2CppString*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1680DD4))(this, blueprint, resource, count, isPremium);
	}
	template <typename T = void> T UpdateGetAllRewardsButtons() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x16803F0))(this);
	}
	template <typename T = void> T SetScrollToCurrentStep() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167EDB4))(this);
	}
	template <typename T = void> T InitCheats() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167EE9C))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x167DA34))(this);
	}
	template <typename T = void> T BuyPremium() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x1681054))(this);
	}
	template <typename T = void> T BuyLevelsOrPoints() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x168125C))(this);
	}
	template <typename T = void> T GetAllRewards() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x1681464))(this);
	}
	template <typename T = uintptr_t> T ShowGetRewardButtonNotification() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x1681544))(this);
	}
	template <typename T = void> T ShowBestRewards() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x16815BC))(this);
	}
	template <typename T = bool> T CheckPremium(uintptr_t account, bool isInit) {
		return ((T (*)(BattlePassWindow*, uintptr_t, bool))(Il2CppBase() + 0x16816D0))(this, account, isInit);
	}
	template <typename T = void> T UpdateStatePrioritized() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x1681CD0))(this);
	}
	template <typename T = bool> T CheckLevel(uintptr_t account) {
		return ((T (*)(BattlePassWindow*, uintptr_t))(Il2CppBase() + 0x1681ECC))(this, account);
	}
	template <typename T = bool> T CheckProgress(uintptr_t account) {
		return ((T (*)(BattlePassWindow*, uintptr_t))(Il2CppBase() + 0x168211C))(this, account);
	}
	template <typename T = void> T OnProgressChanged(int32_t currentCurrencyValue) {
		return ((T (*)(BattlePassWindow*, int32_t))(Il2CppBase() + 0x16823B4))(this, currentCurrencyValue);
	}
	template <typename T = void> T UpdateEndBpTimerText() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x1682468))(this);
	}
	template <typename T = void> T UpdateBpTimer() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x168297C))(this);
	}
	template <typename T = bool> T CheckClaimedSteps(uintptr_t account) {
		return ((T (*)(BattlePassWindow*, uintptr_t))(Il2CppBase() + 0x16831D8))(this, account);
	}
	template <typename T = bool> T CalculateRewardsCount(uintptr_t account) {
		return ((T (*)(BattlePassWindow*, uintptr_t))(Il2CppBase() + 0x1683270))(this, account);
	}
	template <typename T = void> T UpdateBestRewardsProgress() {
		return ((T (*)(BattlePassWindow*))(Il2CppBase() + 0x1683564))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BattlePassWindow*, float))(Il2CppBase() + 0x1683680))(this, deltaTime);
	}
	template <typename T = void> T UpdateManualBPb__70_0(int32_t i) {
		return ((T (*)(BattlePassWindow*, int32_t))(Il2CppBase() + 0x1683B18))(this, i);
	}

};

}
