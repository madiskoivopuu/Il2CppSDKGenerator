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
	template <typename T = uintptr_t> T& RewardPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& RewardContainer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Prizes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Points() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& PointsTooltip() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PlaceIndicators() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _player() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Bind(int32_t position, uintptr_t player, uintptr_t currencyType, Il2CppList<uintptr_t>* rewards, int32_t pointsToReward, uintptr_t tooltip, bool showInterServerMark, Il2CppString* additionalTooltip) {
		return ((T (*)(GlobalTournamentPlayerView*, int32_t, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, int32_t, uintptr_t, bool, Il2CppString*))(Il2CppBase() + 0x12DAB60))(this, position, player, currencyType, rewards, pointsToReward, tooltip, showInterServerMark, additionalTooltip);
	}

};

}
