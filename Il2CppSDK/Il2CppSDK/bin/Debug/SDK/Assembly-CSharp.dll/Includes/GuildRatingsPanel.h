#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildRatingsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRatingsPanel"));
	}

	template <typename R = uintptr_t> R& TournamentButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& PreviousWeekWinnersButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& GlobalPanelButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& LocalPanelButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& RatingScroll() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = RatingGuildItem*> R& GuildItem() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& Separator() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppArray<int32_t>*> R& SeparatorPlaces() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = RatingGuildItem*> R& OwnGuidItem() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& LoadingIndicator() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& EmptyIndicator() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = ContextMenuView*> R& _contextMenu() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	 Il2CppList<uintptr_t>*& separators() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x98);
	}
	template <typename R = RatingGuildType> R& _currentOpenPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	 static Il2CppDictionary<RatingGuildType, Il2CppArray<int64_t>*>*& _ratingIds() {
		return *(Il2CppDictionary<RatingGuildType, Il2CppArray<int64_t>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Bind(GuildWindow* window) {
		return ((R (*)(GuildRatingsPanel*, GuildWindow*))(Il2CppBase() + 0x193D71C))(this, window);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(GuildRatingsPanel*, float))(Il2CppBase() + 0x193D7DC))(this, deltaTime);
	}
	template <typename R = void> R OnRatingGuildsResponse(RatingGuildType type, Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes errorCode) {
		return ((R (*)(GuildRatingsPanel*, RatingGuildType, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x193DCA8))(this, type, ids, errorCode);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193E960))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193EF7C))(this);
	}
	template <typename R = void> R GlobalRatingTabPressed() {
		return ((R (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193EFF8))(this);
	}
	template <typename R = void> R LocalRatingTabPressed() {
		return ((R (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193F0AC))(this);
	}
	template <typename R = void> R RequestGuilds(RatingGuildType type) {
		return ((R (*)(GuildRatingsPanel*, RatingGuildType))(Il2CppBase() + 0x193EEC4))(this, type);
	}
	template <typename R = bool> R NeedToUpdateRatingGuilds(RatingGuildType type, uintptr_t* guilds) {
		return ((R (*)(GuildRatingsPanel*, RatingGuildType, uintptr_t*))(Il2CppBase() + 0x193F160))(this, type, guilds);
	}
	template <typename R = void> R SetUpPanel(uintptr_t activeButton, uintptr_t deactiveButtons) {
		return ((R (*)(GuildRatingsPanel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x193EBCC))(this, activeButton, deactiveButtons);
	}
	template <typename R = void> R CleanUpGrid() {
		return ((R (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193ECC4))(this);
	}
	template <typename R = void> R RebuildGrid(Il2CppArray<GuildEntity*>* guilds, bool showSeparators) {
		return ((R (*)(GuildRatingsPanel*, Il2CppArray<GuildEntity*>*, bool))(Il2CppBase() + 0x193E230))(this, guilds, showSeparators);
	}
	template <typename R = void> R ShowOwnGuild(int32_t position) {
		return ((R (*)(GuildRatingsPanel*, int32_t))(Il2CppBase() + 0x193F47C))(this, position);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193F610))(this);
	}
	template <typename R = void> R OnEnableb__22_0() {
		return ((R (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193F808))(this);
	}
	template <typename R = void> R OnEnableb__22_1() {
		return ((R (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193F830))(this);
	}

};

