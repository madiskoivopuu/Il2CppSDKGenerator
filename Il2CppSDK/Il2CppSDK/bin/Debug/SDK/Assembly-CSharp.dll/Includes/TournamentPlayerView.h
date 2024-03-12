#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentPlayerView"));
	}

	template <typename T = uintptr_t> T& Position() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PrizesContainer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& PrizePrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Points() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& FirstPlaceBackground() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& SecondPlaceBackground() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ThirdPlaceBackground() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _player() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _playerColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _ownColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Bind(uintptr_t window, int64_t tournamentId, int32_t position, int64_t playerId, uintptr_t tooltip) {
		return ((T (*)(TournamentPlayerView*, uintptr_t, int64_t, int32_t, int64_t, uintptr_t))(Il2CppBase() + 0x150950C))(this, window, tournamentId, position, playerId, tooltip);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(TournamentPlayerView*, float))(Il2CppBase() + 0x1509D58))(this, deltaTime);
	}

};

}
