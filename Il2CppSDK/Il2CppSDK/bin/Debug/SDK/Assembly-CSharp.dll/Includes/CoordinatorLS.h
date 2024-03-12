#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep" 

class CoordinatorLS: BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoordinatorLS"));
	}

	template <typename T = uintptr_t> T& _connectionStatus() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& _address() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _tokenKey() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& _isConnectProcessing() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = void*> T& OnConnectionError() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> static T& OnConnectedToCoordinator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T add_OnConnectionError(void* value) {
		return ((T (*)(CoordinatorLS*, void*))(Il2CppBase() + 0x133ABA0))(this, value);
	}
	template <typename T = void> T remove_OnConnectionError(void* value) {
		return ((T (*)(CoordinatorLS*, void*))(Il2CppBase() + 0x133AC40))(this, value);
	}
	template <typename T = void> static T add_OnConnectedToCoordinator(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x133ACE0))(0, value);
	}
	template <typename T = void> static T remove_OnConnectedToCoordinator(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x133AD9C))(0, value);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(CoordinatorLS*))(Il2CppBase() + 0x133AF5C))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(CoordinatorLS*))(Il2CppBase() + 0x133AFD4))(this);
	}
	template <typename T = void> T OnUserLogged(Il2CppString* adress, Il2CppString* coordinatorAddress, void* cfgVersions, int64_t userID, Il2CppArray<uintptr_t>* token) {
		return ((T (*)(CoordinatorLS*, Il2CppString*, Il2CppString*, void*, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x133B070))(this, adress, coordinatorAddress, cfgVersions, userID, token);
	}
	template <typename T = uintptr_t> T Repeat() {
		return ((T (*)(CoordinatorLS*))(Il2CppBase() + 0x133B0B8))(this);
	}
	template <typename T = void> T ConnectionErrorHandler(uintptr_t errorCode) {
		return ((T (*)(CoordinatorLS*, uintptr_t))(Il2CppBase() + 0x133B130))(this, errorCode);
	}
	template <typename T = void> T ConnectToCoordinator() {
		return ((T (*)(CoordinatorLS*))(Il2CppBase() + 0x133B200))(this);
	}
	template <typename T = void> T CoordinatorConnectResponseHandler(uintptr_t code, Il2CppString* codeMessage, Il2CppString* arenaAddress, int32_t updPort, int64_t worldID, uintptr_t worldStatus, int64_t sessionID, uintptr_t protocolType, uintptr_t resourcesType) {
		return ((T (*)(CoordinatorLS*, uintptr_t, Il2CppString*, Il2CppString*, int32_t, int64_t, uintptr_t, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x133B31C))(this, code, codeMessage, arenaAddress, updPort, worldID, worldStatus, sessionID, protocolType, resourcesType);
	}
	template <typename T = void> T Startb__12_1(Il2CppString* serverName) {
		return ((T (*)(CoordinatorLS*, Il2CppString*))(Il2CppBase() + 0x133B634))(this, serverName);
	}
	template <typename T = void> T Repeatb__15_0() {
		return ((T (*)(CoordinatorLS*))(Il2CppBase() + 0x133B69C))(this);
	}

};

}
