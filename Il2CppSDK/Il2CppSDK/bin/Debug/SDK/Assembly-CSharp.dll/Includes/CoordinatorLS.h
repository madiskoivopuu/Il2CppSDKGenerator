#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class CoordinatorLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoordinatorLS"));
	}

	template <typename R = ProtoTools::ErrorCodes*> R& _connectionStatus() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppString*> R& _address() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& _tokenKey() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = bool> R& _isConnectProcessing() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	 Action1ProtoTools::ErrorCodes*>*& OnConnectionError() {
		return *(Action1ProtoTools::ErrorCodes*>**)((uintptr_t)this + 0xC8);
	}
	 static Action7bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, ProtoModels::WorldResourcesType*>*& OnConnectedToCoordinator() {
		return *(Action7bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, ProtoModels::WorldResourcesType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R add_OnConnectionError(Action1ProtoTools::ErrorCodes*>* value) {
		return ((R (*)(CoordinatorLS*, Action1ProtoTools::ErrorCodes*>*))(Il2CppBase() + 0x133ABA0))(this, value);
	}
	template <typename R = void> R remove_OnConnectionError(Action1ProtoTools::ErrorCodes*>* value) {
		return ((R (*)(CoordinatorLS*, Action1ProtoTools::ErrorCodes*>*))(Il2CppBase() + 0x133AC40))(this, value);
	}
	template <typename R = void> static R add_OnConnectedToCoordinator(Action7bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, ProtoModels::WorldResourcesType*>* value) {
		return ((R (*)(void *, Action7bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, ProtoModels::WorldResourcesType*>*))(Il2CppBase() + 0x133ACE0))(0, value);
	}
	template <typename R = void> static R remove_OnConnectedToCoordinator(Action7bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, ProtoModels::WorldResourcesType*>* value) {
		return ((R (*)(void *, Action7bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, ProtoModels::WorldResourcesType*>*))(Il2CppBase() + 0x133AD9C))(0, value);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(CoordinatorLS*))(Il2CppBase() + 0x133AF5C))(this);
	}
	template <typename R = void> R Disable() {
		return ((R (*)(CoordinatorLS*))(Il2CppBase() + 0x133AFD4))(this);
	}
	template <typename R = void> R OnUserLogged(Il2CppString* adress, Il2CppString* coordinatorAddress, IEnumerable1ConfigurationVersion*>* cfgVersions, int64_t userID, Il2CppArray<uint8_t>* token) {
		return ((R (*)(CoordinatorLS*, Il2CppString*, Il2CppString*, IEnumerable1ConfigurationVersion*>*, int64_t, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x133B070))(this, adress, coordinatorAddress, cfgVersions, userID, token);
	}
	template <typename R = uintptr_t> R Repeat() {
		return ((R (*)(CoordinatorLS*))(Il2CppBase() + 0x133B0B8))(this);
	}
	template <typename R = void> R ConnectionErrorHandler(ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(CoordinatorLS*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x133B130))(this, errorCode);
	}
	template <typename R = void> R ConnectToCoordinator() {
		return ((R (*)(CoordinatorLS*))(Il2CppBase() + 0x133B200))(this);
	}
	template <typename R = void> R CoordinatorConnectResponseHandler(ProtoTools::ErrorCodes* code, Il2CppString* codeMessage, Il2CppString* arenaAddress, int32_t updPort, int64_t worldID, ProtoModels::WorldStatusType* worldStatus, int64_t sessionID, EProtocolType* protocolType, ProtoModels::WorldResourcesType* resourcesType) {
		return ((R (*)(CoordinatorLS*, ProtoTools::ErrorCodes*, Il2CppString*, Il2CppString*, int32_t, int64_t, ProtoModels::WorldStatusType*, int64_t, EProtocolType*, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x133B31C))(this, code, codeMessage, arenaAddress, updPort, worldID, worldStatus, sessionID, protocolType, resourcesType);
	}
	template <typename R = void> R Startb__12_1(Il2CppString* serverName) {
		return ((R (*)(CoordinatorLS*, Il2CppString*))(Il2CppBase() + 0x133B634))(this, serverName);
	}
	template <typename R = void> R Repeatb__15_0() {
		return ((R (*)(CoordinatorLS*))(Il2CppBase() + 0x133B69C))(this);
	}

};

