#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentPlayerView"));
	}

	template <typename R = uintptr_t> R& Position() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& PrizesContainer() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = RewardResourceView*> R& PrizePrefab() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Points() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& Background() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& FirstPlaceBackground() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& SecondPlaceBackground() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& ThirdPlaceBackground() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = PlayerEntity*> R& _player() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _playerColor() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _ownColor() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Bind(UIWindow* window, int64_t tournamentId, int32_t position, int64_t playerId, TooltipView* tooltip) {
		return ((R (*)(TournamentPlayerView*, UIWindow*, int64_t, int32_t, int64_t, TooltipView*))(Il2CppBase() + 0x150950C))(this, window, tournamentId, position, playerId, tooltip);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(TournamentPlayerView*, float))(Il2CppBase() + 0x1509D58))(this, deltaTime);
	}

};

