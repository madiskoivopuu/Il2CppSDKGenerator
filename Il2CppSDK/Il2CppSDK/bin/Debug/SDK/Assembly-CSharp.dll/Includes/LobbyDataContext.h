#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class LobbyDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyDataContext"));
	}

	template <typename T = Il2CppString*> static T& InvasionPvP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& InvasionPvE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _lobbyWithType() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = int32_t> T GetPrisonsWinPoints(uintptr_t config, int32_t playerPoints, int32_t dungeonPoints) {
		return ((T (*)(LobbyDataContext*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1439134))(this, config, playerPoints, dungeonPoints);
	}
	template <typename T = int32_t> T GetPrisonsLosePoints(uintptr_t config, int32_t playerPoints, int32_t dungeonPoints) {
		return ((T (*)(LobbyDataContext*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1439274))(this, config, playerPoints, dungeonPoints);
	}
	template <typename T = int32_t> T GetPrisonsLosePoints_1(uintptr_t config, float winPoints) {
		return ((T (*)(LobbyDataContext*, uintptr_t, float))(Il2CppBase() + 0x14393B0))(this, config, winPoints);
	}
	template <typename T = void*> T GetLobbyRules(uintptr_t contexts, int32_t portalPoints, int32_t playerCount) {
		return ((T (*)(LobbyDataContext*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x14394BC))(this, contexts, portalPoints, playerCount);
	}
	template <typename T = uintptr_t> T GetCurrentLobbyForPoints(uintptr_t contexts, int32_t portalPoints) {
		return ((T (*)(LobbyDataContext*, uintptr_t, int32_t))(Il2CppBase() + 0x143A274))(this, contexts, portalPoints);
	}
	template <typename T = void*> T GetCurrentAndNextLobbyForPoints(uintptr_t contexts, int32_t portalPoints) {
		return ((T (*)(LobbyDataContext*, uintptr_t, int32_t))(Il2CppBase() + 0x1439868))(this, contexts, portalPoints);
	}
	template <typename T = uintptr_t> T GetFirstLobbyByType(uintptr_t contexts, uintptr_t type) {
		return ((T (*)(LobbyDataContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1435D60))(this, contexts, type);
	}
	template <typename T = uintptr_t> T FindLobbyForPlayerToCreate(uintptr_t world, uintptr_t type, uintptr_t account, int32_t playersCount) {
		return ((T (*)(LobbyDataContext*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x143A9BC))(this, world, type, account, playersCount);
	}

};

}
