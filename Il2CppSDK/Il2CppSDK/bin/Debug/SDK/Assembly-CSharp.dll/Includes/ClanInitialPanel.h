#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInitialPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInitialPanel"));
	}

	template <typename T = StandartButton*> T& CreateClanButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = StandartButton*> T& JoinClanButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = GuildWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _hasReverseInvite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _hasInvite() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = void> T Bind(GuildWindow* window) {
		return ((T (*)(ClanInitialPanel*, GuildWindow*))(Il2CppBase() + 0x15871E4))(this, window);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ClanInitialPanel*))(Il2CppBase() + 0x15872E0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ClanInitialPanel*))(Il2CppBase() + 0x15873E4))(this);
	}
	template <typename T = void> T OnCreateClanButtonPressed() {
		return ((T (*)(ClanInitialPanel*))(Il2CppBase() + 0x1587438))(this);
	}
	template <typename T = void> T OnJoinClanButtonPressed() {
		return ((T (*)(ClanInitialPanel*))(Il2CppBase() + 0x15874E8))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(ClanInitialPanel*, float))(Il2CppBase() + 0x15876D0))(this, deltaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ClanInitialPanel*))(Il2CppBase() + 0x1587C0C))(this);
	}

};

