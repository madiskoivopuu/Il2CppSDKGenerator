#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestPlayerView"));
	}

	template <typename T = uintptr_t> T& _playerNameText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _playerRoleText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _pointsText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _rewardPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _rewardText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = TooltipTrigger*> T& _rewardTooltip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _onlineMark() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _playerName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Nullable1GuildRole*>*> T& _role() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _points() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _rank() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Nullable1bool>*> T& _online() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rewards() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Init(Il2CppArray<uintptr_t>* rewards, TooltipView* tooltipView) {
		return ((T (*)(GuildQuestPlayerView*, Il2CppArray<uintptr_t>*, TooltipView*))(Il2CppBase() + 0x1937750))(this, rewards, tooltipView);
	}
	template <typename T = void> T UpdateView(PlayerEntity* player, int32_t rank, int32_t points) {
		return ((T (*)(GuildQuestPlayerView*, PlayerEntity*, int32_t, int32_t))(Il2CppBase() + 0x1937888))(this, player, rank, points);
	}
	template <typename T = void> T UpdateView_1(int64_t playerId, Il2CppString* playerName, int32_t rank, int32_t points) {
		return ((T (*)(GuildQuestPlayerView*, int64_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1937D54))(this, playerId, playerName, rank, points);
	}
	template <typename T = void> T UpdateView_2(int64_t playerId, Il2CppString* playerName, GuildRole* role, bool online, int32_t rank, int32_t points) {
		return ((T (*)(GuildQuestPlayerView*, int64_t, Il2CppString*, GuildRole*, bool, int32_t, int32_t))(Il2CppBase() + 0x1937974))(this, playerId, playerName, role, online, rank, points);
	}
	template <typename T = int32_t> T GetReward(int32_t rank) {
		return ((T (*)(GuildQuestPlayerView*, int32_t))(Il2CppBase() + 0x1937D68))(this, rank);
	}

};

