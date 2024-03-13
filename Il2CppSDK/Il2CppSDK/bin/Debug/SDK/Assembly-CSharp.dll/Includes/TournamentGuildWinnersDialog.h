#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class TournamentGuildWinnersDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildWinnersDialog"));
	}

	template <typename T = ContextMenuView*> T& ContextMenuViewPrefab() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& GlobalButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ServerButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& WinnersRect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = RatingGuildItem*> T& GuildItem() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Separator() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SeparatorPlaces() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = RatingGuildItem*> T& OwnGuidItem() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LoadingIndicator() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& EmptyIndicator() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<TournamentRewardsView*>*> T& RewardItems() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = ContextMenuView*> T& ContextMenuViewInstance() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppDictionary<RatingGuildType*, Il2CppArray<uintptr_t>*>*> static T& _ratingIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& separators() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = RatingGuildType*> T& _currentOpenPanel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = ContextMenuView*> T get_ContextMenuViewInstance() {
		return ((T (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x15059D8))(this);
	}
	template <typename T = void> T set_ContextMenuViewInstance(ContextMenuView* value) {
		return ((T (*)(TournamentGuildWinnersDialog*, ContextMenuView*))(Il2CppBase() + 0x15059E0))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x15059E8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505B14))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505B3C))(this);
	}
	template <typename T = void> T OnServerTabClicked() {
		return ((T (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505E0C))(this);
	}
	template <typename T = void> T OnGlobalTabClicked() {
		return ((T (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505CA0))(this);
	}
	template <typename T = void> T RequestGuilds(RatingGuildType* type) {
		return ((T (*)(TournamentGuildWinnersDialog*, RatingGuildType*))(Il2CppBase() + 0x1506140))(this, type);
	}
	template <typename T = void> T RebuildGrid(Il2CppArray<uintptr_t>* guilds, bool showSeparators) {
		return ((T (*)(TournamentGuildWinnersDialog*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1506514))(this, guilds, showSeparators);
	}
	template <typename T = void> T OnRatingGuildsResponse(RatingGuildType* type, Il2CppArray<uintptr_t>* ids, ErrorCodes* errorCode) {
		return ((T (*)(TournamentGuildWinnersDialog*, RatingGuildType*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x1506B90))(this, type, ids, errorCode);
	}
	template <typename T = void> T CleanUpGrid() {
		return ((T (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505F78))(this);
	}
	template <typename T = bool> T NeedToUpdateRatingGuilds(RatingGuildType* type, uintptr_t* guilds) {
		return ((T (*)(TournamentGuildWinnersDialog*, RatingGuildType*, uintptr_t*))(Il2CppBase() + 0x15061F8))(this, type, guilds);
	}

};

