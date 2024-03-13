#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigEntity"));
	}


	template <typename T = ActorDamageModsCoefComponent*> T get_actorDamageModsCoef() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D5CB0))(this);
	}
	template <typename T = bool> T get_hasActorDamageModsCoef() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D5D38))(this);
	}
	template <typename T = void> T AddActorDamageModsCoef(float newValue) {
		return ((T (*)(ConfigEntity*, float))(Il2CppBase() + 0x15D5D44))(this, newValue);
	}
	template <typename T = void> T ReplaceActorDamageModsCoef(float newValue) {
		return ((T (*)(ConfigEntity*, float))(Il2CppBase() + 0x15D5E48))(this, newValue);
	}
	template <typename T = void> T RemoveActorDamageModsCoef() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D5F4C))(this);
	}
	template <typename T = AlvesBpPointsComponent*> T get_alvesBpPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D5F58))(this);
	}
	template <typename T = bool> T get_hasAlvesBpPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D5FE0))(this);
	}
	template <typename T = void> T AddAlvesBpPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D5FEC))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesBpPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D60F0))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesBpPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D61F4))(this);
	}
	template <typename T = AlvesWavesBadgesT1Component*> T get_alvesWavesBadgesT1() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6200))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT1() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6288))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D6294))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D6398))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT1() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D649C))(this);
	}
	template <typename T = AlvesWavesBadgesT2Component*> T get_alvesWavesBadgesT2() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D64A8))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT2() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6530))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D653C))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D6640))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT2() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6744))(this);
	}
	template <typename T = AlvesWavesBadgesT3Component*> T get_alvesWavesBadgesT3() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6750))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT3() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D67D8))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D67E4))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D68E8))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT3() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D69EC))(this);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D69F8))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6A80))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D6A8C))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D6BA0))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6CB4))(this);
	}
	template <typename T = CanBlockedComponent*> T get_canBlocked() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6CC0))(this);
	}
	template <typename T = bool> T get_hasCanBlocked() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6D48))(this);
	}
	template <typename T = void> T AddCanBlocked(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D6D54))(this, newValue);
	}
	template <typename T = void> T ReplaceCanBlocked(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D6E5C))(this, newValue);
	}
	template <typename T = void> T RemoveCanBlocked() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6F64))(this);
	}
	template <typename T = CanLifeStealComponent*> T get_canLifeSteal() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6F70))(this);
	}
	template <typename T = bool> T get_hasCanLifeSteal() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D6FF8))(this);
	}
	template <typename T = void> T AddCanLifeSteal(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D7004))(this, newValue);
	}
	template <typename T = void> T ReplaceCanLifeSteal(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D710C))(this, newValue);
	}
	template <typename T = void> T RemoveCanLifeSteal() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7214))(this);
	}
	template <typename T = CanReflectComponent*> T get_canReflect() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7220))(this);
	}
	template <typename T = bool> T get_hasCanReflect() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D72A8))(this);
	}
	template <typename T = void> T AddCanReflect(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D72B4))(this, newValue);
	}
	template <typename T = void> T ReplaceCanReflect(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D73BC))(this, newValue);
	}
	template <typename T = void> T RemoveCanReflect() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D74C4))(this);
	}
	template <typename T = CashbackCoinsComponent*> T get_cashbackCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D74D0))(this);
	}
	template <typename T = bool> T get_hasCashbackCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7558))(this);
	}
	template <typename T = void> T AddCashbackCoins(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7564))(this, newCount);
	}
	template <typename T = void> T ReplaceCashbackCoins(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7668))(this, newCount);
	}
	template <typename T = void> T RemoveCashbackCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D776C))(this);
	}
	template <typename T = CoinsComponent*> T get_coins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7778))(this);
	}
	template <typename T = bool> T get_hasCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7800))(this);
	}
	template <typename T = void> T AddCoins(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D780C))(this, newCount);
	}
	template <typename T = void> T ReplaceCoins(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7910))(this, newCount);
	}
	template <typename T = void> T RemoveCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7A14))(this);
	}
	template <typename T = ConfigTypeComponent*> T get_configType() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7A20))(this);
	}
	template <typename T = bool> T get_hasConfigType() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7AA8))(this);
	}
	template <typename T = void> T AddConfigType(ConfigType* newValue) {
		return ((T (*)(ConfigEntity*, ConfigType*))(Il2CppBase() + 0x15D7AB4))(this, newValue);
	}
	template <typename T = void> T ReplaceConfigType(ConfigType* newValue) {
		return ((T (*)(ConfigEntity*, ConfigType*))(Il2CppBase() + 0x15D7BB8))(this, newValue);
	}
	template <typename T = void> T RemoveConfigType() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7CBC))(this);
	}
	template <typename T = CyclicPointsComponent*> T get_cyclicPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7CC8))(this);
	}
	template <typename T = bool> T get_hasCyclicPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7D50))(this);
	}
	template <typename T = void> T AddCyclicPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7D5C))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7E60))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7F64))(this);
	}
	template <typename T = CyclicPremiumTokensComponent*> T get_cyclicPremiumTokens() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7F70))(this);
	}
	template <typename T = bool> T get_hasCyclicPremiumTokens() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D7FF8))(this);
	}
	template <typename T = void> T AddCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8004))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8108))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPremiumTokens() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D820C))(this);
	}
	template <typename T = CyclicYmirSoulComponent*> T get_cyclicYmirSoul() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8218))(this);
	}
	template <typename T = bool> T get_hasCyclicYmirSoul() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D82A0))(this);
	}
	template <typename T = void> T AddCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D82AC))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D83B0))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicYmirSoul() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D84B4))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D84C0))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8548))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(ConfigEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15D8554))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(ConfigEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15D867C))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D87A4))(this);
	}
	template <typename T = DescriptionStatsComponent*> T get_descriptionStats() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D87B0))(this);
	}
	template <typename T = bool> T get_hasDescriptionStats() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8838))(this);
	}
	template <typename T = void> T AddDescriptionStats(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ConfigEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15D8844))(this, newValues);
	}
	template <typename T = void> T ReplaceDescriptionStats(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ConfigEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15D8958))(this, newValues);
	}
	template <typename T = void> T RemoveDescriptionStats() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8A6C))(this);
	}
	template <typename T = EventBpPointsAComponent*> T get_eventBpPointsA() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8A78))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsA() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8B00))(this);
	}
	template <typename T = void> T AddEventBpPointsA(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8B0C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsA(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8C10))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsA() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8D14))(this);
	}
	template <typename T = EventBpPointsBComponent*> T get_eventBpPointsB() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8D20))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsB() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8DA8))(this);
	}
	template <typename T = void> T AddEventBpPointsB(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8DB4))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsB(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8EB8))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsB() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8FBC))(this);
	}
	template <typename T = EventBpPointsCComponent*> T get_eventBpPointsC() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D8FC8))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsC() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9050))(this);
	}
	template <typename T = void> T AddEventBpPointsC(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D905C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsC(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9160))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsC() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9264))(this);
	}
	template <typename T = ExtraLevelCapComponent*> T get_extraLevelCap() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9270))(this);
	}
	template <typename T = bool> T get_hasExtraLevelCap() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D92F8))(this);
	}
	template <typename T = void> T AddExtraLevelCap(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9304))(this, newCount);
	}
	template <typename T = void> T ReplaceExtraLevelCap(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9408))(this, newCount);
	}
	template <typename T = void> T RemoveExtraLevelCap() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D950C))(this);
	}
	template <typename T = FormatStringComponent*> T get_formatString() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9518))(this);
	}
	template <typename T = bool> T get_hasFormatString() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D95A0))(this);
	}
	template <typename T = void> T AddFormatString(Il2CppString* newValue) {
		return ((T (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D95AC))(this, newValue);
	}
	template <typename T = void> T ReplaceFormatString(Il2CppString* newValue) {
		return ((T (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D96C0))(this, newValue);
	}
	template <typename T = void> T RemoveFormatString() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D97D4))(this);
	}
	template <typename T = GiantReputationComponent*> T get_giantReputation() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D97E0))(this);
	}
	template <typename T = bool> T get_hasGiantReputation() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9868))(this);
	}
	template <typename T = void> T AddGiantReputation(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9874))(this, newCount);
	}
	template <typename T = void> T ReplaceGiantReputation(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9978))(this, newCount);
	}
	template <typename T = void> T RemoveGiantReputation() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9A7C))(this);
	}
	template <typename T = GradeComponent*> T get_grade() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9A88))(this);
	}
	template <typename T = bool> T get_hasGrade() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9B10))(this);
	}
	template <typename T = void> T AddGrade(int32_t newValue) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9B1C))(this, newValue);
	}
	template <typename T = void> T ReplaceGrade(int32_t newValue) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9C20))(this, newValue);
	}
	template <typename T = void> T RemoveGrade() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9D24))(this);
	}
	template <typename T = GroupNameComponent*> T get_groupName() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9D30))(this);
	}
	template <typename T = bool> T get_hasGroupName() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9DB8))(this);
	}
	template <typename T = void> T AddGroupName(Il2CppString* newValue) {
		return ((T (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D9DC4))(this, newValue);
	}
	template <typename T = void> T ReplaceGroupName(Il2CppString* newValue) {
		return ((T (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D9ED8))(this, newValue);
	}
	template <typename T = void> T RemoveGroupName() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9FEC))(this);
	}
	template <typename T = GuildBossCoinsComponent*> T get_guildBossCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15D9FF8))(this);
	}
	template <typename T = bool> T get_hasGuildBossCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA080))(this);
	}
	template <typename T = void> T AddGuildBossCoins(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA08C))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildBossCoins(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA190))(this, newCount);
	}
	template <typename T = void> T RemoveGuildBossCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA294))(this);
	}
	template <typename T = GuildCoinsComponent*> T get_guildCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA2A0))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA328))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA334))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA438))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA53C))(this);
	}
	template <typename T = InfluenceComponent*> T get_influence() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA548))(this);
	}
	template <typename T = bool> T get_hasInfluence() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA5D0))(this);
	}
	template <typename T = void> T AddInfluence(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA5DC))(this, newCount);
	}
	template <typename T = void> T ReplaceInfluence(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA6E0))(this, newCount);
	}
	template <typename T = void> T RemoveInfluence() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA7E4))(this);
	}
	template <typename T = InterruptComponent*> T get_interrupt() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA7F0))(this);
	}
	template <typename T = bool> T get_hasInterrupt() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DA878))(this);
	}
	template <typename T = void> T AddInterrupt(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DA884))(this, newValue);
	}
	template <typename T = void> T ReplaceInterrupt(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DA98C))(this, newValue);
	}
	template <typename T = void> T RemoveInterrupt() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DAA94))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DAAA0))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DAB28))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ConfigEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15DAB34))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ConfigEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15DAC48))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DAD5C))(this);
	}
	template <typename T = OrderComponent*> T get_order() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DAD68))(this);
	}
	template <typename T = bool> T get_hasOrder() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DADF0))(this);
	}
	template <typename T = void> T AddOrder(int32_t newValue) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DADFC))(this, newValue);
	}
	template <typename T = void> T ReplaceOrder(int32_t newValue) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DAF00))(this, newValue);
	}
	template <typename T = void> T RemoveOrder() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB004))(this);
	}
	template <typename T = OscillationComponent*> T get_oscillation() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB010))(this);
	}
	template <typename T = bool> T get_hasOscillation() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB098))(this);
	}
	template <typename T = void> T AddOscillation(float newStep, Il2CppString* newArray, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ConfigEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15DB0A4))(this, newStep, newArray, newValues);
	}
	template <typename T = void> T ReplaceOscillation(float newStep, Il2CppString* newArray, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ConfigEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15DB1DC))(this, newStep, newArray, newValues);
	}
	template <typename T = void> T RemoveOscillation() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB314))(this);
	}
	template <typename T = PlayerStatTypeComponent*> T get_playerStatType() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB320))(this);
	}
	template <typename T = bool> T get_hasPlayerStatType() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB3A8))(this);
	}
	template <typename T = void> T AddPlayerStatType(PlayerStatType* newValue) {
		return ((T (*)(ConfigEntity*, PlayerStatType*))(Il2CppBase() + 0x15DB3B4))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerStatType(PlayerStatType* newValue) {
		return ((T (*)(ConfigEntity*, PlayerStatType*))(Il2CppBase() + 0x15DB4B8))(this, newValue);
	}
	template <typename T = void> T RemovePlayerStatType() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB5BC))(this);
	}
	template <typename T = PortalsPointsComponent*> T get_portalsPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB5C8))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB650))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DB65C))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DB760))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB864))(this);
	}
	template <typename T = RaiseSelfHitTriggerComponent*> T get_raiseSelfHitTrigger() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB870))(this);
	}
	template <typename T = bool> T get_hasRaiseSelfHitTrigger() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DB8F8))(this);
	}
	template <typename T = void> T AddRaiseSelfHitTrigger(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DB904))(this, newValue);
	}
	template <typename T = void> T ReplaceRaiseSelfHitTrigger(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DBA0C))(this, newValue);
	}
	template <typename T = void> T RemoveRaiseSelfHitTrigger() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DBB14))(this);
	}
	template <typename T = RaiseTargetHitTriggerComponent*> T get_raiseTargetHitTrigger() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DBB20))(this);
	}
	template <typename T = bool> T get_hasRaiseTargetHitTrigger() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DBBA8))(this);
	}
	template <typename T = void> T AddRaiseTargetHitTrigger(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DBBB4))(this, newValue);
	}
	template <typename T = void> T ReplaceRaiseTargetHitTrigger(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DBCBC))(this, newValue);
	}
	template <typename T = void> T RemoveRaiseTargetHitTrigger() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DBDC4))(this);
	}
	template <typename T = ResourcesComponent*> T get_resources() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DBDD0))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DBE58))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(ConfigEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15DBE64))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(ConfigEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15DBF78))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC08C))(this);
	}
	template <typename T = SaviorPointsComponent*> T get_saviorPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC098))(this);
	}
	template <typename T = bool> T get_hasSaviorPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC120))(this);
	}
	template <typename T = void> T AddSaviorPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC12C))(this, newCount);
	}
	template <typename T = void> T ReplaceSaviorPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC230))(this, newCount);
	}
	template <typename T = void> T RemoveSaviorPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC334))(this);
	}
	template <typename T = SeasonPointsComponent*> T get_seasonPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC340))(this);
	}
	template <typename T = bool> T get_hasSeasonPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC3C8))(this);
	}
	template <typename T = void> T AddSeasonPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC3D4))(this, newCount);
	}
	template <typename T = void> T ReplaceSeasonPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC4D8))(this, newCount);
	}
	template <typename T = void> T RemoveSeasonPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC5DC))(this);
	}
	template <typename T = SilverComponent*> T get_silver() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC5E8))(this);
	}
	template <typename T = bool> T get_hasSilver() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC670))(this);
	}
	template <typename T = void> T AddSilver(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC67C))(this, newCount);
	}
	template <typename T = void> T ReplaceSilver(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC780))(this, newCount);
	}
	template <typename T = void> T RemoveSilver() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC884))(this);
	}
	template <typename T = TargetArmorCoefComponent*> T get_targetArmorCoef() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC890))(this);
	}
	template <typename T = bool> T get_hasTargetArmorCoef() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DC918))(this);
	}
	template <typename T = void> T AddTargetArmorCoef(float newValue) {
		return ((T (*)(ConfigEntity*, float))(Il2CppBase() + 0x15DC924))(this, newValue);
	}
	template <typename T = void> T ReplaceTargetArmorCoef(float newValue) {
		return ((T (*)(ConfigEntity*, float))(Il2CppBase() + 0x15DCA28))(this, newValue);
	}
	template <typename T = void> T RemoveTargetArmorCoef() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DCB2C))(this);
	}
	template <typename T = TargetMitigationCoefComponent*> T get_targetMitigationCoef() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DCB38))(this);
	}
	template <typename T = bool> T get_hasTargetMitigationCoef() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DCBC0))(this);
	}
	template <typename T = void> T AddTargetMitigationCoef(float newValue) {
		return ((T (*)(ConfigEntity*, float))(Il2CppBase() + 0x15DCBCC))(this, newValue);
	}
	template <typename T = void> T ReplaceTargetMitigationCoef(float newValue) {
		return ((T (*)(ConfigEntity*, float))(Il2CppBase() + 0x15DCCD0))(this, newValue);
	}
	template <typename T = void> T RemoveTargetMitigationCoef() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DCDD4))(this);
	}
	template <typename T = TicketsComponent*> T get_tickets() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DCDE0))(this);
	}
	template <typename T = bool> T get_hasTickets() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DCE68))(this);
	}
	template <typename T = void> T AddTickets(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DCE74))(this, newCount);
	}
	template <typename T = void> T ReplaceTickets(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DCF78))(this, newCount);
	}
	template <typename T = void> T RemoveTickets() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DD07C))(this);
	}
	template <typename T = UseActorBonusVsTargetComponent*> T get_useActorBonusVsTarget() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DD088))(this);
	}
	template <typename T = bool> T get_hasUseActorBonusVsTarget() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DD110))(this);
	}
	template <typename T = void> T AddUseActorBonusVsTarget(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DD11C))(this, newValue);
	}
	template <typename T = void> T ReplaceUseActorBonusVsTarget(bool newValue) {
		return ((T (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DD224))(this, newValue);
	}
	template <typename T = void> T RemoveUseActorBonusVsTarget() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DD32C))(this);
	}
	template <typename T = VIPPointsComponent*> T get_vIPPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DD338))(this);
	}
	template <typename T = bool> T get_hasVIPPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DD3C0))(this);
	}
	template <typename T = void> T AddVIPPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DD3CC))(this, newCount);
	}
	template <typename T = void> T ReplaceVIPPoints(int32_t newCount) {
		return ((T (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DD4D0))(this, newCount);
	}
	template <typename T = void> T RemoveVIPPoints() {
		return ((T (*)(ConfigEntity*))(Il2CppBase() + 0x15DD5D4))(this);
	}

};

