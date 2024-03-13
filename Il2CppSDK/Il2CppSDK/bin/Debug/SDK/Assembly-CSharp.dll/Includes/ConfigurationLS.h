#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class ConfigurationLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationLS"));
	}

	template <typename T = Action1ErrorCodes*>*> T& OnConnectionError() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& _mainAddress() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& _coordinatorAdress() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _currentTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int64_t> T& _currentTimeTicks() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int64_t> T& _timeForSendWaitMe() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _tokenKey() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = IEnumerable1ConfigurationVersion*>*> T& _serverCfgVersions() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = ClientDataContexts*> T& _dataContexts() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = UnityBlueprintLoader*> T& _blueprintLoader() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& _blueprintPath() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& _isDatFromServerExist() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = DataBlueprints*> T& _currentData() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppDictionary<ConfigurationType*, ConfigurationVersion*>*> T& _currentConfigVersion() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppDictionary<ConfigurationType*, Action3int64_t, int64_t, ConfigurationType*>*>*> T& _configurationActions() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T add_OnConnectionError(Action1ErrorCodes*>* value) {
		return ((T (*)(ConfigurationLS*, Action1ErrorCodes*>*))(Il2CppBase() + 0x15E47AC))(this, value);
	}
	template <typename T = void> T remove_OnConnectionError(Action1ErrorCodes*>* value) {
		return ((T (*)(ConfigurationLS*, Action1ErrorCodes*>*))(Il2CppBase() + 0x15E484C))(this, value);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(ConfigurationLS*))(Il2CppBase() + 0x15E4E14))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(ConfigurationLS*))(Il2CppBase() + 0x15E4E8C))(this);
	}
	template <typename T = void> T OnUserLogged(Il2CppString* adress, Il2CppString* coordinatorAddress, IEnumerable1ConfigurationVersion*>* cfgVersions, int64_t userID, Il2CppArray<uintptr_t>* token) {
		return ((T (*)(ConfigurationLS*, Il2CppString*, Il2CppString*, IEnumerable1ConfigurationVersion*>*, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15E4F1C))(this, adress, coordinatorAddress, cfgVersions, userID, token);
	}
	template <typename T = void> T SendWaitMe() {
		return ((T (*)(ConfigurationLS*))(Il2CppBase() + 0x15E4F90))(this);
	}
	template <typename T = void> T CheckTimeForSendWaitMe() {
		return ((T (*)(ConfigurationLS*))(Il2CppBase() + 0x15E5070))(this);
	}
	template <typename T = void> T LoadLocalization(int64_t currentVersion, int64_t serverVersion, ConfigurationType* cfgType) {
		return ((T (*)(ConfigurationLS*, int64_t, int64_t, ConfigurationType*))(Il2CppBase() + 0x15E5130))(this, currentVersion, serverVersion, cfgType);
	}
	template <typename T = void> T LoadClientConfig(int64_t currentVersion, int64_t serverVersion, ConfigurationType* cfgType) {
		return ((T (*)(ConfigurationLS*, int64_t, int64_t, ConfigurationType*))(Il2CppBase() + 0x15E5408))(this, currentVersion, serverVersion, cfgType);
	}
	template <typename T = void> T OnClientConfigLoaded(uintptr_t content, int64_t serverVersion, ConfigurationType* cfgType) {
		return ((T (*)(ConfigurationLS*, uintptr_t, int64_t, ConfigurationType*))(Il2CppBase() + 0x15E55C0))(this, content, serverVersion, cfgType);
	}
	template <typename T = void> T ConnectionError(ErrorCodes* code) {
		return ((T (*)(ConfigurationLS*, ErrorCodes*))(Il2CppBase() + 0x15E5C90))(this, code);
	}
	template <typename T = void> T UpdateBlueprints(int64_t version, Il2CppDictionary<Il2CppString*, Il2CppString*>* files) {
		return ((T (*)(ConfigurationLS*, int64_t, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x15E5740))(this, version, files);
	}
	template <typename T = uintptr_t> T InitDataContext() {
		return ((T (*)(ConfigurationLS*))(Il2CppBase() + 0x15E5DE4))(this);
	}
	template <typename T = uintptr_t> T LoadConfiguration(IEnumerable1ConfigurationVersion*>* configs) {
		return ((T (*)(ConfigurationLS*, IEnumerable1ConfigurationVersion*>*))(Il2CppBase() + 0x15E5E5C))(this, configs);
	}
	template <typename T = void> T SendWaitMeb__22_0(uintptr_t m) {
		return ((T (*)(ConfigurationLS*, uintptr_t))(Il2CppBase() + 0x15E5EF0))(this, m);
	}

};

