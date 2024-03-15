#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StartTournamentWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartTournamentWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& QuestTournamentPanel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& JoinTournamentPanel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& QuestText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& QuestProgress() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& TakePartButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	 Nullable1int32_t>*& _progress() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0xA8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(StartTournamentWindow*))(Il2CppBase() + 0x148D48C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(StartTournamentWindow*))(Il2CppBase() + 0x148D578))(this);
	}
	template <typename R = QuestEntity*> R GetQuest(int64_t playerId) {
		return ((R (*)(StartTournamentWindow*, int64_t))(Il2CppBase() + 0x148D9A0))(this, playerId);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StartTournamentWindow*))(Il2CppBase() + 0x148DBA0))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(StartTournamentWindow*, float))(Il2CppBase() + 0x148DC0C))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(StartTournamentWindow*))(Il2CppBase() + 0x148D718))(this);
	}
	template <typename R = void> R OnTakePart() {
		return ((R (*)(StartTournamentWindow*))(Il2CppBase() + 0x148DF24))(this);
	}

};

