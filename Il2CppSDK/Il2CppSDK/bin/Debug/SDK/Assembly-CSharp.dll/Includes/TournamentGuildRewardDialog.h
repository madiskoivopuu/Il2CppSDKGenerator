#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class TournamentGuildRewardDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildRewardDialog"));
	}

	template <typename R = uintptr_t> R& GlobalButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ServerButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& RewardsRect() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& RestDescription() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	 Il2CppList<TournamentRewardsView*>*& RewardItems() {
		return *(Il2CppList<TournamentRewardsView*>**)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x15042F8))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x1504424))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x150444C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(TournamentGuildRewardDialog*, float))(Il2CppBase() + 0x1504590))(this, deltaTime);
	}
	template <typename R = void> R OnServerTabClicked() {
		return ((R (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x1504B4C))(this);
	}
	template <typename R = void> R OnGlobalTabClicked() {
		return ((R (*)(TournamentGuildRewardDialog*))(Il2CppBase() + 0x1504450))(this);
	}
	template <typename R = void> R RebuildReward(Il2CppString* tournamentBlueprint) {
		return ((R (*)(TournamentGuildRewardDialog*, Il2CppString*))(Il2CppBase() + 0x1504C8C))(this, tournamentBlueprint);
	}

};

