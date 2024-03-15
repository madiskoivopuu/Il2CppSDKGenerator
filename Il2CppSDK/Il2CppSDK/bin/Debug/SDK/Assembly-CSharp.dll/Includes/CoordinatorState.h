#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseState.h" 

class CoordinatorState : public BaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoordinatorState"));
	}

	template <typename R = Il2CppString*> R& _address() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& _tokenKey() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Action1<ProtoTools::ErrorCodes>*& OnConnectionError() {
		return *(Action1<ProtoTools::ErrorCodes>**)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R add_OnConnectionError(Action1<ProtoTools::ErrorCodes>* value) {
		return ((R (*)(CoordinatorState*, Action1<ProtoTools::ErrorCodes>*))(Il2CppBase() + 0x133C884))(this, value);
	}
	template <typename R = void> R remove_OnConnectionError(Action1<ProtoTools::ErrorCodes>* value) {
		return ((R (*)(CoordinatorState*, Action1<ProtoTools::ErrorCodes>*))(Il2CppBase() + 0x133C924))(this, value);
	}
	template <typename R = uintptr_t> R Enter(Transition* transition) {
		return ((R (*)(CoordinatorState*, Transition*))(Il2CppBase() + 0x133C9C4))(this, transition);
	}
	template <typename R = uintptr_t> R Exit(Transition* transition) {
		return ((R (*)(CoordinatorState*, Transition*))(Il2CppBase() + 0x133CA58))(this, transition);
	}
	template <typename R = void> R ConnectToCoordinator() {
		return ((R (*)(CoordinatorState*))(Il2CppBase() + 0x133CAEC))(this);
	}
	template <typename R = void> R OnCoordinatorConnectResponse(ProtoTools::ErrorCodes code, Il2CppString* codeMessage, Il2CppString* arenaAddress, int32_t updPort, int64_t worldID, ProtoModels::WorldStatusType worldStatus, int64_t sessionID, EProtocolType protocolType, ProtoModels::WorldResourcesType resourcesType) {
		return ((R (*)(CoordinatorState*, ProtoTools::ErrorCodes, Il2CppString*, Il2CppString*, int32_t, int64_t, ProtoModels::WorldStatusType, int64_t, EProtocolType, ProtoModels::WorldResourcesType))(Il2CppBase() + 0x133CC70))(this, code, codeMessage, arenaAddress, updPort, worldID, worldStatus, sessionID, protocolType, resourcesType);
	}
	template <typename R = void> R OnArenaConnectResponse(ProtoTools::ErrorCodes code, Il2CppString* codeMessage, int64_t sessionID, int64_t worldID, ProtoModels::WorldStatusType worldStatus, int32_t updPort) {
		return ((R (*)(CoordinatorState*, ProtoTools::ErrorCodes, Il2CppString*, int64_t, int64_t, ProtoModels::WorldStatusType, int32_t))(Il2CppBase() + 0x133D1C4))(this, code, codeMessage, sessionID, worldID, worldStatus, updPort);
	}

};

