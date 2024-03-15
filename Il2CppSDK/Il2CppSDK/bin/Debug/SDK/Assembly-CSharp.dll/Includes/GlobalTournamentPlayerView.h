#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalTournamentPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentPlayerView"));
	}

	template <typename R = uintptr_t> R& Position() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& CurrencyIcon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = RewardResourceView*> R& RewardPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& RewardContainer() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Il2CppList<RewardResourceView*>*& Prizes() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& Points() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = TooltipTrigger*> R& PointsTooltip() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& PlaceIndicators() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = PlayerEntity*> R& _player() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Bind(int32_t position, PlayerEntity* player, CurrencyType currencyType, Il2CppList<Resource>* rewards, int32_t pointsToReward, TooltipView* tooltip, bool showInterServerMark, Il2CppString* additionalTooltip) {
		return ((R (*)(GlobalTournamentPlayerView*, int32_t, PlayerEntity*, CurrencyType, Il2CppList<Resource>*, int32_t, TooltipView*, bool, Il2CppString*))(Il2CppBase() + 0x12DAB60))(this, position, player, currencyType, rewards, pointsToReward, tooltip, showInterServerMark, additionalTooltip);
	}

};

