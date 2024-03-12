#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransactionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionEntity"));
	}


	template <typename T = uintptr_t> T get_addExperience() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15163AC))(this);
	}
	template <typename T = bool> T get_hasAddExperience() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516434))(this);
	}
	template <typename T = void> T AddAddExperience(float newValue) {
		return ((T (*)(TransactionEntity*, float))(Il2CppBase() + 0x1516440))(this, newValue);
	}
	template <typename T = void> T ReplaceAddExperience(float newValue) {
		return ((T (*)(TransactionEntity*, float))(Il2CppBase() + 0x1516544))(this, newValue);
	}
	template <typename T = void> T RemoveAddExperience() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516648))(this);
	}
	template <typename T = uintptr_t> T get_addPetExperience() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516654))(this);
	}
	template <typename T = bool> T get_hasAddPetExperience() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15166DC))(this);
	}
	template <typename T = void> T AddAddPetExperience(float newValue) {
		return ((T (*)(TransactionEntity*, float))(Il2CppBase() + 0x15166E8))(this, newValue);
	}
	template <typename T = void> T ReplaceAddPetExperience(float newValue) {
		return ((T (*)(TransactionEntity*, float))(Il2CppBase() + 0x15167EC))(this, newValue);
	}
	template <typename T = void> T RemoveAddPetExperience() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15168F0))(this);
	}
	template <typename T = uintptr_t> T get_alvesBpPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15168FC))(this);
	}
	template <typename T = bool> T get_hasAlvesBpPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516984))(this);
	}
	template <typename T = void> T AddAlvesBpPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516990))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesBpPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516A94))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesBpPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516B98))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT1() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516BA4))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT1() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516C2C))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516C38))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516D3C))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT1() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516E40))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT2() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516E4C))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT2() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516ED4))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516EE0))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1516FE4))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT2() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15170E8))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT3() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15170F4))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT3() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151717C))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517188))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151728C))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT3() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517390))(this);
	}
	template <typename T = uintptr_t> T get_analyticsData() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151739C))(this);
	}
	template <typename T = bool> T get_hasAnalyticsData() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517424))(this);
	}
	template <typename T = void> T AddAnalyticsData(Il2CppString* newLabel, Il2CppString* newSublabel) {
		return ((T (*)(TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1517430))(this, newLabel, newSublabel);
	}
	template <typename T = void> T ReplaceAnalyticsData(Il2CppString* newLabel, Il2CppString* newSublabel) {
		return ((T (*)(TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1517558))(this, newLabel, newSublabel);
	}
	template <typename T = void> T RemoveAnalyticsData() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517680))(this);
	}
	template <typename T = uintptr_t> T get_battlePassAddLevels() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151768C))(this);
	}
	template <typename T = bool> T get_hasBattlePassAddLevels() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517714))(this);
	}
	template <typename T = void> T AddBattlePassAddLevels(uintptr_t newCurrencyType, int32_t newAddLevels) {
		return ((T (*)(TransactionEntity*, uintptr_t, int32_t))(Il2CppBase() + 0x1517720))(this, newCurrencyType, newAddLevels);
	}
	template <typename T = void> T ReplaceBattlePassAddLevels(uintptr_t newCurrencyType, int32_t newAddLevels) {
		return ((T (*)(TransactionEntity*, uintptr_t, int32_t))(Il2CppBase() + 0x1517828))(this, newCurrencyType, newAddLevels);
	}
	template <typename T = void> T RemoveBattlePassAddLevels() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517930))(this);
	}
	template <typename T = uintptr_t> T get_callback() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516324))(this);
	}
	template <typename T = bool> T get_hasCallback() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1516318))(this);
	}
	template <typename T = void> T AddCallback(void* newMethod) {
		return ((T (*)(TransactionEntity*, void*))(Il2CppBase() + 0x151793C))(this, newMethod);
	}
	template <typename T = void> T ReplaceCallback(void* newMethod) {
		return ((T (*)(TransactionEntity*, void*))(Il2CppBase() + 0x1517A50))(this, newMethod);
	}
	template <typename T = void> T RemoveCallback() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517B64))(this);
	}
	template <typename T = uintptr_t> T get_cashbackCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517B70))(this);
	}
	template <typename T = bool> T get_hasCashbackCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517BF8))(this);
	}
	template <typename T = void> T AddCashbackCoins(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517C04))(this, newCount);
	}
	template <typename T = void> T ReplaceCashbackCoins(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517D08))(this, newCount);
	}
	template <typename T = void> T RemoveCashbackCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517E0C))(this);
	}
	template <typename T = uintptr_t> T get_coins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517E18))(this);
	}
	template <typename T = bool> T get_hasCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1517EA0))(this);
	}
	template <typename T = void> T AddCoins(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517EAC))(this, newCount);
	}
	template <typename T = void> T ReplaceCoins(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1517FB0))(this, newCount);
	}
	template <typename T = void> T RemoveCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15180B4))(this);
	}
	template <typename T = uintptr_t> T get_cyclicPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15180C0))(this);
	}
	template <typename T = bool> T get_hasCyclicPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518148))(this);
	}
	template <typename T = void> T AddCyclicPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518154))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518258))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151835C))(this);
	}
	template <typename T = uintptr_t> T get_cyclicPremiumTokens() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518368))(this);
	}
	template <typename T = bool> T get_hasCyclicPremiumTokens() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15183F0))(this);
	}
	template <typename T = void> T AddCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15183FC))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518500))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPremiumTokens() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518604))(this);
	}
	template <typename T = uintptr_t> T get_cyclicYmirSoul() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518610))(this);
	}
	template <typename T = bool> T get_hasCyclicYmirSoul() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518698))(this);
	}
	template <typename T = void> T AddCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15186A4))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15187A8))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicYmirSoul() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15188AC))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsA() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15188B8))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsA() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518940))(this);
	}
	template <typename T = void> T AddEventBpPointsA(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151894C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsA(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518A50))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsA() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518B54))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsB() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518B60))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsB() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518BE8))(this);
	}
	template <typename T = void> T AddEventBpPointsB(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518BF4))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsB(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518CF8))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsB() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518DFC))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsC() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518E08))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsC() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1518E90))(this);
	}
	template <typename T = void> T AddEventBpPointsC(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518E9C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsC(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1518FA0))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsC() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15190A4))(this);
	}
	template <typename T = uintptr_t> T get_experienceBoosterDuration() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15190B0))(this);
	}
	template <typename T = bool> T get_hasExperienceBoosterDuration() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519138))(this);
	}
	template <typename T = void> T AddExperienceBoosterDuration(float newValue) {
		return ((T (*)(TransactionEntity*, float))(Il2CppBase() + 0x1519144))(this, newValue);
	}
	template <typename T = void> T ReplaceExperienceBoosterDuration(float newValue) {
		return ((T (*)(TransactionEntity*, float))(Il2CppBase() + 0x1519248))(this, newValue);
	}
	template <typename T = void> T RemoveExperienceBoosterDuration() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151934C))(this);
	}
	template <typename T = uintptr_t> T get_extraLevelCap() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519358))(this);
	}
	template <typename T = bool> T get_hasExtraLevelCap() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15193E0))(this);
	}
	template <typename T = void> T AddExtraLevelCap(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15193EC))(this, newCount);
	}
	template <typename T = void> T ReplaceExtraLevelCap(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15194F0))(this, newCount);
	}
	template <typename T = void> T RemoveExtraLevelCap() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15195F4))(this);
	}
	template <typename T = uintptr_t> T get_giantReputation() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519600))(this);
	}
	template <typename T = bool> T get_hasGiantReputation() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519688))(this);
	}
	template <typename T = void> T AddGiantReputation(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519694))(this, newCount);
	}
	template <typename T = void> T ReplaceGiantReputation(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519798))(this, newCount);
	}
	template <typename T = void> T RemoveGiantReputation() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151989C))(this);
	}
	template <typename T = uintptr_t> T get_guildBossCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x15198A8))(this);
	}
	template <typename T = bool> T get_hasGuildBossCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519930))(this);
	}
	template <typename T = void> T AddGuildBossCoins(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151993C))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildBossCoins(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519A40))(this, newCount);
	}
	template <typename T = void> T RemoveGuildBossCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519B44))(this);
	}
	template <typename T = uintptr_t> T get_guildCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519B50))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519BD8))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519BE4))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x1519CE8))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519DEC))(this);
	}
	template <typename T = uintptr_t> T get_huaweiToken() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519DF8))(this);
	}
	template <typename T = bool> T get_hasHuaweiToken() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x1519E80))(this);
	}
	template <typename T = void> T AddHuaweiToken(Il2CppString* newValue) {
		return ((T (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x1519E8C))(this, newValue);
	}
	template <typename T = void> T ReplaceHuaweiToken(Il2CppString* newValue) {
		return ((T (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x1519FA0))(this, newValue);
	}
	template <typename T = void> T RemoveHuaweiToken() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A0B4))(this);
	}
	template <typename T = uintptr_t> T get_influence() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A0C0))(this);
	}
	template <typename T = bool> T get_hasInfluence() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A148))(this);
	}
	template <typename T = void> T AddInfluence(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151A154))(this, newCount);
	}
	template <typename T = void> T ReplaceInfluence(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151A258))(this, newCount);
	}
	template <typename T = void> T RemoveInfluence() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A35C))(this);
	}
	template <typename T = uintptr_t> T get_messageId() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A368))(this);
	}
	template <typename T = bool> T get_hasMessageId() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A3F0))(this);
	}
	template <typename T = void> T AddMessageId(int64_t newId) {
		return ((T (*)(TransactionEntity*, int64_t))(Il2CppBase() + 0x151A3FC))(this, newId);
	}
	template <typename T = void> T ReplaceMessageId(int64_t newId) {
		return ((T (*)(TransactionEntity*, int64_t))(Il2CppBase() + 0x151A500))(this, newId);
	}
	template <typename T = void> T RemoveMessageId() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A604))(this);
	}
	template <typename T = uintptr_t> T get_playerId() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A610))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A698))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(TransactionEntity*, int64_t))(Il2CppBase() + 0x151A6A4))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(TransactionEntity*, int64_t))(Il2CppBase() + 0x151A7A8))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A8AC))(this);
	}
	template <typename T = uintptr_t> T get_point() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A8B8))(this);
	}
	template <typename T = bool> T get_hasPoint() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151A940))(this);
	}
	template <typename T = void> T AddPoint(Il2CppString* newName) {
		return ((T (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x151A94C))(this, newName);
	}
	template <typename T = void> T ReplacePoint(Il2CppString* newName) {
		return ((T (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x151AA60))(this, newName);
	}
	template <typename T = void> T RemovePoint() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151AB74))(this);
	}
	template <typename T = uintptr_t> T get_portalsPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151AB80))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151AC08))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151AC14))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151AD18))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151AE1C))(this);
	}
	template <typename T = uintptr_t> T get_purchaceError() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151AE28))(this);
	}
	template <typename T = bool> T get_hasPurchaceError() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151AEB0))(this);
	}
	template <typename T = void> T AddPurchaceError(uintptr_t newValue) {
		return ((T (*)(TransactionEntity*, uintptr_t))(Il2CppBase() + 0x151AEBC))(this, newValue);
	}
	template <typename T = void> T ReplacePurchaceError(uintptr_t newValue) {
		return ((T (*)(TransactionEntity*, uintptr_t))(Il2CppBase() + 0x151AFC0))(this, newValue);
	}
	template <typename T = void> T RemovePurchaceError() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B0C4))(this);
	}
	template <typename T = uintptr_t> T get_quest() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B0D0))(this);
	}
	template <typename T = bool> T get_hasQuest() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B158))(this);
	}
	template <typename T = void> T AddQuest(Il2CppString* newName) {
		return ((T (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x151B164))(this, newName);
	}
	template <typename T = void> T ReplaceQuest(Il2CppString* newName) {
		return ((T (*)(TransactionEntity*, Il2CppString*))(Il2CppBase() + 0x151B278))(this, newName);
	}
	template <typename T = void> T RemoveQuest() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B38C))(this);
	}
	template <typename T = uintptr_t> T get_receipt() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B398))(this);
	}
	template <typename T = bool> T get_hasReceipt() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B420))(this);
	}
	template <typename T = void> T AddReceipt(Il2CppString* newTransactionId, Il2CppString* newPayload) {
		return ((T (*)(TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x151B42C))(this, newTransactionId, newPayload);
	}
	template <typename T = void> T ReplaceReceipt(Il2CppString* newTransactionId, Il2CppString* newPayload) {
		return ((T (*)(TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x151B554))(this, newTransactionId, newPayload);
	}
	template <typename T = void> T RemoveReceipt() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B67C))(this);
	}
	template <typename T = uintptr_t> T get_resources() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B688))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B710))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TransactionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x151B71C))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TransactionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x151B830))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B944))(this);
	}
	template <typename T = uintptr_t> T get_savingsPackLevel() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B950))(this);
	}
	template <typename T = bool> T get_hasSavingsPackLevel() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151B9D8))(this);
	}
	template <typename T = void> T AddSavingsPackLevel(int32_t newValue) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151B9E4))(this, newValue);
	}
	template <typename T = void> T ReplaceSavingsPackLevel(int32_t newValue) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151BAE8))(this, newValue);
	}
	template <typename T = void> T RemoveSavingsPackLevel() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151BBEC))(this);
	}
	template <typename T = uintptr_t> T get_saviorPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151BBF8))(this);
	}
	template <typename T = bool> T get_hasSaviorPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151BC80))(this);
	}
	template <typename T = void> T AddSaviorPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151BC8C))(this, newCount);
	}
	template <typename T = void> T ReplaceSaviorPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151BD90))(this, newCount);
	}
	template <typename T = void> T RemoveSaviorPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151BE94))(this);
	}
	template <typename T = uintptr_t> T get_seasonPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151BEA0))(this);
	}
	template <typename T = bool> T get_hasSeasonPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151BF28))(this);
	}
	template <typename T = void> T AddSeasonPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151BF34))(this, newCount);
	}
	template <typename T = void> T ReplaceSeasonPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151C038))(this, newCount);
	}
	template <typename T = void> T RemoveSeasonPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C13C))(this);
	}
	template <typename T = uintptr_t> T get_silver() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C148))(this);
	}
	template <typename T = bool> T get_hasSilver() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C1D0))(this);
	}
	template <typename T = void> T AddSilver(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151C1DC))(this, newCount);
	}
	template <typename T = void> T ReplaceSilver(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151C2E0))(this, newCount);
	}
	template <typename T = void> T RemoveSilver() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C3E4))(this);
	}
	template <typename T = uintptr_t> T get_store() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C3F0))(this);
	}
	template <typename T = bool> T get_hasStore() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C478))(this);
	}
	template <typename T = void> T AddStore(Il2CppString* newName, int32_t newPriceId) {
		return ((T (*)(TransactionEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x151C484))(this, newName, newPriceId);
	}
	template <typename T = void> T ReplaceStore(Il2CppString* newName, int32_t newPriceId) {
		return ((T (*)(TransactionEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x151C5A0))(this, newName, newPriceId);
	}
	template <typename T = void> T RemoveStore() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C6BC))(this);
	}
	template <typename T = uintptr_t> T get_storeExp() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C6C8))(this);
	}
	template <typename T = bool> T get_hasStoreExp() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C750))(this);
	}
	template <typename T = void> T AddStoreExp(uint32_t newValue) {
		return ((T (*)(TransactionEntity*, uint32_t))(Il2CppBase() + 0x151C75C))(this, newValue);
	}
	template <typename T = void> T ReplaceStoreExp(uint32_t newValue) {
		return ((T (*)(TransactionEntity*, uint32_t))(Il2CppBase() + 0x151C860))(this, newValue);
	}
	template <typename T = void> T RemoveStoreExp() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C964))(this);
	}
	template <typename T = uintptr_t> T get_tickets() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C970))(this);
	}
	template <typename T = bool> T get_hasTickets() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151C9F8))(this);
	}
	template <typename T = void> T AddTickets(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CA04))(this, newCount);
	}
	template <typename T = void> T ReplaceTickets(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CB08))(this, newCount);
	}
	template <typename T = void> T RemoveTickets() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151CC0C))(this);
	}
	template <typename T = uintptr_t> T get_tournamentPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151CC18))(this);
	}
	template <typename T = bool> T get_hasTournamentPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151CCA0))(this);
	}
	template <typename T = void> T AddTournamentPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CCAC))(this, newCount);
	}
	template <typename T = void> T ReplaceTournamentPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CDB0))(this, newCount);
	}
	template <typename T = void> T RemoveTournamentPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151CEB4))(this);
	}
	template <typename T = uintptr_t> T get_transaction() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151CEC0))(this);
	}
	template <typename T = bool> T get_hasTransaction() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151CF48))(this);
	}
	template <typename T = void> T AddTransaction(int32_t newId) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x15161BC))(this, newId);
	}
	template <typename T = void> T ReplaceTransaction(int32_t newId) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151CF54))(this, newId);
	}
	template <typename T = void> T RemoveTransaction() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D058))(this);
	}
	template <typename T = uintptr_t> T get_transactionType() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D064))(this);
	}
	template <typename T = bool> T get_hasTransactionType() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D0EC))(this);
	}
	template <typename T = void> T AddTransactionType(uintptr_t newType) {
		return ((T (*)(TransactionEntity*, uintptr_t))(Il2CppBase() + 0x151D0F8))(this, newType);
	}
	template <typename T = void> T ReplaceTransactionType(uintptr_t newType) {
		return ((T (*)(TransactionEntity*, uintptr_t))(Il2CppBase() + 0x151D1FC))(this, newType);
	}
	template <typename T = void> T RemoveTransactionType() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D300))(this);
	}
	template <typename T = uintptr_t> T get_uSDPrice() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D30C))(this);
	}
	template <typename T = bool> T get_hasUSDPrice() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D394))(this);
	}
	template <typename T = void> T AddUSDPrice(float newValue) {
		return ((T (*)(TransactionEntity*, float))(Il2CppBase() + 0x151D3A0))(this, newValue);
	}
	template <typename T = void> T ReplaceUSDPrice(float newValue) {
		return ((T (*)(TransactionEntity*, float))(Il2CppBase() + 0x151D4A4))(this, newValue);
	}
	template <typename T = void> T RemoveUSDPrice() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D5A8))(this);
	}
	template <typename T = uintptr_t> T get_unlockPremium() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D5B4))(this);
	}
	template <typename T = bool> T get_hasUnlockPremium() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D63C))(this);
	}
	template <typename T = void> T AddUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((T (*)(TransactionEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x151D648))(this, newName, newSeason, newCycle);
	}
	template <typename T = void> T ReplaceUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((T (*)(TransactionEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x151D770))(this, newName, newSeason, newCycle);
	}
	template <typename T = void> T RemoveUnlockPremium() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D898))(this);
	}
	template <typename T = uintptr_t> T get_vIPPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D8A4))(this);
	}
	template <typename T = bool> T get_hasVIPPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151D92C))(this);
	}
	template <typename T = void> T AddVIPPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151D938))(this, newCount);
	}
	template <typename T = void> T ReplaceVIPPoints(int32_t newCount) {
		return ((T (*)(TransactionEntity*, int32_t))(Il2CppBase() + 0x151DA3C))(this, newCount);
	}
	template <typename T = void> T RemoveVIPPoints() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151DB40))(this);
	}
	template <typename T = uintptr_t> T get_vipResources() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151DB4C))(this);
	}
	template <typename T = bool> T get_hasVipResources() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151DBD4))(this);
	}
	template <typename T = void> T AddVipResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TransactionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x151DBE0))(this, newList);
	}
	template <typename T = void> T ReplaceVipResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TransactionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x151DCF4))(this, newList);
	}
	template <typename T = void> T RemoveVipResources() {
		return ((T (*)(TransactionEntity*))(Il2CppBase() + 0x151DE08))(this);
	}

};

}
