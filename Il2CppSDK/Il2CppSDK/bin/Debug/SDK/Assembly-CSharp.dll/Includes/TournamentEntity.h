#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentEntity"));
	}

	template <typename T = AvatarComponent*> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = AnalyticEventComponent*> T get_analyticEvent() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x14FF96C))(this);
	}
	template <typename T = bool> T get_hasAnalyticEvent() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x14FF9F4))(this);
	}
	template <typename T = void> T AddAnalyticEvent(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFA00))(this, newName);
	}
	template <typename T = void> T ReplaceAnalyticEvent(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFB14))(this, newName);
	}
	template <typename T = void> T RemoveAnalyticEvent() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x14FFC28))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x14FFC34))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(TournamentEntity*, bool))(Il2CppBase() + 0x14FF014))(this, value);
	}
	template <typename T = BannerComponent*> T get_banner() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x14FFC40))(this);
	}
	template <typename T = bool> T get_hasBanner() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x14FFCC8))(this);
	}
	template <typename T = void> T AddBanner(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFCD4))(this, newName);
	}
	template <typename T = void> T ReplaceBanner(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFDE8))(this, newName);
	}
	template <typename T = void> T RemoveBanner() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x14FFEFC))(this);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x14FFF08))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x14FFF90))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x14FFF9C))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x15000B0))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x15001C4))(this);
	}
	template <typename T = CurrencyTypeComponent*> T get_currencyType() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x15001D0))(this);
	}
	template <typename T = bool> T get_hasCurrencyType() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500258))(this);
	}
	template <typename T = void> T AddCurrencyType(CurrencyType* newType) {
		return ((T (*)(TournamentEntity*, CurrencyType*))(Il2CppBase() + 0x1500264))(this, newType);
	}
	template <typename T = void> T ReplaceCurrencyType(CurrencyType* newType) {
		return ((T (*)(TournamentEntity*, CurrencyType*))(Il2CppBase() + 0x1500368))(this, newType);
	}
	template <typename T = void> T RemoveCurrencyType() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x150046C))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500478))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500500))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(TournamentEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x150050C))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(TournamentEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1500634))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x150075C))(this);
	}
	template <typename T = DurationComponent*> T get_duration() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500768))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x15007F0))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(TournamentEntity*, float))(Il2CppBase() + 0x15007FC))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(TournamentEntity*, float))(Il2CppBase() + 0x1500900))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500A04))(this);
	}
	template <typename T = FoundPlayersComponent*> T get_foundPlayers() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500A10))(this);
	}
	template <typename T = bool> T get_hasFoundPlayers() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500A98))(this);
	}
	template <typename T = void> T AddFoundPlayers(int32_t newCount) {
		return ((T (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1500AA4))(this, newCount);
	}
	template <typename T = void> T ReplaceFoundPlayers(int32_t newCount) {
		return ((T (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1500BA8))(this, newCount);
	}
	template <typename T = void> T RemoveFoundPlayers() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500CAC))(this);
	}
	template <typename T = GeneratedPositionRewardsComponent*> T get_generatedPositionRewards() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500CB8))(this);
	}
	template <typename T = bool> T get_hasGeneratedPositionRewards() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500D40))(this);
	}
	template <typename T = void> T AddGeneratedPositionRewards(Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>* newDatas) {
		return ((T (*)(TournamentEntity*, Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1500D4C))(this, newDatas);
	}
	template <typename T = void> T ReplaceGeneratedPositionRewards(Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>* newDatas) {
		return ((T (*)(TournamentEntity*, Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1500E60))(this, newDatas);
	}
	template <typename T = void> T RemoveGeneratedPositionRewards() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500F74))(this);
	}
	template <typename T = GuaranteedRewardsComponent*> T get_guaranteedRewards() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1500F80))(this);
	}
	template <typename T = bool> T get_hasGuaranteedRewards() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501008))(this);
	}
	template <typename T = void> T AddGuaranteedRewards(bool newToCyclic, bool newToMain, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TournamentEntity*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1501014))(this, newToCyclic, newToMain, newList);
	}
	template <typename T = void> T ReplaceGuaranteedRewards(bool newToCyclic, bool newToMain, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TournamentEntity*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1501148))(this, newToCyclic, newToMain, newList);
	}
	template <typename T = void> T RemoveGuaranteedRewards() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x150127C))(this);
	}
	template <typename T = HistoryTempBuffComponent*> T get_historyTempBuff() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501288))(this);
	}
	template <typename T = bool> T get_hasHistoryTempBuff() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501310))(this);
	}
	template <typename T = void> T AddHistoryTempBuff(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x150131C))(this, newName);
	}
	template <typename T = void> T ReplaceHistoryTempBuff(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1501430))(this, newName);
	}
	template <typename T = void> T RemoveHistoryTempBuff() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501544))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501550))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x15015D8))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(TournamentEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15015E4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(TournamentEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x150173C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501894))(this);
	}
	template <typename T = MaxPlayersComponent*> T get_maxPlayers() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x15018A0))(this);
	}
	template <typename T = bool> T get_hasMaxPlayers() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501928))(this);
	}
	template <typename T = void> T AddMaxPlayers(int32_t newCount) {
		return ((T (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1501934))(this, newCount);
	}
	template <typename T = void> T ReplaceMaxPlayers(int32_t newCount) {
		return ((T (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1501A38))(this, newCount);
	}
	template <typename T = void> T RemoveMaxPlayers() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501B3C))(this);
	}
	template <typename T = MinPointsToRewardComponent*> T get_minPointsToReward() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501B48))(this);
	}
	template <typename T = bool> T get_hasMinPointsToReward() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501BD0))(this);
	}
	template <typename T = void> T AddMinPointsToReward(int32_t newCount) {
		return ((T (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1501BDC))(this, newCount);
	}
	template <typename T = void> T ReplaceMinPointsToReward(int32_t newCount) {
		return ((T (*)(TournamentEntity*, int32_t))(Il2CppBase() + 0x1501CE0))(this, newCount);
	}
	template <typename T = void> T RemoveMinPointsToReward() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501DE4))(this);
	}
	template <typename T = NameComponent*> T get_name() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501DF0))(this);
	}
	template <typename T = bool> T get_hasName() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1501E78))(this);
	}
	template <typename T = void> T AddName(Il2CppString* newValue) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1501E84))(this, newValue);
	}
	template <typename T = void> T ReplaceName(Il2CppString* newValue) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1501F98))(this, newValue);
	}
	template <typename T = void> T RemoveName() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x15020AC))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x15020B8))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502140))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TournamentEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x150214C))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TournamentEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1502260))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502374))(this);
	}
	template <typename T = PositionRewardsComponent*> T get_positionRewards() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502380))(this);
	}
	template <typename T = bool> T get_hasPositionRewards() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502408))(this);
	}
	template <typename T = void> T AddPositionRewards(bool newToCyclic, bool newToMain, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TournamentEntity*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1502414))(this, newToCyclic, newToMain, newList);
	}
	template <typename T = void> T ReplacePositionRewards(bool newToCyclic, bool newToMain, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TournamentEntity*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1502548))(this, newToCyclic, newToMain, newList);
	}
	template <typename T = void> T RemovePositionRewards() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x150267C))(this);
	}
	template <typename T = QuestComponent*> T get_quest() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502688))(this);
	}
	template <typename T = bool> T get_hasQuest() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502710))(this);
	}
	template <typename T = void> T AddQuest(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x150271C))(this, newName);
	}
	template <typename T = void> T ReplaceQuest(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1502830))(this, newName);
	}
	template <typename T = void> T RemoveQuest() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502944))(this);
	}
	template <typename T = StartTimeComponent*> T get_startTime() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502950))(this);
	}
	template <typename T = bool> T get_hasStartTime() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x15029D8))(this);
	}
	template <typename T = void> T AddStartTime(int64_t newValue) {
		return ((T (*)(TournamentEntity*, int64_t))(Il2CppBase() + 0x15029E4))(this, newValue);
	}
	template <typename T = void> T ReplaceStartTime(int64_t newValue) {
		return ((T (*)(TournamentEntity*, int64_t))(Il2CppBase() + 0x1502AE8))(this, newValue);
	}
	template <typename T = void> T RemoveStartTime() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502BEC))(this);
	}
	template <typename T = TempBuffComponent*> T get_tempBuff() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502BF8))(this);
	}
	template <typename T = bool> T get_hasTempBuff() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502C80))(this);
	}
	template <typename T = void> T AddTempBuff(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1502C8C))(this, newName);
	}
	template <typename T = void> T ReplaceTempBuff(Il2CppString* newName) {
		return ((T (*)(TournamentEntity*, Il2CppString*))(Il2CppBase() + 0x1502DA0))(this, newName);
	}
	template <typename T = void> T RemoveTempBuff() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502EB4))(this);
	}
	template <typename T = TournamentComponent*> T get_tournament() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502EC0))(this);
	}
	template <typename T = bool> T get_hasTournament() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1502F48))(this);
	}
	template <typename T = void> T AddTournament(int64_t newId) {
		return ((T (*)(TournamentEntity*, int64_t))(Il2CppBase() + 0x14FE9E0))(this, newId);
	}
	template <typename T = void> T ReplaceTournament(int64_t newId) {
		return ((T (*)(TournamentEntity*, int64_t))(Il2CppBase() + 0x1502F54))(this, newId);
	}
	template <typename T = void> T RemoveTournament() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1503058))(this);
	}
	template <typename T = TournamentStateComponent*> T get_tournamentState() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1503064))(this);
	}
	template <typename T = bool> T get_hasTournamentState() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x15030EC))(this);
	}
	template <typename T = void> T AddTournamentState(TournamentState* newType) {
		return ((T (*)(TournamentEntity*, TournamentState*))(Il2CppBase() + 0x15030F8))(this, newType);
	}
	template <typename T = void> T ReplaceTournamentState(TournamentState* newType) {
		return ((T (*)(TournamentEntity*, TournamentState*))(Il2CppBase() + 0x15031FC))(this, newType);
	}
	template <typename T = void> T RemoveTournamentState() {
		return ((T (*)(TournamentEntity*))(Il2CppBase() + 0x1503300))(this);
	}

};

