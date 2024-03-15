#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransactionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionEntity"));
	}


	template <typename R = AddExperienceComponent*> R get_addExperience() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15163AC))(this);
	}
	template <typename R = bool> R get_hasAddExperience() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516434))(this);
	}
	template <typename R = void> R AddAddExperience(float newValue) {
		return ((R (*)(TransactionEntity*, float))(Il2CppBase() + 0x1516440))(this, newValue);
	}
	template <typename R = void> R ReplaceAddExperience(float newValue) {
		return ((R (*)(TransactionEntity*, float))(Il2CppBase() + 0x1516544))(this, newValue);
	}
	template <typename R = void> R RemoveAddExperience() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516648))(this);
	}
	template <typename R = AddPetExperienceComponent*> R get_addPetExperience() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516654))(this);
	}
	template <typename R = bool> R get_hasAddPetExperience() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15166DC))(this);
	}
	template <typename R = void> R AddAddPetExperience(float newValue) {
		return ((R (*)(TransactionEntity*, float))(Il2CppBase() + 0x15166E8))(this, newValue);
	}
	template <typename R = void> R ReplaceAddPetExperience(float newValue) {
		return ((R (*)(TransactionEntity*, float))(Il2CppBase() + 0x15167EC))(this, newValue);
	}
	template <typename R = void> R RemoveAddPetExperience() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15168F0))(this);
	}
	template <typename R = AlvesBpPointsComponent*> R get_alvesBpPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15168FC))(this);
	}
	template <typename R = bool> R get_hasAlvesBpPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516984))(this);
	}
	template <typename R = void> R AddAlvesBpPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516990))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesBpPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516A94))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesBpPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516B98))(this);
	}
	template <typename R = AlvesWavesBadgesT1Component*> R get_alvesWavesBadgesT1() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516BA4))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT1() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516C2C))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516C38))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516D3C))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT1() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516E40))(this);
	}
	template <typename R = AlvesWavesBadgesT2Component*> R get_alvesWavesBadgesT2() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516E4C))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT2() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516ED4))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516EE0))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516FE4))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT2() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15170E8))(this);
	}
	template <typename R = AlvesWavesBadgesT3Component*> R get_alvesWavesBadgesT3() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15170F4))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT3() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151717C))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517188))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151728C))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT3() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517390))(this);
	}
	template <typename R = AnalyticsDataComponent*> R get_analyticsData() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151739C))(this);
	}
	template <typename R = bool> R get_hasAnalyticsData() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517424))(this);
	}
	template <typename R = void> R AddAnalyticsData(Il2CppString* newLabel, Il2CppString* newSublabel) {
		return ((R (*)(TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1517430))(this, newLabel, newSublabel);
	}
	template <typename R = void> R ReplaceAnalyticsData(Il2CppString* newLabel, Il2CppString* newSublabel) {
		return ((R (*)(TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1517558))(this, newLabel, newSublabel);
	}
	template <typename R = void> R RemoveAnalyticsData() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517680))(this);
	}
	template <typename R = BattlePassAddLevelsComponent*> R get_battlePassAddLevels() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151768C))(this);
	}
	template <typename R = bool> R get_hasBattlePassAddLevels() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517714))(this);
	}
	template <typename R = void> R AddBattlePassAddLevels(CurrencyType* newCurrencyType, int32_t newAddLevels) {
		return ((R (*)(TransactionEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x1517720))(this, newCurrencyType, newAddLevels);
	}
	template <typename R = void> R ReplaceBattlePassAddLevels(CurrencyType* newCurrencyType, int32_t newAddLevels) {
		return ((R (*)(TransactionEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x1517828))(this, newCurrencyType, newAddLevels);
	}
	template <typename R = void> R RemoveBattlePassAddLevels() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517930))(this);
	}
	template <typename R = CallbackComponent*> R get_callback() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516324))(this);
	}
	template <typename R = bool> R get_hasCallback() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1516318))(this);
	}
	template <typename R = void> R AddCallback(Action2TransactionEntity*, bool>* newMethod) {
		return ((R (*)(TransactionEntity*, Action2TransactionEntity*, bool>*))(Il2CppBase() + 0x151793C))(this, newMethod);
	}
	template <typename R = void> R ReplaceCallback(Action2TransactionEntity*, bool>* newMethod) {
		return ((R (*)(TransactionEntity*, Action2TransactionEntity*, bool>*))(Il2CppBase() + 0x1517A50))(this, newMethod);
	}
	template <typename R = void> R RemoveCallback() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517B64))(this);
	}
	template <typename R = CashbackCoinsComponent*> R get_cashbackCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517B70))(this);
	}
	template <typename R = bool> R get_hasCashbackCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517BF8))(this);
	}
	template <typename R = void> R AddCashbackCoins(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517C04))(this, newCount);
	}
	template <typename R = void> R ReplaceCashbackCoins(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517D08))(this, newCount);
	}
	template <typename R = void> R RemoveCashbackCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517E0C))(this);
	}
	template <typename R = CoinsComponent*> R get_coins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517E18))(this);
	}
	template <typename R = bool> R get_hasCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1517EA0))(this);
	}
	template <typename R = void> R AddCoins(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517EAC))(this, newCount);
	}
	template <typename R = void> R ReplaceCoins(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517FB0))(this, newCount);
	}
	template <typename R = void> R RemoveCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15180B4))(this);
	}
	template <typename R = CyclicPointsComponent*> R get_cyclicPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15180C0))(this);
	}
	template <typename R = bool> R get_hasCyclicPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518148))(this);
	}
	template <typename R = void> R AddCyclicPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518154))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518258))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151835C))(this);
	}
	template <typename R = CyclicPremiumTokensComponent*> R get_cyclicPremiumTokens() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518368))(this);
	}
	template <typename R = bool> R get_hasCyclicPremiumTokens() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15183F0))(this);
	}
	template <typename R = void> R AddCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15183FC))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518500))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPremiumTokens() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518604))(this);
	}
	template <typename R = CyclicYmirSoulComponent*> R get_cyclicYmirSoul() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518610))(this);
	}
	template <typename R = bool> R get_hasCyclicYmirSoul() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518698))(this);
	}
	template <typename R = void> R AddCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15186A4))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15187A8))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicYmirSoul() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15188AC))(this);
	}
	template <typename R = EventBpPointsAComponent*> R get_eventBpPointsA() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15188B8))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsA() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518940))(this);
	}
	template <typename R = void> R AddEventBpPointsA(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151894C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsA(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518A50))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsA() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518B54))(this);
	}
	template <typename R = EventBpPointsBComponent*> R get_eventBpPointsB() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518B60))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsB() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518BE8))(this);
	}
	template <typename R = void> R AddEventBpPointsB(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518BF4))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsB(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518CF8))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsB() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518DFC))(this);
	}
	template <typename R = EventBpPointsCComponent*> R get_eventBpPointsC() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518E08))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsC() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1518E90))(this);
	}
	template <typename R = void> R AddEventBpPointsC(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518E9C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsC(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518FA0))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsC() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15190A4))(this);
	}
	template <typename R = ExperienceBoosterDurationComponent*> R get_experienceBoosterDuration() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15190B0))(this);
	}
	template <typename R = bool> R get_hasExperienceBoosterDuration() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519138))(this);
	}
	template <typename R = void> R AddExperienceBoosterDuration(float newValue) {
		return ((R (*)(TransactionEntity*, float))(Il2CppBase() + 0x1519144))(this, newValue);
	}
	template <typename R = void> R ReplaceExperienceBoosterDuration(float newValue) {
		return ((R (*)(TransactionEntity*, float))(Il2CppBase() + 0x1519248))(this, newValue);
	}
	template <typename R = void> R RemoveExperienceBoosterDuration() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151934C))(this);
	}
	template <typename R = ExtraLevelCapComponent*> R get_extraLevelCap() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519358))(this);
	}
	template <typename R = bool> R get_hasExtraLevelCap() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15193E0))(this);
	}
	template <typename R = void> R AddExtraLevelCap(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15193EC))(this, newCount);
	}
	template <typename R = void> R ReplaceExtraLevelCap(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15194F0))(this, newCount);
	}
	template <typename R = void> R RemoveExtraLevelCap() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15195F4))(this);
	}
	template <typename R = GiantReputationComponent*> R get_giantReputation() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519600))(this);
	}
	template <typename R = bool> R get_hasGiantReputation() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519688))(this);
	}
	template <typename R = void> R AddGiantReputation(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519694))(this, newCount);
	}
	template <typename R = void> R ReplaceGiantReputation(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519798))(this, newCount);
	}
	template <typename R = void> R RemoveGiantReputation() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151989C))(this);
	}
	template <typename R = GuildBossCoinsComponent*> R get_guildBossCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x15198A8))(this);
	}
	template <typename R = bool> R get_hasGuildBossCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519930))(this);
	}
	template <typename R = void> R AddGuildBossCoins(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151993C))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildBossCoins(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519A40))(this, newCount);
	}
	template <typename R = void> R RemoveGuildBossCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519B44))(this);
	}
	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519B50))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519BD8))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519BE4))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519CE8))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519DEC))(this);
	}
	template <typename R = HuaweiTokenComponent*> R get_huaweiToken() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519DF8))(this);
	}
	template <typename R = bool> R get_hasHuaweiToken() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x1519E80))(this);
	}
	template <typename R = void> R AddHuaweiToken(Il2CppString* newValue) {
		return ((R (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x1519E8C))(this, newValue);
	}
	template <typename R = void> R ReplaceHuaweiToken(Il2CppString* newValue) {
		return ((R (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x1519FA0))(this, newValue);
	}
	template <typename R = void> R RemoveHuaweiToken() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A0B4))(this);
	}
	template <typename R = InfluenceComponent*> R get_influence() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A0C0))(this);
	}
	template <typename R = bool> R get_hasInfluence() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A148))(this);
	}
	template <typename R = void> R AddInfluence(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151A154))(this, newCount);
	}
	template <typename R = void> R ReplaceInfluence(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151A258))(this, newCount);
	}
	template <typename R = void> R RemoveInfluence() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A35C))(this);
	}
	template <typename R = MessageIdComponent*> R get_messageId() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A368))(this);
	}
	template <typename R = bool> R get_hasMessageId() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A3F0))(this);
	}
	template <typename R = void> R AddMessageId(int64_t newId) {
		return ((R (*)(TransactionEntity*, int64_t))(Il2CppBase() + 0x151A3FC))(this, newId);
	}
	template <typename R = void> R ReplaceMessageId(int64_t newId) {
		return ((R (*)(TransactionEntity*, int64_t))(Il2CppBase() + 0x151A500))(this, newId);
	}
	template <typename R = void> R RemoveMessageId() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A604))(this);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A610))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A698))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(TransactionEntity*, int64_t))(Il2CppBase() + 0x151A6A4))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(TransactionEntity*, int64_t))(Il2CppBase() + 0x151A7A8))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A8AC))(this);
	}
	template <typename R = PointComponent*> R get_point() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A8B8))(this);
	}
	template <typename R = bool> R get_hasPoint() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151A940))(this);
	}
	template <typename R = void> R AddPoint(Il2CppString* newName) {
		return ((R (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x151A94C))(this, newName);
	}
	template <typename R = void> R ReplacePoint(Il2CppString* newName) {
		return ((R (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x151AA60))(this, newName);
	}
	template <typename R = void> R RemovePoint() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151AB74))(this);
	}
	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151AB80))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151AC08))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151AC14))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151AD18))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151AE1C))(this);
	}
	template <typename R = PurchaceErrorComponent*> R get_purchaceError() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151AE28))(this);
	}
	template <typename R = bool> R get_hasPurchaceError() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151AEB0))(this);
	}
	template <typename R = void> R AddPurchaceError(ProtoModels::PurchaceErrorEnum* newValue) {
		return ((R (*)(TransactionEntity*, ProtoModels::PurchaceErrorEnum*))(Il2CppBase() + 0x151AEBC))(this, newValue);
	}
	template <typename R = void> R ReplacePurchaceError(ProtoModels::PurchaceErrorEnum* newValue) {
		return ((R (*)(TransactionEntity*, ProtoModels::PurchaceErrorEnum*))(Il2CppBase() + 0x151AFC0))(this, newValue);
	}
	template <typename R = void> R RemovePurchaceError() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B0C4))(this);
	}
	template <typename R = QuestComponent*> R get_quest() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B0D0))(this);
	}
	template <typename R = bool> R get_hasQuest() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B158))(this);
	}
	template <typename R = void> R AddQuest(Il2CppString* newName) {
		return ((R (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x151B164))(this, newName);
	}
	template <typename R = void> R ReplaceQuest(Il2CppString* newName) {
		return ((R (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x151B278))(this, newName);
	}
	template <typename R = void> R RemoveQuest() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B38C))(this);
	}
	template <typename R = ReceiptComponent*> R get_receipt() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B398))(this);
	}
	template <typename R = bool> R get_hasReceipt() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B420))(this);
	}
	template <typename R = void> R AddReceipt(Il2CppString* newTransactionId, Il2CppString* newPayload) {
		return ((R (*)(TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x151B42C))(this, newTransactionId, newPayload);
	}
	template <typename R = void> R ReplaceReceipt(Il2CppString* newTransactionId, Il2CppString* newPayload) {
		return ((R (*)(TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x151B554))(this, newTransactionId, newPayload);
	}
	template <typename R = void> R RemoveReceipt() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B67C))(this);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B688))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B710))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(TransactionEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x151B71C))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(TransactionEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x151B830))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B944))(this);
	}
	template <typename R = SavingsPackLevelComponent*> R get_savingsPackLevel() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B950))(this);
	}
	template <typename R = bool> R get_hasSavingsPackLevel() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151B9D8))(this);
	}
	template <typename R = void> R AddSavingsPackLevel(int32_t newValue) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151B9E4))(this, newValue);
	}
	template <typename R = void> R ReplaceSavingsPackLevel(int32_t newValue) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151BAE8))(this, newValue);
	}
	template <typename R = void> R RemoveSavingsPackLevel() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151BBEC))(this);
	}
	template <typename R = SaviorPointsComponent*> R get_saviorPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151BBF8))(this);
	}
	template <typename R = bool> R get_hasSaviorPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151BC80))(this);
	}
	template <typename R = void> R AddSaviorPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151BC8C))(this, newCount);
	}
	template <typename R = void> R ReplaceSaviorPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151BD90))(this, newCount);
	}
	template <typename R = void> R RemoveSaviorPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151BE94))(this);
	}
	template <typename R = SeasonPointsComponent*> R get_seasonPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151BEA0))(this);
	}
	template <typename R = bool> R get_hasSeasonPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151BF28))(this);
	}
	template <typename R = void> R AddSeasonPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151BF34))(this, newCount);
	}
	template <typename R = void> R ReplaceSeasonPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151C038))(this, newCount);
	}
	template <typename R = void> R RemoveSeasonPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C13C))(this);
	}
	template <typename R = SilverComponent*> R get_silver() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C148))(this);
	}
	template <typename R = bool> R get_hasSilver() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C1D0))(this);
	}
	template <typename R = void> R AddSilver(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151C1DC))(this, newCount);
	}
	template <typename R = void> R ReplaceSilver(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151C2E0))(this, newCount);
	}
	template <typename R = void> R RemoveSilver() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C3E4))(this);
	}
	template <typename R = StoreComponent*> R get_store() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C3F0))(this);
	}
	template <typename R = bool> R get_hasStore() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C478))(this);
	}
	template <typename R = void> R AddStore(Il2CppString* newName, int32_t newPriceId) {
		return ((R (*)(TransactionEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x151C484))(this, newName, newPriceId);
	}
	template <typename R = void> R ReplaceStore(Il2CppString* newName, int32_t newPriceId) {
		return ((R (*)(TransactionEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x151C5A0))(this, newName, newPriceId);
	}
	template <typename R = void> R RemoveStore() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C6BC))(this);
	}
	template <typename R = StoreExpComponent*> R get_storeExp() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C6C8))(this);
	}
	template <typename R = bool> R get_hasStoreExp() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C750))(this);
	}
	template <typename R = void> R AddStoreExp(uint32_t newValue) {
		return ((R (*)(TransactionEntity*, uint32_t))(Il2CppBase() + 0x151C75C))(this, newValue);
	}
	template <typename R = void> R ReplaceStoreExp(uint32_t newValue) {
		return ((R (*)(TransactionEntity*, uint32_t))(Il2CppBase() + 0x151C860))(this, newValue);
	}
	template <typename R = void> R RemoveStoreExp() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C964))(this);
	}
	template <typename R = TicketsComponent*> R get_tickets() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C970))(this);
	}
	template <typename R = bool> R get_hasTickets() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151C9F8))(this);
	}
	template <typename R = void> R AddTickets(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CA04))(this, newCount);
	}
	template <typename R = void> R ReplaceTickets(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CB08))(this, newCount);
	}
	template <typename R = void> R RemoveTickets() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151CC0C))(this);
	}
	template <typename R = TournamentPointsComponent*> R get_tournamentPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151CC18))(this);
	}
	template <typename R = bool> R get_hasTournamentPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151CCA0))(this);
	}
	template <typename R = void> R AddTournamentPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CCAC))(this, newCount);
	}
	template <typename R = void> R ReplaceTournamentPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CDB0))(this, newCount);
	}
	template <typename R = void> R RemoveTournamentPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151CEB4))(this);
	}
	template <typename R = TransactionComponent*> R get_transaction() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151CEC0))(this);
	}
	template <typename R = bool> R get_hasTransaction() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151CF48))(this);
	}
	template <typename R = void> R AddTransaction(int32_t newId) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15161BC))(this, newId);
	}
	template <typename R = void> R ReplaceTransaction(int32_t newId) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CF54))(this, newId);
	}
	template <typename R = void> R RemoveTransaction() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D058))(this);
	}
	template <typename R = TransactionTypeComponent*> R get_transactionType() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D064))(this);
	}
	template <typename R = bool> R get_hasTransactionType() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D0EC))(this);
	}
	template <typename R = void> R AddTransactionType(TransactionType* newType) {
		return ((R (*)(TransactionEntity*, TransactionType*))(Il2CppBase() + 0x151D0F8))(this, newType);
	}
	template <typename R = void> R ReplaceTransactionType(TransactionType* newType) {
		return ((R (*)(TransactionEntity*, TransactionType*))(Il2CppBase() + 0x151D1FC))(this, newType);
	}
	template <typename R = void> R RemoveTransactionType() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D300))(this);
	}
	template <typename R = USDPriceComponent*> R get_uSDPrice() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D30C))(this);
	}
	template <typename R = bool> R get_hasUSDPrice() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D394))(this);
	}
	template <typename R = void> R AddUSDPrice(float newValue) {
		return ((R (*)(TransactionEntity*, float))(Il2CppBase() + 0x151D3A0))(this, newValue);
	}
	template <typename R = void> R ReplaceUSDPrice(float newValue) {
		return ((R (*)(TransactionEntity*, float))(Il2CppBase() + 0x151D4A4))(this, newValue);
	}
	template <typename R = void> R RemoveUSDPrice() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D5A8))(this);
	}
	template <typename R = UnlockPremiumComponent*> R get_unlockPremium() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D5B4))(this);
	}
	template <typename R = bool> R get_hasUnlockPremium() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D63C))(this);
	}
	template <typename R = void> R AddUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((R (*)(TransactionEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x151D648))(this, newName, newSeason, newCycle);
	}
	template <typename R = void> R ReplaceUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((R (*)(TransactionEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x151D770))(this, newName, newSeason, newCycle);
	}
	template <typename R = void> R RemoveUnlockPremium() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D898))(this);
	}
	template <typename R = VIPPointsComponent*> R get_vIPPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D8A4))(this);
	}
	template <typename R = bool> R get_hasVIPPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151D92C))(this);
	}
	template <typename R = void> R AddVIPPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151D938))(this, newCount);
	}
	template <typename R = void> R ReplaceVIPPoints(int32_t newCount) {
		return ((R (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151DA3C))(this, newCount);
	}
	template <typename R = void> R RemoveVIPPoints() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151DB40))(this);
	}
	template <typename R = VipResourcesComponent*> R get_vipResources() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151DB4C))(this);
	}
	template <typename R = bool> R get_hasVipResources() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151DBD4))(this);
	}
	template <typename R = void> R AddVipResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(TransactionEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x151DBE0))(this, newList);
	}
	template <typename R = void> R ReplaceVipResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(TransactionEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x151DCF4))(this, newList);
	}
	template <typename R = void> R RemoveVipResources() {
		return ((R (*)(TransactionEntity*))(Il2CppBase() + 0x151DE08))(this);
	}

};

