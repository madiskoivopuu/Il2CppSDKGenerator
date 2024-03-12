#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StartTournamentWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartTournamentWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& QuestTournamentPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& JoinTournamentPanel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& QuestText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& QuestProgress() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TakePartButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& _progress() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(StartTournamentWindow*))(Il2CppBase() + 0x148D48C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(StartTournamentWindow*))(Il2CppBase() + 0x148D578))(this);
	}
	template <typename T = uintptr_t> T GetQuest(int64_t playerId) {
		return ((T (*)(StartTournamentWindow*, int64_t))(Il2CppBase() + 0x148D9A0))(this, playerId);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StartTournamentWindow*))(Il2CppBase() + 0x148DBA0))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(StartTournamentWindow*, float))(Il2CppBase() + 0x148DC0C))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(StartTournamentWindow*))(Il2CppBase() + 0x148D718))(this);
	}
	template <typename T = void> T OnTakePart() {
		return ((T (*)(StartTournamentWindow*))(Il2CppBase() + 0x148DF24))(this);
	}

};

}
