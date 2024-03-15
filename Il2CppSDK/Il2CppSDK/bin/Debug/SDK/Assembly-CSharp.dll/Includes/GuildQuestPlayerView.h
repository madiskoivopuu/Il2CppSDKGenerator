#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestPlayerView"));
	}

	template <typename R = uintptr_t> R& _playerNameText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _playerRoleText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _pointsText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _rewardPanel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _rewardText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = TooltipTrigger*> R& _rewardTooltip() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _onlineMark() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& _playerName() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Nullable1GuildRole*>*& _role() {
		return *(Nullable1GuildRole*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& _points() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& _rank() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	 Nullable1bool>*& _online() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _rewards() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = void> R Init(Il2CppArray<int32_t>* rewards, TooltipView* tooltipView) {
		return ((R (*)(GuildQuestPlayerView*, Il2CppArray<int32_t>*, TooltipView*))(Il2CppBase() + 0x1937750))(this, rewards, tooltipView);
	}
	template <typename R = void> R UpdateView(PlayerEntity* player, int32_t rank, int32_t points) {
		return ((R (*)(GuildQuestPlayerView*, PlayerEntity*, int32_t, int32_t))(Il2CppBase() + 0x1937888))(this, player, rank, points);
	}
	template <typename R = void> R UpdateView_1(int64_t playerId, Il2CppString* playerName, int32_t rank, int32_t points) {
		return ((R (*)(GuildQuestPlayerView*, int64_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1937D54))(this, playerId, playerName, rank, points);
	}
	template <typename R = void> R UpdateView_2(int64_t playerId, Il2CppString* playerName, GuildRole* role, bool online, int32_t rank, int32_t points) {
		return ((R (*)(GuildQuestPlayerView*, int64_t, Il2CppString*, GuildRole*, bool, int32_t, int32_t))(Il2CppBase() + 0x1937974))(this, playerId, playerName, role, online, rank, points);
	}
	template <typename R = int32_t> R GetReward(int32_t rank) {
		return ((R (*)(GuildQuestPlayerView*, int32_t))(Il2CppBase() + 0x1937D68))(this, rank);
	}

};

