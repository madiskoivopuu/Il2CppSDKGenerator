#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalTournamentPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentPlayerView"));
	}

	template <typename T = uintptr_t> T& Position() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CurrencyIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = RewardResourceView*> T& RewardPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& RewardContainer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<RewardResourceView*>*> T& Prizes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Points() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = TooltipTrigger*> T& PointsTooltip() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PlaceIndicators() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = UIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = PlayerEntity*> T& _player() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Bind(int32_t position, PlayerEntity* player, CurrencyType* currencyType, Il2CppList<Resource*>* rewards, int32_t pointsToReward, TooltipView* tooltip, bool showInterServerMark, Il2CppString* additionalTooltip) {
		return ((T (*)(GlobalTournamentPlayerView*, int32_t, PlayerEntity*, CurrencyType*, Il2CppList<Resource*>*, int32_t, TooltipView*, bool, Il2CppString*))(Il2CppBase() + 0x12DAB60))(this, position, player, currencyType, rewards, pointsToReward, tooltip, showInterServerMark, additionalTooltip);
	}

};

