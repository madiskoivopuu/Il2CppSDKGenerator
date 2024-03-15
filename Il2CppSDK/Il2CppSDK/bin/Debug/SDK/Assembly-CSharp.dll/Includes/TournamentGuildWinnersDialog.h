#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class TournamentGuildWinnersDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildWinnersDialog"));
	}

	template <typename R = ContextMenuView*> R& ContextMenuViewPrefab() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& GlobalButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& ServerButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& WinnersRect() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = RatingGuildItem*> R& GuildItem() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& Separator() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& SeparatorPlaces() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = RatingGuildItem*> R& OwnGuidItem() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& LoadingIndicator() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& EmptyIndicator() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	 Il2CppList<TournamentRewardsView*>*& RewardItems() {
		return *(Il2CppList<TournamentRewardsView*>**)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = ContextMenuView*> R& ContextMenuViewInstance() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	 static Il2CppDictionary<RatingGuildType, Il2CppArray<int64_t>*>*& _ratingIds() {
		return *(Il2CppDictionary<RatingGuildType, Il2CppArray<int64_t>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 Il2CppList<uintptr_t>*& separators() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0xF0);
	}
	template <typename R = RatingGuildType> R& _currentOpenPanel() {
		return *(R*)((uintptr_t)this + 0xF8);
	}

	template <typename R = ContextMenuView*> R get_ContextMenuViewInstance() {
		return ((R (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x15059D8))(this);
	}
	template <typename R = void> R set_ContextMenuViewInstance(ContextMenuView* value) {
		return ((R (*)(TournamentGuildWinnersDialog*, ContextMenuView*))(Il2CppBase() + 0x15059E0))(this, value);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x15059E8))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505B14))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505B3C))(this);
	}
	template <typename R = void> R OnServerTabClicked() {
		return ((R (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505E0C))(this);
	}
	template <typename R = void> R OnGlobalTabClicked() {
		return ((R (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505CA0))(this);
	}
	template <typename R = void> R RequestGuilds(RatingGuildType type) {
		return ((R (*)(TournamentGuildWinnersDialog*, RatingGuildType))(Il2CppBase() + 0x1506140))(this, type);
	}
	template <typename R = void> R RebuildGrid(Il2CppArray<GuildEntity*>* guilds, bool showSeparators) {
		return ((R (*)(TournamentGuildWinnersDialog*, Il2CppArray<GuildEntity*>*, bool))(Il2CppBase() + 0x1506514))(this, guilds, showSeparators);
	}
	template <typename R = void> R OnRatingGuildsResponse(RatingGuildType type, Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes errorCode) {
		return ((R (*)(TournamentGuildWinnersDialog*, RatingGuildType, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x1506B90))(this, type, ids, errorCode);
	}
	template <typename R = void> R CleanUpGrid() {
		return ((R (*)(TournamentGuildWinnersDialog*))(Il2CppBase() + 0x1505F78))(this);
	}
	template <typename R = bool> R NeedToUpdateRatingGuilds(RatingGuildType type, uintptr_t* guilds) {
		return ((R (*)(TournamentGuildWinnersDialog*, RatingGuildType, uintptr_t*))(Il2CppBase() + 0x15061F8))(this, type, guilds);
	}

};

