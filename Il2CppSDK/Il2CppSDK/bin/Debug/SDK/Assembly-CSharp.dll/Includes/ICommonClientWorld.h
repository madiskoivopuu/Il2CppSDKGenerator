#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICommonClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICommonClientWorld"));
	}


	template <typename R = int64_t> R get_AccountId() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int64_t> R get_SessionId() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = ClientAnalyticsManager*> R get_Analytics() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = ChatManager*> R get_ChatManager() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = UdpClientListener*> R get_Listener() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_peer() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsClanOperationsLocked() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsGuildOperationsLocked() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsBuilderLocked() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsDiplomacyLocked() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = ConfigFromServer*> R get_ConfigFromServer() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R Send(uintptr_t writer, uintptr_t deliveryMethod) {
		return ((R (*)(ICommonClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, writer, deliveryMethod);
	}
	template <typename R = AccountEntity*> R get_OwnAccount() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = PlayerEntity*> R get_OwnPlayer() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = ClanEntity*> R get_OwnClan() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = PvPEntity*> R get_OwnPvP() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GuildEntity*> R get_OwnGuild() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = TournamentEntity*> R get_OwnTournament() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R IsLeader() {
		return ((R (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnConnected(uintptr_t peer) {
		return ((R (*)(ICommonClientWorld*, uintptr_t))(Il2CppBase() + 0x0))(this, peer);
	}
	template <typename R = void> R OnNetworkReceive(uintptr_t peer, uintptr_t reader) {
		return ((R (*)(ICommonClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, peer, reader);
	}
	template <typename R = void> R OnActionCreated(ActionEntity* action) {
		return ((R (*)(ICommonClientWorld*, ActionEntity*))(Il2CppBase() + 0x0))(this, action);
	}

};

