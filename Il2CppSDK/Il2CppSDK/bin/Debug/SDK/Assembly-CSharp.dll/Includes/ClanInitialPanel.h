#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInitialPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInitialPanel"));
	}

	template <typename R = StandartButton*> R& CreateClanButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = StandartButton*> R& JoinClanButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _hasReverseInvite() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _hasInvite() {
		return *(R*)((uintptr_t)this + 0x31);
	}

	template <typename R = void> R Bind(GuildWindow* window) {
		return ((R (*)(ClanInitialPanel*, GuildWindow*))(Il2CppBase() + 0x15871E4))(this, window);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ClanInitialPanel*))(Il2CppBase() + 0x15872E0))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ClanInitialPanel*))(Il2CppBase() + 0x15873E4))(this);
	}
	template <typename R = void> R OnCreateClanButtonPressed() {
		return ((R (*)(ClanInitialPanel*))(Il2CppBase() + 0x1587438))(this);
	}
	template <typename R = void> R OnJoinClanButtonPressed() {
		return ((R (*)(ClanInitialPanel*))(Il2CppBase() + 0x15874E8))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(ClanInitialPanel*, float))(Il2CppBase() + 0x15876D0))(this, deltaTime);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(ClanInitialPanel*))(Il2CppBase() + 0x1587C0C))(this);
	}

};

