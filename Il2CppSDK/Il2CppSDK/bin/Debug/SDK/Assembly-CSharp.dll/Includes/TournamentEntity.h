#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentEntity"));
	}

	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = AnalyticEventComponent*> R get_analyticEvent() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x14FF96C))(this);
	}
	template <typename R = bool> R get_hasAnalyticEvent() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x14FF9F4))(this);
	}
	template <typename R = void> R AddAnalyticEvent(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFA00))(this, newName);
	}
	template <typename R = void> R ReplaceAnalyticEvent(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFB14))(this, newName);
	}
	template <typename R = void> R RemoveAnalyticEvent() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x14FFC28))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x14FFC34))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(TournamentEntity*, bool))(Il2CppBase() + 0x14FF014))(this, value);
	}
	template <typename R = BannerComponent*> R get_banner() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x14FFC40))(this);
	}
	template <typename R = bool> R get_hasBanner() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x14FFCC8))(this);
	}
	template <typename R = void> R AddBanner(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFCD4))(this, newName);
	}
	template <typename R = void> R ReplaceBanner(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFDE8))(this, newName);
	}
	template <typename R = void> R RemoveBanner() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x14FFEFC))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x14FFF08))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x14FFF90))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFF9C))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x15000B0))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x15001C4))(this);
	}
	template <typename R = CurrencyTypeComponent*> R get_currencyType() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x15001D0))(this);
	}
	template <typename R = bool> R get_hasCurrencyType() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500258))(this);
	}
	template <typename R = void> R AddCurrencyType(CurrencyType* newType) {
		return ((R (*)(TournamentEntity*, CurrencyType*))(Il2CppBase() + 0x1500264))(this, newType);
	}
	template <typename R = void> R ReplaceCurrencyType(CurrencyType* newType) {
		return ((R (*)(TournamentEntity*, CurrencyType*))(Il2CppBase() + 0x1500368))(this, newType);
	}
	template <typename R = void> R RemoveCurrencyType() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x150046C))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500478))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500500))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(TournamentEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x150050C))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(TournamentEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1500634))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x150075C))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500768))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x15007F0))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(TournamentEntity*, float))(Il2CppBase() + 0x15007FC))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(TournamentEntity*, float))(Il2CppBase() + 0x1500900))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500A04))(this);
	}
	template <typename R = FoundPlayersComponent*> R get_foundPlayers() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500A10))(this);
	}
	template <typename R = bool> R get_hasFoundPlayers() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500A98))(this);
	}
	template <typename R = void> R AddFoundPlayers(int32_t newCount) {
		return ((R (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1500AA4))(this, newCount);
	}
	template <typename R = void> R ReplaceFoundPlayers(int32_t newCount) {
		return ((R (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1500BA8))(this, newCount);
	}
	template <typename R = void> R RemoveFoundPlayers() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500CAC))(this);
	}
	template <typename R = GeneratedPositionRewardsComponent*> R get_generatedPositionRewards() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500CB8))(this);
	}
	template <typename R = bool> R get_hasGeneratedPositionRewards() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500D40))(this);
	}
	template <typename R = void> R AddGeneratedPositionRewards(Il2CppDictionary<int32_t, Il2CppArray<Tuple2Il2CppString*, int32_t>*>*>* newDatas) {
		return ((R (*)(TournamentEntity*, Il2CppDictionary<int32_t, Il2CppArray<Tuple2Il2CppString*, int32_t>*>*>*))(Il2CppBase() + 0x1500D4C))(this, newDatas);
	}
	template <typename R = void> R ReplaceGeneratedPositionRewards(Il2CppDictionary<int32_t, Il2CppArray<Tuple2Il2CppString*, int32_t>*>*>* newDatas) {
		return ((R (*)(TournamentEntity*, Il2CppDictionary<int32_t, Il2CppArray<Tuple2Il2CppString*, int32_t>*>*>*))(Il2CppBase() + 0x1500E60))(this, newDatas);
	}
	template <typename R = void> R RemoveGeneratedPositionRewards() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500F74))(this);
	}
	template <typename R = GuaranteedRewardsComponent*> R get_guaranteedRewards() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1500F80))(this);
	}
	template <typename R = bool> R get_hasGuaranteedRewards() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501008))(this);
	}
	template <typename R = void> R AddGuaranteedRewards(bool newToCyclic, bool newToMain, Il2CppArray<Reward*>* newList) {
		return ((R (*)(TournamentEntity*, bool, bool, Il2CppArray<Reward*>*))(Il2CppBase() + 0x1501014))(this, newToCyclic, newToMain, newList);
	}
	template <typename R = void> R ReplaceGuaranteedRewards(bool newToCyclic, bool newToMain, Il2CppArray<Reward*>* newList) {
		return ((R (*)(TournamentEntity*, bool, bool, Il2CppArray<Reward*>*))(Il2CppBase() + 0x1501148))(this, newToCyclic, newToMain, newList);
	}
	template <typename R = void> R RemoveGuaranteedRewards() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x150127C))(this);
	}
	template <typename R = HistoryTempBuffComponent*> R get_historyTempBuff() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501288))(this);
	}
	template <typename R = bool> R get_hasHistoryTempBuff() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501310))(this);
	}
	template <typename R = void> R AddHistoryTempBuff(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x150131C))(this, newName);
	}
	template <typename R = void> R ReplaceHistoryTempBuff(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1501430))(this, newName);
	}
	template <typename R = void> R RemoveHistoryTempBuff() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501544))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501550))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x15015D8))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(TournamentEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15015E4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(TournamentEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x150173C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501894))(this);
	}
	template <typename R = MaxPlayersComponent*> R get_maxPlayers() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x15018A0))(this);
	}
	template <typename R = bool> R get_hasMaxPlayers() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501928))(this);
	}
	template <typename R = void> R AddMaxPlayers(int32_t newCount) {
		return ((R (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1501934))(this, newCount);
	}
	template <typename R = void> R ReplaceMaxPlayers(int32_t newCount) {
		return ((R (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1501A38))(this, newCount);
	}
	template <typename R = void> R RemoveMaxPlayers() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501B3C))(this);
	}
	template <typename R = MinPointsToRewardComponent*> R get_minPointsToReward() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501B48))(this);
	}
	template <typename R = bool> R get_hasMinPointsToReward() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501BD0))(this);
	}
	template <typename R = void> R AddMinPointsToReward(int32_t newCount) {
		return ((R (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1501BDC))(this, newCount);
	}
	template <typename R = void> R ReplaceMinPointsToReward(int32_t newCount) {
		return ((R (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1501CE0))(this, newCount);
	}
	template <typename R = void> R RemoveMinPointsToReward() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501DE4))(this);
	}
	template <typename R = NameComponent*> R get_name() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501DF0))(this);
	}
	template <typename R = bool> R get_hasName() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1501E78))(this);
	}
	template <typename R = void> R AddName(Il2CppString* newValue) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1501E84))(this, newValue);
	}
	template <typename R = void> R ReplaceName(Il2CppString* newValue) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1501F98))(this, newValue);
	}
	template <typename R = void> R RemoveName() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x15020AC))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x15020B8))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502140))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TournamentEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x150214C))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TournamentEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1502260))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502374))(this);
	}
	template <typename R = PositionRewardsComponent*> R get_positionRewards() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502380))(this);
	}
	template <typename R = bool> R get_hasPositionRewards() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502408))(this);
	}
	template <typename R = void> R AddPositionRewards(bool newToCyclic, bool newToMain, Il2CppArray<Reward*>* newList) {
		return ((R (*)(TournamentEntity*, bool, bool, Il2CppArray<Reward*>*))(Il2CppBase() + 0x1502414))(this, newToCyclic, newToMain, newList);
	}
	template <typename R = void> R ReplacePositionRewards(bool newToCyclic, bool newToMain, Il2CppArray<Reward*>* newList) {
		return ((R (*)(TournamentEntity*, bool, bool, Il2CppArray<Reward*>*))(Il2CppBase() + 0x1502548))(this, newToCyclic, newToMain, newList);
	}
	template <typename R = void> R RemovePositionRewards() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x150267C))(this);
	}
	template <typename R = QuestComponent*> R get_quest() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502688))(this);
	}
	template <typename R = bool> R get_hasQuest() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502710))(this);
	}
	template <typename R = void> R AddQuest(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x150271C))(this, newName);
	}
	template <typename R = void> R ReplaceQuest(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1502830))(this, newName);
	}
	template <typename R = void> R RemoveQuest() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502944))(this);
	}
	template <typename R = StartTimeComponent*> R get_startTime() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502950))(this);
	}
	template <typename R = bool> R get_hasStartTime() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x15029D8))(this);
	}
	template <typename R = void> R AddStartTime(int64_t newValue) {
		return ((R (*)(TournamentEntity*, int64_t))(Il2CppBase() + 0x15029E4))(this, newValue);
	}
	template <typename R = void> R ReplaceStartTime(int64_t newValue) {
		return ((R (*)(TournamentEntity*, int64_t))(Il2CppBase() + 0x1502AE8))(this, newValue);
	}
	template <typename R = void> R RemoveStartTime() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502BEC))(this);
	}
	template <typename R = TempBuffComponent*> R get_tempBuff() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502BF8))(this);
	}
	template <typename R = bool> R get_hasTempBuff() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502C80))(this);
	}
	template <typename R = void> R AddTempBuff(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1502C8C))(this, newName);
	}
	template <typename R = void> R ReplaceTempBuff(Il2CppString* newName) {
		return ((R (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1502DA0))(this, newName);
	}
	template <typename R = void> R RemoveTempBuff() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502EB4))(this);
	}
	template <typename R = TournamentComponent*> R get_tournament() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502EC0))(this);
	}
	template <typename R = bool> R get_hasTournament() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1502F48))(this);
	}
	template <typename R = void> R AddTournament(int64_t newId) {
		return ((R (*)(TournamentEntity*, int64_t))(Il2CppBase() + 0x14FE9E0))(this, newId);
	}
	template <typename R = void> R ReplaceTournament(int64_t newId) {
		return ((R (*)(TournamentEntity*, int64_t))(Il2CppBase() + 0x1502F54))(this, newId);
	}
	template <typename R = void> R RemoveTournament() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1503058))(this);
	}
	template <typename R = TournamentStateComponent*> R get_tournamentState() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1503064))(this);
	}
	template <typename R = bool> R get_hasTournamentState() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x15030EC))(this);
	}
	template <typename R = void> R AddTournamentState(TournamentState* newType) {
		return ((R (*)(TournamentEntity*, TournamentState*))(Il2CppBase() + 0x15030F8))(this, newType);
	}
	template <typename R = void> R ReplaceTournamentState(TournamentState* newType) {
		return ((R (*)(TournamentEntity*, TournamentState*))(Il2CppBase() + 0x15031FC))(this, newType);
	}
	template <typename R = void> R RemoveTournamentState() {
		return ((R (*)(TournamentEntity*))(Il2CppBase() + 0x1503300))(this);
	}

};

