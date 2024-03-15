#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigEntity"));
	}


	template <typename R = ActorDamageModsCoefComponent*> R get_actorDamageModsCoef() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D5CB0))(this);
	}
	template <typename R = bool> R get_hasActorDamageModsCoef() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D5D38))(this);
	}
	template <typename R = void> R AddActorDamageModsCoef(float newValue) {
		return ((R (*)(ConfigEntity*, float))(Il2CppBase() + 0x15D5D44))(this, newValue);
	}
	template <typename R = void> R ReplaceActorDamageModsCoef(float newValue) {
		return ((R (*)(ConfigEntity*, float))(Il2CppBase() + 0x15D5E48))(this, newValue);
	}
	template <typename R = void> R RemoveActorDamageModsCoef() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D5F4C))(this);
	}
	template <typename R = AlvesBpPointsComponent*> R get_alvesBpPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D5F58))(this);
	}
	template <typename R = bool> R get_hasAlvesBpPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D5FE0))(this);
	}
	template <typename R = void> R AddAlvesBpPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D5FEC))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesBpPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D60F0))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesBpPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D61F4))(this);
	}
	template <typename R = AlvesWavesBadgesT1Component*> R get_alvesWavesBadgesT1() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6200))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT1() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6288))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D6294))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D6398))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT1() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D649C))(this);
	}
	template <typename R = AlvesWavesBadgesT2Component*> R get_alvesWavesBadgesT2() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D64A8))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT2() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6530))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D653C))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D6640))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT2() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6744))(this);
	}
	template <typename R = AlvesWavesBadgesT3Component*> R get_alvesWavesBadgesT3() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6750))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT3() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D67D8))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D67E4))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D68E8))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT3() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D69EC))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D69F8))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6A80))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D6A8C))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D6BA0))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6CB4))(this);
	}
	template <typename R = CanBlockedComponent*> R get_canBlocked() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6CC0))(this);
	}
	template <typename R = bool> R get_hasCanBlocked() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6D48))(this);
	}
	template <typename R = void> R AddCanBlocked(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D6D54))(this, newValue);
	}
	template <typename R = void> R ReplaceCanBlocked(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D6E5C))(this, newValue);
	}
	template <typename R = void> R RemoveCanBlocked() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6F64))(this);
	}
	template <typename R = CanLifeStealComponent*> R get_canLifeSteal() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6F70))(this);
	}
	template <typename R = bool> R get_hasCanLifeSteal() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D6FF8))(this);
	}
	template <typename R = void> R AddCanLifeSteal(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D7004))(this, newValue);
	}
	template <typename R = void> R ReplaceCanLifeSteal(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D710C))(this, newValue);
	}
	template <typename R = void> R RemoveCanLifeSteal() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7214))(this);
	}
	template <typename R = CanReflectComponent*> R get_canReflect() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7220))(this);
	}
	template <typename R = bool> R get_hasCanReflect() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D72A8))(this);
	}
	template <typename R = void> R AddCanReflect(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D72B4))(this, newValue);
	}
	template <typename R = void> R ReplaceCanReflect(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15D73BC))(this, newValue);
	}
	template <typename R = void> R RemoveCanReflect() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D74C4))(this);
	}
	template <typename R = CashbackCoinsComponent*> R get_cashbackCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D74D0))(this);
	}
	template <typename R = bool> R get_hasCashbackCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7558))(this);
	}
	template <typename R = void> R AddCashbackCoins(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7564))(this, newCount);
	}
	template <typename R = void> R ReplaceCashbackCoins(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7668))(this, newCount);
	}
	template <typename R = void> R RemoveCashbackCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D776C))(this);
	}
	template <typename R = CoinsComponent*> R get_coins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7778))(this);
	}
	template <typename R = bool> R get_hasCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7800))(this);
	}
	template <typename R = void> R AddCoins(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D780C))(this, newCount);
	}
	template <typename R = void> R ReplaceCoins(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7910))(this, newCount);
	}
	template <typename R = void> R RemoveCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7A14))(this);
	}
	template <typename R = ConfigTypeComponent*> R get_configType() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7A20))(this);
	}
	template <typename R = bool> R get_hasConfigType() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7AA8))(this);
	}
	template <typename R = void> R AddConfigType(ConfigType newValue) {
		return ((R (*)(ConfigEntity*, ConfigType))(Il2CppBase() + 0x15D7AB4))(this, newValue);
	}
	template <typename R = void> R ReplaceConfigType(ConfigType newValue) {
		return ((R (*)(ConfigEntity*, ConfigType))(Il2CppBase() + 0x15D7BB8))(this, newValue);
	}
	template <typename R = void> R RemoveConfigType() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7CBC))(this);
	}
	template <typename R = CyclicPointsComponent*> R get_cyclicPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7CC8))(this);
	}
	template <typename R = bool> R get_hasCyclicPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7D50))(this);
	}
	template <typename R = void> R AddCyclicPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7D5C))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D7E60))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7F64))(this);
	}
	template <typename R = CyclicPremiumTokensComponent*> R get_cyclicPremiumTokens() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7F70))(this);
	}
	template <typename R = bool> R get_hasCyclicPremiumTokens() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D7FF8))(this);
	}
	template <typename R = void> R AddCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8004))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8108))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPremiumTokens() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D820C))(this);
	}
	template <typename R = CyclicYmirSoulComponent*> R get_cyclicYmirSoul() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8218))(this);
	}
	template <typename R = bool> R get_hasCyclicYmirSoul() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D82A0))(this);
	}
	template <typename R = void> R AddCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D82AC))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D83B0))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicYmirSoul() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D84B4))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D84C0))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8548))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(ConfigEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15D8554))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(ConfigEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15D867C))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D87A4))(this);
	}
	template <typename R = DescriptionStatsComponent*> R get_descriptionStats() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D87B0))(this);
	}
	template <typename R = bool> R get_hasDescriptionStats() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8838))(this);
	}
	template <typename R = void> R AddDescriptionStats(Il2CppArray<PlayerStatType>* newValues) {
		return ((R (*)(ConfigEntity*, Il2CppArray<PlayerStatType>*))(Il2CppBase() + 0x15D8844))(this, newValues);
	}
	template <typename R = void> R ReplaceDescriptionStats(Il2CppArray<PlayerStatType>* newValues) {
		return ((R (*)(ConfigEntity*, Il2CppArray<PlayerStatType>*))(Il2CppBase() + 0x15D8958))(this, newValues);
	}
	template <typename R = void> R RemoveDescriptionStats() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8A6C))(this);
	}
	template <typename R = EventBpPointsAComponent*> R get_eventBpPointsA() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8A78))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsA() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8B00))(this);
	}
	template <typename R = void> R AddEventBpPointsA(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8B0C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsA(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8C10))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsA() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8D14))(this);
	}
	template <typename R = EventBpPointsBComponent*> R get_eventBpPointsB() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8D20))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsB() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8DA8))(this);
	}
	template <typename R = void> R AddEventBpPointsB(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8DB4))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsB(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D8EB8))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsB() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8FBC))(this);
	}
	template <typename R = EventBpPointsCComponent*> R get_eventBpPointsC() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D8FC8))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsC() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9050))(this);
	}
	template <typename R = void> R AddEventBpPointsC(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D905C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsC(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9160))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsC() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9264))(this);
	}
	template <typename R = ExtraLevelCapComponent*> R get_extraLevelCap() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9270))(this);
	}
	template <typename R = bool> R get_hasExtraLevelCap() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D92F8))(this);
	}
	template <typename R = void> R AddExtraLevelCap(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9304))(this, newCount);
	}
	template <typename R = void> R ReplaceExtraLevelCap(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9408))(this, newCount);
	}
	template <typename R = void> R RemoveExtraLevelCap() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D950C))(this);
	}
	template <typename R = FormatStringComponent*> R get_formatString() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9518))(this);
	}
	template <typename R = bool> R get_hasFormatString() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D95A0))(this);
	}
	template <typename R = void> R AddFormatString(Il2CppString* newValue) {
		return ((R (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D95AC))(this, newValue);
	}
	template <typename R = void> R ReplaceFormatString(Il2CppString* newValue) {
		return ((R (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D96C0))(this, newValue);
	}
	template <typename R = void> R RemoveFormatString() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D97D4))(this);
	}
	template <typename R = GiantReputationComponent*> R get_giantReputation() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D97E0))(this);
	}
	template <typename R = bool> R get_hasGiantReputation() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9868))(this);
	}
	template <typename R = void> R AddGiantReputation(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9874))(this, newCount);
	}
	template <typename R = void> R ReplaceGiantReputation(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9978))(this, newCount);
	}
	template <typename R = void> R RemoveGiantReputation() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9A7C))(this);
	}
	template <typename R = GradeComponent*> R get_grade() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9A88))(this);
	}
	template <typename R = bool> R get_hasGrade() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9B10))(this);
	}
	template <typename R = void> R AddGrade(int32_t newValue) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9B1C))(this, newValue);
	}
	template <typename R = void> R ReplaceGrade(int32_t newValue) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15D9C20))(this, newValue);
	}
	template <typename R = void> R RemoveGrade() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9D24))(this);
	}
	template <typename R = GroupNameComponent*> R get_groupName() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9D30))(this);
	}
	template <typename R = bool> R get_hasGroupName() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9DB8))(this);
	}
	template <typename R = void> R AddGroupName(Il2CppString* newValue) {
		return ((R (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D9DC4))(this, newValue);
	}
	template <typename R = void> R ReplaceGroupName(Il2CppString* newValue) {
		return ((R (*)(ConfigEntity*, Il2CppString*))(Il2CppBase() + 0x15D9ED8))(this, newValue);
	}
	template <typename R = void> R RemoveGroupName() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9FEC))(this);
	}
	template <typename R = GuildBossCoinsComponent*> R get_guildBossCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15D9FF8))(this);
	}
	template <typename R = bool> R get_hasGuildBossCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA080))(this);
	}
	template <typename R = void> R AddGuildBossCoins(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA08C))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildBossCoins(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA190))(this, newCount);
	}
	template <typename R = void> R RemoveGuildBossCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA294))(this);
	}
	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA2A0))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA328))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA334))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA438))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA53C))(this);
	}
	template <typename R = InfluenceComponent*> R get_influence() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA548))(this);
	}
	template <typename R = bool> R get_hasInfluence() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA5D0))(this);
	}
	template <typename R = void> R AddInfluence(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA5DC))(this, newCount);
	}
	template <typename R = void> R ReplaceInfluence(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DA6E0))(this, newCount);
	}
	template <typename R = void> R RemoveInfluence() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA7E4))(this);
	}
	template <typename R = InterruptComponent*> R get_interrupt() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA7F0))(this);
	}
	template <typename R = bool> R get_hasInterrupt() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DA878))(this);
	}
	template <typename R = void> R AddInterrupt(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DA884))(this, newValue);
	}
	template <typename R = void> R ReplaceInterrupt(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DA98C))(this, newValue);
	}
	template <typename R = void> R RemoveInterrupt() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DAA94))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DAAA0))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DAB28))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ConfigEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x15DAB34))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ConfigEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x15DAC48))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DAD5C))(this);
	}
	template <typename R = OrderComponent*> R get_order() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DAD68))(this);
	}
	template <typename R = bool> R get_hasOrder() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DADF0))(this);
	}
	template <typename R = void> R AddOrder(int32_t newValue) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DADFC))(this, newValue);
	}
	template <typename R = void> R ReplaceOrder(int32_t newValue) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DAF00))(this, newValue);
	}
	template <typename R = void> R RemoveOrder() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB004))(this);
	}
	template <typename R = OscillationComponent*> R get_oscillation() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB010))(this);
	}
	template <typename R = bool> R get_hasOscillation() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB098))(this);
	}
	template <typename R = void> R AddOscillation(float newStep, Il2CppString* newArray, Il2CppArray<float>* newValues) {
		return ((R (*)(ConfigEntity*, float, Il2CppString*, Il2CppArray<float>*))(Il2CppBase() + 0x15DB0A4))(this, newStep, newArray, newValues);
	}
	template <typename R = void> R ReplaceOscillation(float newStep, Il2CppString* newArray, Il2CppArray<float>* newValues) {
		return ((R (*)(ConfigEntity*, float, Il2CppString*, Il2CppArray<float>*))(Il2CppBase() + 0x15DB1DC))(this, newStep, newArray, newValues);
	}
	template <typename R = void> R RemoveOscillation() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB314))(this);
	}
	template <typename R = PlayerStatTypeComponent*> R get_playerStatType() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB320))(this);
	}
	template <typename R = bool> R get_hasPlayerStatType() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB3A8))(this);
	}
	template <typename R = void> R AddPlayerStatType(PlayerStatType newValue) {
		return ((R (*)(ConfigEntity*, PlayerStatType))(Il2CppBase() + 0x15DB3B4))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerStatType(PlayerStatType newValue) {
		return ((R (*)(ConfigEntity*, PlayerStatType))(Il2CppBase() + 0x15DB4B8))(this, newValue);
	}
	template <typename R = void> R RemovePlayerStatType() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB5BC))(this);
	}
	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB5C8))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB650))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DB65C))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DB760))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB864))(this);
	}
	template <typename R = RaiseSelfHitTriggerComponent*> R get_raiseSelfHitTrigger() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB870))(this);
	}
	template <typename R = bool> R get_hasRaiseSelfHitTrigger() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DB8F8))(this);
	}
	template <typename R = void> R AddRaiseSelfHitTrigger(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DB904))(this, newValue);
	}
	template <typename R = void> R ReplaceRaiseSelfHitTrigger(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DBA0C))(this, newValue);
	}
	template <typename R = void> R RemoveRaiseSelfHitTrigger() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DBB14))(this);
	}
	template <typename R = RaiseTargetHitTriggerComponent*> R get_raiseTargetHitTrigger() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DBB20))(this);
	}
	template <typename R = bool> R get_hasRaiseTargetHitTrigger() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DBBA8))(this);
	}
	template <typename R = void> R AddRaiseTargetHitTrigger(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DBBB4))(this, newValue);
	}
	template <typename R = void> R ReplaceRaiseTargetHitTrigger(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DBCBC))(this, newValue);
	}
	template <typename R = void> R RemoveRaiseTargetHitTrigger() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DBDC4))(this);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DBDD0))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DBE58))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(ConfigEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x15DBE64))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(ConfigEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x15DBF78))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC08C))(this);
	}
	template <typename R = SaviorPointsComponent*> R get_saviorPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC098))(this);
	}
	template <typename R = bool> R get_hasSaviorPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC120))(this);
	}
	template <typename R = void> R AddSaviorPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC12C))(this, newCount);
	}
	template <typename R = void> R ReplaceSaviorPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC230))(this, newCount);
	}
	template <typename R = void> R RemoveSaviorPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC334))(this);
	}
	template <typename R = SeasonPointsComponent*> R get_seasonPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC340))(this);
	}
	template <typename R = bool> R get_hasSeasonPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC3C8))(this);
	}
	template <typename R = void> R AddSeasonPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC3D4))(this, newCount);
	}
	template <typename R = void> R ReplaceSeasonPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC4D8))(this, newCount);
	}
	template <typename R = void> R RemoveSeasonPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC5DC))(this);
	}
	template <typename R = SilverComponent*> R get_silver() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC5E8))(this);
	}
	template <typename R = bool> R get_hasSilver() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC670))(this);
	}
	template <typename R = void> R AddSilver(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC67C))(this, newCount);
	}
	template <typename R = void> R ReplaceSilver(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DC780))(this, newCount);
	}
	template <typename R = void> R RemoveSilver() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC884))(this);
	}
	template <typename R = TargetArmorCoefComponent*> R get_targetArmorCoef() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC890))(this);
	}
	template <typename R = bool> R get_hasTargetArmorCoef() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DC918))(this);
	}
	template <typename R = void> R AddTargetArmorCoef(float newValue) {
		return ((R (*)(ConfigEntity*, float))(Il2CppBase() + 0x15DC924))(this, newValue);
	}
	template <typename R = void> R ReplaceTargetArmorCoef(float newValue) {
		return ((R (*)(ConfigEntity*, float))(Il2CppBase() + 0x15DCA28))(this, newValue);
	}
	template <typename R = void> R RemoveTargetArmorCoef() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DCB2C))(this);
	}
	template <typename R = TargetMitigationCoefComponent*> R get_targetMitigationCoef() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DCB38))(this);
	}
	template <typename R = bool> R get_hasTargetMitigationCoef() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DCBC0))(this);
	}
	template <typename R = void> R AddTargetMitigationCoef(float newValue) {
		return ((R (*)(ConfigEntity*, float))(Il2CppBase() + 0x15DCBCC))(this, newValue);
	}
	template <typename R = void> R ReplaceTargetMitigationCoef(float newValue) {
		return ((R (*)(ConfigEntity*, float))(Il2CppBase() + 0x15DCCD0))(this, newValue);
	}
	template <typename R = void> R RemoveTargetMitigationCoef() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DCDD4))(this);
	}
	template <typename R = TicketsComponent*> R get_tickets() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DCDE0))(this);
	}
	template <typename R = bool> R get_hasTickets() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DCE68))(this);
	}
	template <typename R = void> R AddTickets(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DCE74))(this, newCount);
	}
	template <typename R = void> R ReplaceTickets(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DCF78))(this, newCount);
	}
	template <typename R = void> R RemoveTickets() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DD07C))(this);
	}
	template <typename R = UseActorBonusVsTargetComponent*> R get_useActorBonusVsTarget() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DD088))(this);
	}
	template <typename R = bool> R get_hasUseActorBonusVsTarget() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DD110))(this);
	}
	template <typename R = void> R AddUseActorBonusVsTarget(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DD11C))(this, newValue);
	}
	template <typename R = void> R ReplaceUseActorBonusVsTarget(bool newValue) {
		return ((R (*)(ConfigEntity*, bool))(Il2CppBase() + 0x15DD224))(this, newValue);
	}
	template <typename R = void> R RemoveUseActorBonusVsTarget() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DD32C))(this);
	}
	template <typename R = VIPPointsComponent*> R get_vIPPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DD338))(this);
	}
	template <typename R = bool> R get_hasVIPPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DD3C0))(this);
	}
	template <typename R = void> R AddVIPPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DD3CC))(this, newCount);
	}
	template <typename R = void> R ReplaceVIPPoints(int32_t newCount) {
		return ((R (*)(ConfigEntity*, int32_t))(Il2CppBase() + 0x15DD4D0))(this, newCount);
	}
	template <typename R = void> R RemoveVIPPoints() {
		return ((R (*)(ConfigEntity*))(Il2CppBase() + 0x15DD5D4))(this);
	}

};

