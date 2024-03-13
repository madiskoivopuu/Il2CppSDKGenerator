#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseState.h" 

class CoordinatorState : public BaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoordinatorState"));
	}

	template <typename T = Il2CppString*> T& _address() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _tokenKey() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1ErrorCodes*>*> T& OnConnectionError() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T add_OnConnectionError(Action1ErrorCodes*>* value) {
		return ((T (*)(CoordinatorState*, Action1ErrorCodes*>*))(Il2CppBase() + 0x133C884))(this, value);
	}
	template <typename T = void> T remove_OnConnectionError(Action1ErrorCodes*>* value) {
		return ((T (*)(CoordinatorState*, Action1ErrorCodes*>*))(Il2CppBase() + 0x133C924))(this, value);
	}
	template <typename T = uintptr_t> T Enter(Transition* transition) {
		return ((T (*)(CoordinatorState*, Transition*))(Il2CppBase() + 0x133C9C4))(this, transition);
	}
	template <typename T = uintptr_t> T Exit(Transition* transition) {
		return ((T (*)(CoordinatorState*, Transition*))(Il2CppBase() + 0x133CA58))(this, transition);
	}
	template <typename T = void> T ConnectToCoordinator() {
		return ((T (*)(CoordinatorState*))(Il2CppBase() + 0x133CAEC))(this);
	}
	template <typename T = void> T OnCoordinatorConnectResponse(ErrorCodes* code, Il2CppString* codeMessage, Il2CppString* arenaAddress, int32_t updPort, int64_t worldID, WorldStatusType* worldStatus, int64_t sessionID, EProtocolType* protocolType, WorldResourcesType* resourcesType) {
		return ((T (*)(CoordinatorState*, ErrorCodes*, Il2CppString*, Il2CppString*, int32_t, int64_t, WorldStatusType*, int64_t, EProtocolType*, WorldResourcesType*))(Il2CppBase() + 0x133CC70))(this, code, codeMessage, arenaAddress, updPort, worldID, worldStatus, sessionID, protocolType, resourcesType);
	}
	template <typename T = void> T OnArenaConnectResponse(ErrorCodes* code, Il2CppString* codeMessage, int64_t sessionID, int64_t worldID, WorldStatusType* worldStatus, int32_t updPort) {
		return ((T (*)(CoordinatorState*, ErrorCodes*, Il2CppString*, int64_t, int64_t, WorldStatusType*, int32_t))(Il2CppBase() + 0x133D1C4))(this, code, codeMessage, sessionID, worldID, worldStatus, updPort);
	}

};

