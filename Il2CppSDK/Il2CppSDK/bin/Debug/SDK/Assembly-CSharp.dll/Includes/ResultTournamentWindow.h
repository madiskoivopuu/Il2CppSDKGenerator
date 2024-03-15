#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ResultTournamentWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResultTournamentWindow"));
	}

	template <typename R = uintptr_t> R& PrizePanel() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& NoPrizePanel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& PrizesContainer() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = RewardResourceView*> R& PrizePrefab() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& PrizePlaceText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& NoPrizePlaceText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& TargetSendText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = StandartButton*> R& TakeAllButton() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	 Il2CppList<Prize>*& _prizes() {
		return *(Il2CppList<Prize>**)((uintptr_t)this + 0xC0);
	}
	template <typename R = bool> R& _takeTournamentRewardSent() {
		return *(R*)((uintptr_t)this + 0xC8);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ResultTournamentWindow*))(Il2CppBase() + 0x119D6CC))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ResultTournamentWindow*))(Il2CppBase() + 0x119EA10))(this);
	}
	template <typename R = void> R OnTakeAll() {
		return ((R (*)(ResultTournamentWindow*))(Il2CppBase() + 0x119EDB8))(this);
	}
	template <typename R = bool> R OnShowb__13_2(Reward r) {
		return ((R (*)(ResultTournamentWindow*, Reward))(Il2CppBase() + 0x119F414))(this, r);
	}

};

