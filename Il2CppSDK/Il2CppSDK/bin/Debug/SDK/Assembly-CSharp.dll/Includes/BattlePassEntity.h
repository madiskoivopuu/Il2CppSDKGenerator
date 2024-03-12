#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassEntity"));
	}

	template <typename T = uintptr_t> static T& premiumAsOneTimeRewardComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& resetCurrencyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& showInHUDComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16758E4))(this);
	}
	template <typename T = uintptr_t> T get_battlePassView() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16759EC))(this);
	}
	template <typename T = bool> T get_hasBattlePassView() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1675A74))(this);
	}
	template <typename T = void> T AddBattlePassView(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, bool newIsSeason, int32_t newSeasonDepends, bool newShowBestReward, bool newRightAlignment, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, Il2CppString* newAnalyticsEventName, Il2CppString* newPremiumNameCaption, Il2CppString* newBuyPremiumCaption, bool newIsLevelsSale, Il2CppString* newBuyLevelsButtonCaption, uintptr_t newStoreCategory, Il2CppString* newBuyLevelsCaption, Il2CppArray<uintptr_t>* newSpecialSteps, Il2CppString* newSpecialImage, bool newHideNextBestRewards) {
		return ((T (*)(BattlePassEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, int32_t, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, Il2CppString*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, bool))(Il2CppBase() + 0x1675A80))(this, newNPC_Icon, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newIsSeason, newSeasonDepends, newShowBestReward, newRightAlignment, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newAnalyticsEventName, newPremiumNameCaption, newBuyPremiumCaption, newIsLevelsSale, newBuyLevelsButtonCaption, newStoreCategory, newBuyLevelsCaption, newSpecialSteps, newSpecialImage, newHideNextBestRewards);
	}
	template <typename T = void> T ReplaceBattlePassView(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, bool newIsSeason, int32_t newSeasonDepends, bool newShowBestReward, bool newRightAlignment, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, Il2CppString* newAnalyticsEventName, Il2CppString* newPremiumNameCaption, Il2CppString* newBuyPremiumCaption, bool newIsLevelsSale, Il2CppString* newBuyLevelsButtonCaption, uintptr_t newStoreCategory, Il2CppString* newBuyLevelsCaption, Il2CppArray<uintptr_t>* newSpecialSteps, Il2CppString* newSpecialImage, bool newHideNextBestRewards) {
		return ((T (*)(BattlePassEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, int32_t, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, Il2CppString*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, bool))(Il2CppBase() + 0x1675D7C))(this, newNPC_Icon, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newIsSeason, newSeasonDepends, newShowBestReward, newRightAlignment, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newAnalyticsEventName, newPremiumNameCaption, newBuyPremiumCaption, newIsLevelsSale, newBuyLevelsButtonCaption, newStoreCategory, newBuyLevelsCaption, newSpecialSteps, newSpecialImage, newHideNextBestRewards);
	}
	template <typename T = void> T RemoveBattlePassView() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676078))(this);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1675964))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1675958))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(BattlePassEntity*, Il2CppString*))(Il2CppBase() + 0x1676084))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(BattlePassEntity*, Il2CppString*))(Il2CppBase() + 0x1676198))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16762AC))(this);
	}
	template <typename T = uintptr_t> T get_claimRewardOffset() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16762B8))(this);
	}
	template <typename T = bool> T get_hasClaimRewardOffset() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676340))(this);
	}
	template <typename T = void> T AddClaimRewardOffset(int64_t newValue) {
		return ((T (*)(BattlePassEntity*, int64_t))(Il2CppBase() + 0x167634C))(this, newValue);
	}
	template <typename T = void> T ReplaceClaimRewardOffset(int64_t newValue) {
		return ((T (*)(BattlePassEntity*, int64_t))(Il2CppBase() + 0x1676450))(this, newValue);
	}
	template <typename T = void> T RemoveClaimRewardOffset() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676554))(this);
	}
	template <typename T = uintptr_t> T get_currencyType() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676560))(this);
	}
	template <typename T = bool> T get_hasCurrencyType() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16765E8))(this);
	}
	template <typename T = void> T AddCurrencyType(uintptr_t newType) {
		return ((T (*)(BattlePassEntity*, uintptr_t))(Il2CppBase() + 0x16765F4))(this, newType);
	}
	template <typename T = void> T ReplaceCurrencyType(uintptr_t newType) {
		return ((T (*)(BattlePassEntity*, uintptr_t))(Il2CppBase() + 0x16766F8))(this, newType);
	}
	template <typename T = void> T RemoveCurrencyType() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16767FC))(this);
	}
	template <typename T = uintptr_t> T get_level() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676808))(this);
	}
	template <typename T = bool> T get_hasLevel() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676890))(this);
	}
	template <typename T = void> T AddLevel(float newValue) {
		return ((T (*)(BattlePassEntity*, float))(Il2CppBase() + 0x167689C))(this, newValue);
	}
	template <typename T = void> T ReplaceLevel(float newValue) {
		return ((T (*)(BattlePassEntity*, float))(Il2CppBase() + 0x16769A0))(this, newValue);
	}
	template <typename T = void> T RemoveLevel() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676AA4))(this);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676AB0))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676B38))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(BattlePassEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1676B44))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(BattlePassEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1676C58))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676D6C))(this);
	}
	template <typename T = bool> T get_isPremiumAsOneTimeReward() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676D78))(this);
	}
	template <typename T = void> T set_isPremiumAsOneTimeReward(bool value) {
		return ((T (*)(BattlePassEntity*, bool))(Il2CppBase() + 0x1676D84))(this, value);
	}
	template <typename T = uintptr_t> T get_reset() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676E9C))(this);
	}
	template <typename T = bool> T get_hasReset() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1676F24))(this);
	}
	template <typename T = void> T AddReset(int32_t newCircleDuration, int32_t newOffset, int32_t newReverseOffset, bool newRewardAfterActivity, bool newManual, uintptr_t newResetTo) {
		return ((T (*)(BattlePassEntity*, int32_t, int32_t, int32_t, bool, bool, uintptr_t))(Il2CppBase() + 0x1676F30))(this, newCircleDuration, newOffset, newReverseOffset, newRewardAfterActivity, newManual, newResetTo);
	}
	template <typename T = void> T ReplaceReset(int32_t newCircleDuration, int32_t newOffset, int32_t newReverseOffset, bool newRewardAfterActivity, bool newManual, uintptr_t newResetTo) {
		return ((T (*)(BattlePassEntity*, int32_t, int32_t, int32_t, bool, bool, uintptr_t))(Il2CppBase() + 0x1677070))(this, newCircleDuration, newOffset, newReverseOffset, newRewardAfterActivity, newManual, newResetTo);
	}
	template <typename T = void> T RemoveReset() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16771B0))(this);
	}
	template <typename T = bool> T get_isResetCurrency() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16771BC))(this);
	}
	template <typename T = void> T set_isResetCurrency(bool value) {
		return ((T (*)(BattlePassEntity*, bool))(Il2CppBase() + 0x16771C8))(this, value);
	}
	template <typename T = bool> T get_isShowInHUD() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16772E0))(this);
	}
	template <typename T = void> T set_isShowInHUD(bool value) {
		return ((T (*)(BattlePassEntity*, bool))(Il2CppBase() + 0x16772EC))(this, value);
	}
	template <typename T = uintptr_t> T get_temporary() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1677404))(this);
	}
	template <typename T = bool> T get_hasTemporary() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x167588C))(this);
	}
	template <typename T = void> T AddTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, uintptr_t newCyclic) {
		return ((T (*)(BattlePassEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, uintptr_t))(Il2CppBase() + 0x167748C))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename T = void> T ReplaceTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, uintptr_t newCyclic) {
		return ((T (*)(BattlePassEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, uintptr_t))(Il2CppBase() + 0x16775D8))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename T = void> T RemoveTemporary() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1677724))(this);
	}
	template <typename T = uintptr_t> T get_unlockPremium() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1677730))(this);
	}
	template <typename T = bool> T get_hasUnlockPremium() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x16777B8))(this);
	}
	template <typename T = void> T AddUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((T (*)(BattlePassEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x16777C4))(this, newName, newSeason, newCycle);
	}
	template <typename T = void> T ReplaceUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((T (*)(BattlePassEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x16778EC))(this, newName, newSeason, newCycle);
	}
	template <typename T = void> T RemoveUnlockPremium() {
		return ((T (*)(BattlePassEntity*))(Il2CppBase() + 0x1677A14))(this);
	}

};

}
