#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseState" 

class CoordinatorState: BaseState
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
	template <typename T = void*> T& OnConnectionError() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T add_OnConnectionError(void* value) {
		return ((T (*)(CoordinatorState*, void*))(Il2CppBase() + 0x133C884))(this, value);
	}
	template <typename T = void> T remove_OnConnectionError(void* value) {
		return ((T (*)(CoordinatorState*, void*))(Il2CppBase() + 0x133C924))(this, value);
	}
	template <typename T = uintptr_t> T Enter(uintptr_t transition) {
		return ((T (*)(CoordinatorState*, uintptr_t))(Il2CppBase() + 0x133C9C4))(this, transition);
	}
	template <typename T = uintptr_t> T Exit(uintptr_t transition) {
		return ((T (*)(CoordinatorState*, uintptr_t))(Il2CppBase() + 0x133CA58))(this, transition);
	}
	template <typename T = void> T ConnectToCoordinator() {
		return ((T (*)(CoordinatorState*))(Il2CppBase() + 0x133CAEC))(this);
	}
	template <typename T = void> T OnCoordinatorConnectResponse(uintptr_t code, Il2CppString* codeMessage, Il2CppString* arenaAddress, int32_t updPort, int64_t worldID, uintptr_t worldStatus, int64_t sessionID, uintptr_t protocolType, uintptr_t resourcesType) {
		return ((T (*)(CoordinatorState*, uintptr_t, Il2CppString*, Il2CppString*, int32_t, int64_t, uintptr_t, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x133CC70))(this, code, codeMessage, arenaAddress, updPort, worldID, worldStatus, sessionID, protocolType, resourcesType);
	}
	template <typename T = void> T OnArenaConnectResponse(uintptr_t code, Il2CppString* codeMessage, int64_t sessionID, int64_t worldID, uintptr_t worldStatus, int32_t updPort) {
		return ((T (*)(CoordinatorState*, uintptr_t, Il2CppString*, int64_t, int64_t, uintptr_t, int32_t))(Il2CppBase() + 0x133D1C4))(this, code, codeMessage, sessionID, worldID, worldStatus, updPort);
	}

};

}
