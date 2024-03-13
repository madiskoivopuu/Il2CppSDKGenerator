#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ActiveTournamentWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveTournamentWindow"));
	}

	template <typename T = uintptr_t> T& TournamentTimer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PlayersContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = TournamentPlayerView*> T& PlayerPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = TournamentPlayerView*> T& OwnPlayer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = TooltipTrigger*> T& GuaranteedPrize0() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = RewardResourceView*> T& GuaranteedPrize1() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = RewardResourceView*> T& GuaranteedPrize2() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = RewardResourceView*> T& GuaranteedPrize3() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& GuaranteedPrize1Points() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& GuaranteedPrize2Points() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& GuaranteedPrize3Points() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& GuaranteedRewardProgress1() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& GuaranteedRewardProgress2() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& GuaranteedRewardProgress3() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = TooltipView*> T& TooltipPrefab() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = TooltipView*> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ActiveTournamentWindow*))(Il2CppBase() + 0x18AD460))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ActiveTournamentWindow*, float))(Il2CppBase() + 0x18AE29C))(this, deltaTime);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ActiveTournamentWindow*))(Il2CppBase() + 0x18AE778))(this);
	}

};

