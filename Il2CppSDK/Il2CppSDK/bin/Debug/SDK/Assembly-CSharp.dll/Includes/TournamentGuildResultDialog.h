#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class TournamentGuildResultDialog: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildResultDialog"));
	}

	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RewardPrefabs() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(TournamentGuildResultDialog*))(Il2CppBase() + 0x150341C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(TournamentGuildResultDialog*))(Il2CppBase() + 0x1503E1C))(this);
	}

};

}
