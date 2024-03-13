#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildRatingsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRatingsPanel"));
	}

	template <typename T = uintptr_t> T& TournamentButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PreviousWeekWinnersButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& GlobalPanelButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& LocalPanelButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& RatingScroll() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = RatingGuildItem*> T& GuildItem() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& Separator() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SeparatorPlaces() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = RatingGuildItem*> T& OwnGuidItem() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& LoadingIndicator() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& EmptyIndicator() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = GuildWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = ContextMenuView*> T& _contextMenu() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& separators() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = RatingGuildType*> T& _currentOpenPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<RatingGuildType*, Il2CppArray<uintptr_t>*>*> static T& _ratingIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Bind(GuildWindow* window) {
		return ((T (*)(GuildRatingsPanel*, GuildWindow*))(Il2CppBase() + 0x193D71C))(this, window);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(GuildRatingsPanel*, float))(Il2CppBase() + 0x193D7DC))(this, deltaTime);
	}
	template <typename T = void> T OnRatingGuildsResponse(RatingGuildType* type, Il2CppArray<uintptr_t>* ids, ErrorCodes* errorCode) {
		return ((T (*)(GuildRatingsPanel*, RatingGuildType*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x193DCA8))(this, type, ids, errorCode);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193E960))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193EF7C))(this);
	}
	template <typename T = void> T GlobalRatingTabPressed() {
		return ((T (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193EFF8))(this);
	}
	template <typename T = void> T LocalRatingTabPressed() {
		return ((T (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193F0AC))(this);
	}
	template <typename T = void> T RequestGuilds(RatingGuildType* type) {
		return ((T (*)(GuildRatingsPanel*, RatingGuildType*))(Il2CppBase() + 0x193EEC4))(this, type);
	}
	template <typename T = bool> T NeedToUpdateRatingGuilds(RatingGuildType* type, uintptr_t* guilds) {
		return ((T (*)(GuildRatingsPanel*, RatingGuildType*, uintptr_t*))(Il2CppBase() + 0x193F160))(this, type, guilds);
	}
	template <typename T = void> T SetUpPanel(uintptr_t activeButton, uintptr_t deactiveButtons) {
		return ((T (*)(GuildRatingsPanel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x193EBCC))(this, activeButton, deactiveButtons);
	}
	template <typename T = void> T CleanUpGrid() {
		return ((T (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193ECC4))(this);
	}
	template <typename T = void> T RebuildGrid(Il2CppArray<uintptr_t>* guilds, bool showSeparators) {
		return ((T (*)(GuildRatingsPanel*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x193E230))(this, guilds, showSeparators);
	}
	template <typename T = void> T ShowOwnGuild(int32_t position) {
		return ((T (*)(GuildRatingsPanel*, int32_t))(Il2CppBase() + 0x193F47C))(this, position);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193F610))(this);
	}
	template <typename T = void> T OnEnableb__22_0() {
		return ((T (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193F808))(this);
	}
	template <typename T = void> T OnEnableb__22_1() {
		return ((T (*)(GuildRatingsPanel*))(Il2CppBase() + 0x193F830))(this);
	}

};

