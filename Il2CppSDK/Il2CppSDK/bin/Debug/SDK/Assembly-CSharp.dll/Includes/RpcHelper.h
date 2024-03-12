#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RpcHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RpcHelper"));
	}

	template <typename T = Il2CppString*> static T& LOGIN_CMD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& REGION_CMD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HELLO_CMD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GETINFO_CMD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GETCONFIG_CMD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WAIT_ME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ServersInfoConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_ServersInfoConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x11A5DD4))(0);
	}
	template <typename T = void> static T set_ServersInfoConfig(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11A5E20))(0, value);
	}
	template <typename T = uintptr_t> static T SendData(Il2CppString* address, Il2CppString* cmd, uintptr_t request, uintptr_t response, void* responseHandler, Il2CppArray<uintptr_t>* key, void* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, void*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x11A5E74))(0, address, cmd, request, response, responseHandler, key, onError);
	}
	template <typename T = uintptr_t> static T LoadData(Il2CppString* address, Il2CppString* cmd, uintptr_t request, void* responseHandler, Il2CppArray<uintptr_t>* key, void* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, void*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x11A6030))(0, address, cmd, request, responseHandler, key, onError);
	}
	template <typename T = void> static T RunAsync(uintptr_t task) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11A61CC))(0, task);
	}
	template <typename T = void> static T LoginUserFromDevice(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* referallID, Il2CppString* fbToken, int32_t language, uintptr_t deviceInfo, void* responseHandler, void* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, uintptr_t, void*, void*))(Il2CppBase() + 0x11A62E4))(0, address, deviceId, googleId, gamecenterID, referallID, fbToken, language, deviceInfo, responseHandler, onError);
	}
	template <typename T = void> static T GetUserInfoFromMainServer(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* fbToken, void* responseHandler) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x11A6544))(0, address, deviceId, googleId, gamecenterID, fbToken, responseHandler);
	}
	template <typename T = void> static T GetUserRegionalServer(Il2CppString* address, Il2CppString* region, void* responseHandler) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x11A6700))(0, address, region, responseHandler);
	}
	template <typename T = void> static T SendWaitMeToCoordinator(Il2CppString* coordinatorAddress, int64_t playerId, Il2CppArray<uintptr_t>* tokenKey, void* handler) {
		return ((T (*)(void *, Il2CppString*, int64_t, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x11A6904))(0, coordinatorAddress, playerId, tokenKey, handler);
	}
	template <typename T = void> static T LoadConfiguration(Il2CppString* address, int64_t plaayerId, uintptr_t cfgType, int64_t currentVersion, Il2CppArray<uintptr_t>* key, void* responseHandler, void* onError) {
		return ((T (*)(void *, Il2CppString*, int64_t, uintptr_t, int64_t, Il2CppArray<uintptr_t>*, void*, void*))(Il2CppBase() + 0x11A69E0))(0, address, plaayerId, cfgType, currentVersion, key, responseHandler, onError);
	}
	template <typename T = void> static T HelloUser(Il2CppString* coordinatorAddress, int64_t playerId, Il2CppArray<uintptr_t>* key, void* responseHanlder, void* onError) {
		return ((T (*)(void *, Il2CppString*, int64_t, Il2CppArray<uintptr_t>*, void*, void*))(Il2CppBase() + 0x11A6B50))(0, coordinatorAddress, playerId, key, responseHanlder, onError);
	}
	template <typename T = int32_t> static T GetAvailablePort(int32_t startingPort) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x11A6CCC))(0, startingPort);
	}
	template <typename T = uintptr_t> static T GetConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x11A7270))(0);
	}
	template <typename T = uintptr_t> static T GetConfigCrt() {
		return ((T (*)(void *))(Il2CppBase() + 0x11A7494))(0);
	}
	template <typename T = uintptr_t> static T GetFileFromStreamingAsset(Il2CppString* fileName, void* onSuccess) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x0))(0, fileName, onSuccess);
	}
	template <typename T = Il2CppString*> static T GetRouterUrl(uintptr_t config, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x11A74F0))(0, config, index);
	}

};

}
