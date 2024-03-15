#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ActiveTournamentWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveTournamentWindow"));
	}

	template <typename R = uintptr_t> R& TournamentTimer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& PlayersContainer() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = TournamentPlayerView*> R& PlayerPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = TournamentPlayerView*> R& OwnPlayer() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = TooltipTrigger*> R& GuaranteedPrize0() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = RewardResourceView*> R& GuaranteedPrize1() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = RewardResourceView*> R& GuaranteedPrize2() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = RewardResourceView*> R& GuaranteedPrize3() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& GuaranteedPrize1Points() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& GuaranteedPrize2Points() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& GuaranteedPrize3Points() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& GuaranteedRewardProgress1() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& GuaranteedRewardProgress2() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& GuaranteedRewardProgress3() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = TooltipView*> R& TooltipPrefab() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0xF8);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ActiveTournamentWindow*))(Il2CppBase() + 0x18AD460))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ActiveTournamentWindow*, float))(Il2CppBase() + 0x18AE29C))(this, deltaTime);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ActiveTournamentWindow*))(Il2CppBase() + 0x18AE778))(this);
	}

};

