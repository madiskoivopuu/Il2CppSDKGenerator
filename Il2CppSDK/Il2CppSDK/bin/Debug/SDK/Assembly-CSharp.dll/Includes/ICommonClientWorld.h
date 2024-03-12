#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICommonClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICommonClientWorld"));
	}


	template <typename T = int64_t> T get_AccountId() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int64_t> T get_SessionId() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Analytics() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ChatManager() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Listener() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_peer() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsClanOperationsLocked() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsGuildOperationsLocked() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsBuilderLocked() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsDiplomacyLocked() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ConfigFromServer() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Send(uintptr_t writer, uintptr_t deliveryMethod) {
		return ((T (*)(ICommonClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, writer, deliveryMethod);
	}
	template <typename T = uintptr_t> T get_OwnAccount() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_OwnPlayer() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_OwnClan() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_OwnPvP() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_OwnGuild() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_OwnTournament() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsLeader() {
		return ((T (*)(ICommonClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnConnected(uintptr_t peer) {
		return ((T (*)(ICommonClientWorld*, uintptr_t))(Il2CppBase() + 0x0))(this, peer);
	}
	template <typename T = void> T OnNetworkReceive(uintptr_t peer, uintptr_t reader) {
		return ((T (*)(ICommonClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, peer, reader);
	}
	template <typename T = void> T OnActionCreated(uintptr_t action) {
		return ((T (*)(ICommonClientWorld*, uintptr_t))(Il2CppBase() + 0x0))(this, action);
	}

};

}
