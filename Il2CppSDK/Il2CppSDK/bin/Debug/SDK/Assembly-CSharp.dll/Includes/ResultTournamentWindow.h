#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class ResultTournamentWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResultTournamentWindow"));
	}

	template <typename T = uintptr_t> T& PrizePanel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& NoPrizePanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PrizesContainer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PrizePrefab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& PrizePlaceText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& NoPrizePlaceText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TargetSendText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TakeAllButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prizes() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _takeTournamentRewardSent() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ResultTournamentWindow*))(Il2CppBase() + 0x119D6CC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ResultTournamentWindow*))(Il2CppBase() + 0x119EA10))(this);
	}
	template <typename T = void> T OnTakeAll() {
		return ((T (*)(ResultTournamentWindow*))(Il2CppBase() + 0x119EDB8))(this);
	}
	template <typename T = bool> T OnShowb__13_2(uintptr_t r) {
		return ((T (*)(ResultTournamentWindow*, uintptr_t))(Il2CppBase() + 0x119F414))(this, r);
	}

};

}
