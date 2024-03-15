#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RpcHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RpcHelper"));
	}

	template <typename R = Il2CppString*> static R& LOGIN_CMD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& REGION_CMD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& HELLO_CMD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GETINFO_CMD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GETCONFIG_CMD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& WAIT_ME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Config*> static R& ServersInfoConfig() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Config*> static R get_ServersInfoConfig() {
		return ((R (*)(void *))(Il2CppBase() + 0x11A5DD4))(0);
	}
	template <typename R = void> static R set_ServersInfoConfig(Config* value) {
		return ((R (*)(void *, Config*))(Il2CppBase() + 0x11A5E20))(0, value);
	}
	template <typename R = uintptr_t> static R SendData(Il2CppString* address, Il2CppString* cmd, uintptr_t request, uintptr_t response, Action1<uintptr_t>* responseHandler, Il2CppArray<uint8_t>* key, Action1<ProtoTools::ErrorCodes>* onError) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, Action1<uintptr_t>*, Il2CppArray<uint8_t>*, Action1<ProtoTools::ErrorCodes>*))(Il2CppBase() + 0x11A5E74))(0, address, cmd, request, response, responseHandler, key, onError);
	}
	template <typename R = uintptr_t> static R LoadData(Il2CppString* address, Il2CppString* cmd, uintptr_t request, Action1<uintptr_t>* responseHandler, Il2CppArray<uint8_t>* key, Action1<ProtoTools::ErrorCodes>* onError) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, Action1<uintptr_t>*, Il2CppArray<uint8_t>*, Action1<ProtoTools::ErrorCodes>*))(Il2CppBase() + 0x11A6030))(0, address, cmd, request, responseHandler, key, onError);
	}
	template <typename R = void> static R RunAsync(uintptr_t task) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x11A61CC))(0, task);
	}
	template <typename R = void> static R LoginUserFromDevice(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* referallID, Il2CppString* fbToken, int32_t language, ProtoModels::LoginUserDeviceInfo* deviceInfo, Action8<ProtoTools::ErrorCodes, Il2CppString*, Il2CppString*, int64_t, Il2CppArray<uint8_t>*, int64_t, int32_t, IEnumerable1<ConfigurationVersion*>*>* responseHandler, Action1<ProtoTools::ErrorCodes>* onError) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, ProtoModels::LoginUserDeviceInfo*, Action8<ProtoTools::ErrorCodes, Il2CppString*, Il2CppString*, int64_t, Il2CppArray<uint8_t>*, int64_t, int32_t, IEnumerable1<ConfigurationVersion*>*>*, Action1<ProtoTools::ErrorCodes>*))(Il2CppBase() + 0x11A62E4))(0, address, deviceId, googleId, gamecenterID, referallID, fbToken, language, deviceInfo, responseHandler, onError);
	}
	template <typename R = void> static R GetUserInfoFromMainServer(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* fbToken, Action2<ProtoTools::ErrorCodes, ProtoModels::CheckUserResponse*>* responseHandler) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Action2<ProtoTools::ErrorCodes, ProtoModels::CheckUserResponse*>*))(Il2CppBase() + 0x11A6544))(0, address, deviceId, googleId, gamecenterID, fbToken, responseHandler);
	}
	template <typename R = void> static R GetUserRegionalServer(Il2CppString* address, Il2CppString* region, Action5<ProtoTools::ErrorCodes, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<ProtoModels::ServerInfo*>*>* responseHandler) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, Action5<ProtoTools::ErrorCodes, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<ProtoModels::ServerInfo*>*>*))(Il2CppBase() + 0x11A6700))(0, address, region, responseHandler);
	}
	template <typename R = void> static R SendWaitMeToCoordinator(Il2CppString* coordinatorAddress, int64_t playerId, Il2CppArray<uint8_t>* tokenKey, Action1<uintptr_t>* handler) {
		return ((R (*)(void *, Il2CppString*, int64_t, Il2CppArray<uint8_t>*, Action1<uintptr_t>*))(Il2CppBase() + 0x11A6904))(0, coordinatorAddress, playerId, tokenKey, handler);
	}
	template <typename R = void> static R LoadConfiguration(Il2CppString* address, int64_t plaayerId, ProtoModels::ClientConfigurationType cfgType, int64_t currentVersion, Il2CppArray<uint8_t>* key, Action1<uintptr_t>* responseHandler, Action1<ProtoTools::ErrorCodes>* onError) {
		return ((R (*)(void *, Il2CppString*, int64_t, ProtoModels::ClientConfigurationType, int64_t, Il2CppArray<uint8_t>*, Action1<uintptr_t>*, Action1<ProtoTools::ErrorCodes>*))(Il2CppBase() + 0x11A69E0))(0, address, plaayerId, cfgType, currentVersion, key, responseHandler, onError);
	}
	template <typename R = void> static R HelloUser(Il2CppString* coordinatorAddress, int64_t playerId, Il2CppArray<uint8_t>* key, Action9<ProtoTools::ErrorCodes, Il2CppString*, Il2CppString*, int32_t, int64_t, ProtoModels::WorldStatusType, int64_t, EProtocolType, ProtoModels::WorldResourcesType>* responseHanlder, Action1<ProtoTools::ErrorCodes>* onError) {
		return ((R (*)(void *, Il2CppString*, int64_t, Il2CppArray<uint8_t>*, Action9<ProtoTools::ErrorCodes, Il2CppString*, Il2CppString*, int32_t, int64_t, ProtoModels::WorldStatusType, int64_t, EProtocolType, ProtoModels::WorldResourcesType>*, Action1<ProtoTools::ErrorCodes>*))(Il2CppBase() + 0x11A6B50))(0, coordinatorAddress, playerId, key, responseHanlder, onError);
	}
	template <typename R = int32_t> static R GetAvailablePort(int32_t startingPort) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x11A6CCC))(0, startingPort);
	}
	template <typename R = Config*> static R GetConfig() {
		return ((R (*)(void *))(Il2CppBase() + 0x11A7270))(0);
	}
	template <typename R = uintptr_t> static R GetConfigCrt() {
		return ((R (*)(void *))(Il2CppBase() + 0x11A7494))(0);
	}
	template <typename R = uintptr_t> static R GetFileFromStreamingAsset(Il2CppString* fileName, Action1<uintptr_t>* onSuccess) {
		return ((R (*)(void *, Il2CppString*, Action1<uintptr_t>*))(Il2CppBase() + 0x0))(0, fileName, onSuccess);
	}
	template <typename R = Il2CppString*> static R GetRouterUrl(Config* config, int32_t index) {
		return ((R (*)(void *, Config*, int32_t))(Il2CppBase() + 0x11A74F0))(0, config, index);
	}

};

