#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class LobbyDataContext : public DataContext1<LobbyEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyDataContext"));
	}

	template <typename R = Il2CppString*> static R& InvasionPvP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& InvasionPvE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 IGroup1LobbyEntity*>*& _lobbyWithType() {
		return *(IGroup1LobbyEntity*>**)((uintptr_t)this + 0x110);
	}

	template <typename R = int32_t> R GetPrisonsWinPoints(ConfigFromServer* config, int32_t playerPoints, int32_t dungeonPoints) {
		return ((R (*)(LobbyDataContext*, ConfigFromServer*, int32_t, int32_t))(Il2CppBase() + 0x1439134))(this, config, playerPoints, dungeonPoints);
	}
	template <typename R = int32_t> R GetPrisonsLosePoints(ConfigFromServer* config, int32_t playerPoints, int32_t dungeonPoints) {
		return ((R (*)(LobbyDataContext*, ConfigFromServer*, int32_t, int32_t))(Il2CppBase() + 0x1439274))(this, config, playerPoints, dungeonPoints);
	}
	template <typename R = int32_t> R GetPrisonsLosePoints_1(ConfigFromServer* config, float winPoints) {
		return ((R (*)(LobbyDataContext*, ConfigFromServer*, float))(Il2CppBase() + 0x14393B0))(this, config, winPoints);
	}
	 ValueTuple2float, float>* GetLobbyRules(ICommonContexts* contexts, int32_t portalPoints, int32_t playerCount) {
		return ((ValueTuple2float, float>* (*)(LobbyDataContext*, ICommonContexts*, int32_t, int32_t))(Il2CppBase() + 0x14394BC))(this, contexts, portalPoints, playerCount);
	}
	template <typename R = LobbyEntity*> R GetCurrentLobbyForPoints(ICommonContexts* contexts, int32_t portalPoints) {
		return ((R (*)(LobbyDataContext*, ICommonContexts*, int32_t))(Il2CppBase() + 0x143A274))(this, contexts, portalPoints);
	}
	 ValueTuple2LobbyEntity*, LobbyEntity*>* GetCurrentAndNextLobbyForPoints(ICommonContexts* contexts, int32_t portalPoints) {
		return ((ValueTuple2LobbyEntity*, LobbyEntity*>* (*)(LobbyDataContext*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1439868))(this, contexts, portalPoints);
	}
	template <typename R = LobbyEntity*> R GetFirstLobbyByType(ICommonContexts* contexts, LobbyType* type) {
		return ((R (*)(LobbyDataContext*, ICommonContexts*, LobbyType*))(Il2CppBase() + 0x1435D60))(this, contexts, type);
	}
	template <typename R = LobbyEntity*> R FindLobbyForPlayerToCreate(ICommonContexts* world, LobbyType* type, AccountEntity* account, int32_t playersCount) {
		return ((R (*)(LobbyDataContext*, ICommonContexts*, LobbyType*, AccountEntity*, int32_t))(Il2CppBase() + 0x143A9BC))(this, world, type, account, playersCount);
	}

};

