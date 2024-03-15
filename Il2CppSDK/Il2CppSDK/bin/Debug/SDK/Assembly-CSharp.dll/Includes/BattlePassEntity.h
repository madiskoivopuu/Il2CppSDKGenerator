#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassEntity"));
	}

	template <typename R = PremiumAsOneTimeRewardComponent*> static R& premiumAsOneTimeRewardComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ResetCurrencyComponent*> static R& resetCurrencyComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ShowInHUDComponent*> static R& showInHUDComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16758E4))(this);
	}
	template <typename R = BattlePassViewComponent*> R get_battlePassView() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16759EC))(this);
	}
	template <typename R = bool> R get_hasBattlePassView() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1675A74))(this);
	}
	template <typename R = void> R AddBattlePassView(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, bool newIsSeason, int32_t newSeasonDepends, bool newShowBestReward, bool newRightAlignment, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, Il2CppString* newAnalyticsEventName, Il2CppString* newPremiumNameCaption, Il2CppString* newBuyPremiumCaption, bool newIsLevelsSale, Il2CppString* newBuyLevelsButtonCaption, StoreCategory* newStoreCategory, Il2CppString* newBuyLevelsCaption, Il2CppArray<int32_t>* newSpecialSteps, Il2CppString* newSpecialImage, bool newHideNextBestRewards) {
		return ((R (*)(BattlePassEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, int32_t, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, Il2CppString*, StoreCategory*, Il2CppString*, Il2CppArray<int32_t>*, Il2CppString*, bool))(Il2CppBase() + 0x1675A80))(this, newNPC_Icon, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newIsSeason, newSeasonDepends, newShowBestReward, newRightAlignment, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newAnalyticsEventName, newPremiumNameCaption, newBuyPremiumCaption, newIsLevelsSale, newBuyLevelsButtonCaption, newStoreCategory, newBuyLevelsCaption, newSpecialSteps, newSpecialImage, newHideNextBestRewards);
	}
	template <typename R = void> R ReplaceBattlePassView(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, bool newIsSeason, int32_t newSeasonDepends, bool newShowBestReward, bool newRightAlignment, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, Il2CppString* newAnalyticsEventName, Il2CppString* newPremiumNameCaption, Il2CppString* newBuyPremiumCaption, bool newIsLevelsSale, Il2CppString* newBuyLevelsButtonCaption, StoreCategory* newStoreCategory, Il2CppString* newBuyLevelsCaption, Il2CppArray<int32_t>* newSpecialSteps, Il2CppString* newSpecialImage, bool newHideNextBestRewards) {
		return ((R (*)(BattlePassEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, int32_t, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, Il2CppString*, StoreCategory*, Il2CppString*, Il2CppArray<int32_t>*, Il2CppString*, bool))(Il2CppBase() + 0x1675D7C))(this, newNPC_Icon, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newIsSeason, newSeasonDepends, newShowBestReward, newRightAlignment, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newAnalyticsEventName, newPremiumNameCaption, newBuyPremiumCaption, newIsLevelsSale, newBuyLevelsButtonCaption, newStoreCategory, newBuyLevelsCaption, newSpecialSteps, newSpecialImage, newHideNextBestRewards);
	}
	template <typename R = void> R RemoveBattlePassView() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676078))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1675964))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1675958))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(BattlePassEntity*, Il2CppString*))(Il2CppBase() + 0x1676084))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(BattlePassEntity*, Il2CppString*))(Il2CppBase() + 0x1676198))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16762AC))(this);
	}
	template <typename R = ClaimRewardOffsetComponent*> R get_claimRewardOffset() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16762B8))(this);
	}
	template <typename R = bool> R get_hasClaimRewardOffset() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676340))(this);
	}
	template <typename R = void> R AddClaimRewardOffset(int64_t newValue) {
		return ((R (*)(BattlePassEntity*, int64_t))(Il2CppBase() + 0x167634C))(this, newValue);
	}
	template <typename R = void> R ReplaceClaimRewardOffset(int64_t newValue) {
		return ((R (*)(BattlePassEntity*, int64_t))(Il2CppBase() + 0x1676450))(this, newValue);
	}
	template <typename R = void> R RemoveClaimRewardOffset() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676554))(this);
	}
	template <typename R = CurrencyTypeComponent*> R get_currencyType() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676560))(this);
	}
	template <typename R = bool> R get_hasCurrencyType() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16765E8))(this);
	}
	template <typename R = void> R AddCurrencyType(CurrencyType* newType) {
		return ((R (*)(BattlePassEntity*, CurrencyType*))(Il2CppBase() + 0x16765F4))(this, newType);
	}
	template <typename R = void> R ReplaceCurrencyType(CurrencyType* newType) {
		return ((R (*)(BattlePassEntity*, CurrencyType*))(Il2CppBase() + 0x16766F8))(this, newType);
	}
	template <typename R = void> R RemoveCurrencyType() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16767FC))(this);
	}
	template <typename R = LevelComponent*> R get_level() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676808))(this);
	}
	template <typename R = bool> R get_hasLevel() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676890))(this);
	}
	template <typename R = void> R AddLevel(float newValue) {
		return ((R (*)(BattlePassEntity*, float))(Il2CppBase() + 0x167689C))(this, newValue);
	}
	template <typename R = void> R ReplaceLevel(float newValue) {
		return ((R (*)(BattlePassEntity*, float))(Il2CppBase() + 0x16769A0))(this, newValue);
	}
	template <typename R = void> R RemoveLevel() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676AA4))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676AB0))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676B38))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(BattlePassEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1676B44))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(BattlePassEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1676C58))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676D6C))(this);
	}
	template <typename R = bool> R get_isPremiumAsOneTimeReward() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676D78))(this);
	}
	template <typename R = void> R set_isPremiumAsOneTimeReward(bool value) {
		return ((R (*)(BattlePassEntity*, bool))(Il2CppBase() + 0x1676D84))(this, value);
	}
	template <typename R = ResetComponent*> R get_reset() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676E9C))(this);
	}
	template <typename R = bool> R get_hasReset() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1676F24))(this);
	}
	template <typename R = void> R AddReset(int32_t newCircleDuration, int32_t newOffset, int32_t newReverseOffset, bool newRewardAfterActivity, bool newManual, ResetType* newResetTo) {
		return ((R (*)(BattlePassEntity*, int32_t, int32_t, int32_t, bool, bool, ResetType*))(Il2CppBase() + 0x1676F30))(this, newCircleDuration, newOffset, newReverseOffset, newRewardAfterActivity, newManual, newResetTo);
	}
	template <typename R = void> R ReplaceReset(int32_t newCircleDuration, int32_t newOffset, int32_t newReverseOffset, bool newRewardAfterActivity, bool newManual, ResetType* newResetTo) {
		return ((R (*)(BattlePassEntity*, int32_t, int32_t, int32_t, bool, bool, ResetType*))(Il2CppBase() + 0x1677070))(this, newCircleDuration, newOffset, newReverseOffset, newRewardAfterActivity, newManual, newResetTo);
	}
	template <typename R = void> R RemoveReset() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16771B0))(this);
	}
	template <typename R = bool> R get_isResetCurrency() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16771BC))(this);
	}
	template <typename R = void> R set_isResetCurrency(bool value) {
		return ((R (*)(BattlePassEntity*, bool))(Il2CppBase() + 0x16771C8))(this, value);
	}
	template <typename R = bool> R get_isShowInHUD() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16772E0))(this);
	}
	template <typename R = void> R set_isShowInHUD(bool value) {
		return ((R (*)(BattlePassEntity*, bool))(Il2CppBase() + 0x16772EC))(this, value);
	}
	template <typename R = TemporaryComponent*> R get_temporary() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1677404))(this);
	}
	template <typename R = bool> R get_hasTemporary() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x167588C))(this);
	}
	template <typename R = void> R AddTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime* newCyclic) {
		return ((R (*)(BattlePassEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime*))(Il2CppBase() + 0x167748C))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename R = void> R ReplaceTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime* newCyclic) {
		return ((R (*)(BattlePassEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime*))(Il2CppBase() + 0x16775D8))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename R = void> R RemoveTemporary() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1677724))(this);
	}
	template <typename R = UnlockPremiumComponent*> R get_unlockPremium() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1677730))(this);
	}
	template <typename R = bool> R get_hasUnlockPremium() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x16777B8))(this);
	}
	template <typename R = void> R AddUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((R (*)(BattlePassEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x16777C4))(this, newName, newSeason, newCycle);
	}
	template <typename R = void> R ReplaceUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((R (*)(BattlePassEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x16778EC))(this, newName, newSeason, newCycle);
	}
	template <typename R = void> R RemoveUnlockPremium() {
		return ((R (*)(BattlePassEntity*))(Il2CppBase() + 0x1677A14))(this);
	}

};

