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
	template <typename T = Config*> static T& ServersInfoConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Config*> static T get_ServersInfoConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x11A5DD4))(0);
	}
	template <typename T = void> static T set_ServersInfoConfig(Config* value) {
		return ((T (*)(void *, Config*))(Il2CppBase() + 0x11A5E20))(0, value);
	}
	template <typename T = uintptr_t> static T SendData(Il2CppString* address, Il2CppString* cmd, uintptr_t request, uintptr_t response, Action1uintptr_t>* responseHandler, Il2CppArray<uintptr_t>* key, Action1ErrorCodes*>* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, Action1uintptr_t>*, Il2CppArray<uintptr_t>*, Action1ErrorCodes*>*))(Il2CppBase() + 0x11A5E74))(0, address, cmd, request, response, responseHandler, key, onError);
	}
	template <typename T = uintptr_t> static T LoadData(Il2CppString* address, Il2CppString* cmd, uintptr_t request, Action1uintptr_t>* responseHandler, Il2CppArray<uintptr_t>* key, Action1ErrorCodes*>* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, Action1uintptr_t>*, Il2CppArray<uintptr_t>*, Action1ErrorCodes*>*))(Il2CppBase() + 0x11A6030))(0, address, cmd, request, responseHandler, key, onError);
	}
	template <typename T = void> static T RunAsync(uintptr_t task) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11A61CC))(0, task);
	}
	template <typename T = void> static T LoginUserFromDevice(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* referallID, Il2CppString* fbToken, int32_t language, LoginUserDeviceInfo* deviceInfo, Action8ErrorCodes*, Il2CppString*, Il2CppString*, int64_t, Il2CppArray<uintptr_t>*, int64_t, int32_t, IEnumerable1ConfigurationVersion*>*>* responseHandler, Action1ErrorCodes*>* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, LoginUserDeviceInfo*, Action8ErrorCodes*, Il2CppString*, Il2CppString*, int64_t, Il2CppArray<uintptr_t>*, int64_t, int32_t, IEnumerable1ConfigurationVersion*>*>*, Action1ErrorCodes*>*))(Il2CppBase() + 0x11A62E4))(0, address, deviceId, googleId, gamecenterID, referallID, fbToken, language, deviceInfo, responseHandler, onError);
	}
	template <typename T = void> static T GetUserInfoFromMainServer(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* fbToken, Action2ErrorCodes*, CheckUserResponse*>* responseHandler) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Action2ErrorCodes*, CheckUserResponse*>*))(Il2CppBase() + 0x11A6544))(0, address, deviceId, googleId, gamecenterID, fbToken, responseHandler);
	}
	template <typename T = void> static T GetUserRegionalServer(Il2CppString* address, Il2CppString* region, Action5ErrorCodes*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*>* responseHandler) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Action5ErrorCodes*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x11A6700))(0, address, region, responseHandler);
	}
	template <typename T = void> static T SendWaitMeToCoordinator(Il2CppString* coordinatorAddress, int64_t playerId, Il2CppArray<uintptr_t>* tokenKey, Action1uintptr_t>* handler) {
		return ((T (*)(void *, Il2CppString*, int64_t, Il2CppArray<uintptr_t>*, Action1uintptr_t>*))(Il2CppBase() + 0x11A6904))(0, coordinatorAddress, playerId, tokenKey, handler);
	}
	template <typename T = void> static T LoadConfiguration(Il2CppString* address, int64_t plaayerId, ClientConfigurationType* cfgType, int64_t currentVersion, Il2CppArray<uintptr_t>* key, Action1uintptr_t>* responseHandler, Action1ErrorCodes*>* onError) {
		return ((T (*)(void *, Il2CppString*, int64_t, ClientConfigurationType*, int64_t, Il2CppArray<uintptr_t>*, Action1uintptr_t>*, Action1ErrorCodes*>*))(Il2CppBase() + 0x11A69E0))(0, address, plaayerId, cfgType, currentVersion, key, responseHandler, onError);
	}
	template <typename T = void> static T HelloUser(Il2CppString* coordinatorAddress, int64_t playerId, Il2CppArray<uintptr_t>* key, Action9ErrorCodes*, Il2CppString*, Il2CppString*, int32_t, int64_t, WorldStatusType*, int64_t, EProtocolType*, WorldResourcesType*>* responseHanlder, Action1ErrorCodes*>* onError) {
		return ((T (*)(void *, Il2CppString*, int64_t, Il2CppArray<uintptr_t>*, Action9ErrorCodes*, Il2CppString*, Il2CppString*, int32_t, int64_t, WorldStatusType*, int64_t, EProtocolType*, WorldResourcesType*>*, Action1ErrorCodes*>*))(Il2CppBase() + 0x11A6B50))(0, coordinatorAddress, playerId, key, responseHanlder, onError);
	}
	template <typename T = int32_t> static T GetAvailablePort(int32_t startingPort) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x11A6CCC))(0, startingPort);
	}
	template <typename T = Config*> static T GetConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x11A7270))(0);
	}
	template <typename T = uintptr_t> static T GetConfigCrt() {
		return ((T (*)(void *))(Il2CppBase() + 0x11A7494))(0);
	}
	template <typename T = uintptr_t> static T GetFileFromStreamingAsset(Il2CppString* fileName, Action1uintptr_t>* onSuccess) {
		return ((T (*)(void *, Il2CppString*, Action1uintptr_t>*))(Il2CppBase() + 0x0))(0, fileName, onSuccess);
	}
	template <typename T = Il2CppString*> static T GetRouterUrl(Config* config, int32_t index) {
		return ((T (*)(void *, Config*, int32_t))(Il2CppBase() + 0x11A74F0))(0, config, index);
	}

};

