#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class TournamentGuildRewardDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildRewardDialog"));
	}

	template <typename T = uintptr_t> T& GlobalButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ServerButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RewardsRect() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RestDescription() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<TournamentRewardsView*>*> T& RewardItems() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x15042F8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x1504424))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x150444C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(TournamentGuildRewardDialog*, float))(Il2CppBase() + 0x1504590))(this, deltaTime);
	}
	template <typename T = void> T OnServerTabClicked() {
		return ((T (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x1504B4C))(this);
	}
	template <typename T = void> T OnGlobalTabClicked() {
		return ((T (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x1504450))(this);
	}
	template <typename T = void> T RebuildReward(Il2CppString* tournamentBlueprint) {
		return ((T (*)(TournamentGuildRewardDialog*, Il2CppString*))(Il2CppBase() + 0x1504C8C))(this, tournamentBlueprint);
	}

};

