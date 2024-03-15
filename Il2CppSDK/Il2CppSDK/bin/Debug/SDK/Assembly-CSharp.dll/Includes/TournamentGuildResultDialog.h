#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class TournamentGuildResultDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildResultDialog"));
	}

	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	 Il2CppList<RewardResourceView*>*& RewardPrefabs() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(TournamentGuildResultDialog*))(Il2CppBase() + 0x150341C))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(TournamentGuildResultDialog*))(Il2CppBase() + 0x1503E1C))(this);
	}

};

