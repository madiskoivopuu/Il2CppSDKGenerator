#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class LobbyDataContext : public DataContext1<LobbyEntity*>
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
	template <typename T = IGroup1LobbyEntity*>*> T& _lobbyWithType() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = int32_t> T GetPrisonsWinPoints(ConfigFromServer* config, int32_t playerPoints, int32_t dungeonPoints) {
		return ((T (*)(LobbyDataContext*, ConfigFromServer*, int32_t, int32_t))(Il2CppBase() + 0x1439134))(this, config, playerPoints, dungeonPoints);
	}
	template <typename T = int32_t> T GetPrisonsLosePoints(ConfigFromServer* config, int32_t playerPoints, int32_t dungeonPoints) {
		return ((T (*)(LobbyDataContext*, ConfigFromServer*, int32_t, int32_t))(Il2CppBase() + 0x1439274))(this, config, playerPoints, dungeonPoints);
	}
	template <typename T = int32_t> T GetPrisonsLosePoints_1(ConfigFromServer* config, float winPoints) {
		return ((T (*)(LobbyDataContext*, ConfigFromServer*, float))(Il2CppBase() + 0x14393B0))(this, config, winPoints);
	}
	template <typename T = ValueTuple2float, float>*> T GetLobbyRules(ICommonContexts* contexts, int32_t portalPoints, int32_t playerCount) {
		return ((T (*)(LobbyDataContext*, ICommonContexts*, int32_t, int32_t))(Il2CppBase() + 0x14394BC))(this, contexts, portalPoints, playerCount);
	}
	template <typename T = LobbyEntity*> T GetCurrentLobbyForPoints(ICommonContexts* contexts, int32_t portalPoints) {
		return ((T (*)(LobbyDataContext*, ICommonContexts*, int32_t))(Il2CppBase() + 0x143A274))(this, contexts, portalPoints);
	}
	template <typename T = ValueTuple2LobbyEntity*, LobbyEntity*>*> T GetCurrentAndNextLobbyForPoints(ICommonContexts* contexts, int32_t portalPoints) {
		return ((T (*)(LobbyDataContext*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1439868))(this, contexts, portalPoints);
	}
	template <typename T = LobbyEntity*> T GetFirstLobbyByType(ICommonContexts* contexts, LobbyType* type) {
		return ((T (*)(LobbyDataContext*, ICommonContexts*, LobbyType*))(Il2CppBase() + 0x1435D60))(this, contexts, type);
	}
	template <typename T = LobbyEntity*> T FindLobbyForPlayerToCreate(ICommonContexts* world, LobbyType* type, AccountEntity* account, int32_t playersCount) {
		return ((T (*)(LobbyDataContext*, ICommonContexts*, LobbyType*, AccountEntity*, int32_t))(Il2CppBase() + 0x143A9BC))(this, world, type, account, playersCount);
	}

};

