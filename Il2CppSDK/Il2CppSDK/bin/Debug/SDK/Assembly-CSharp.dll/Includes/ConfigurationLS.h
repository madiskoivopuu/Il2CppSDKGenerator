#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class ConfigurationLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationLS"));
	}

	 Action1ProtoTools::ErrorCodes*>*& OnConnectionError() {
		return *(Action1ProtoTools::ErrorCodes*>**)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppString*> R& _mainAddress() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = Il2CppString*> R& _coordinatorAdress() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _currentTime() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int64_t> R& _currentTimeTicks() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = int64_t> R& _timeForSendWaitMe() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& _tokenKey() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	 IEnumerable1ConfigurationVersion*>*& _serverCfgVersions() {
		return *(IEnumerable1ConfigurationVersion*>**)((uintptr_t)this + 0xE0);
	}
	template <typename R = ClientDataContexts*> R& _dataContexts() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = UnityBlueprintLoader*> R& _blueprintLoader() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = Il2CppString*> R& _blueprintPath() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = bool> R& _isDatFromServerExist() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = DataBlueprints*> R& _currentData() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	 Il2CppDictionary<ConfigurationType*, ConfigurationVersion*>*& _currentConfigVersion() {
		return *(Il2CppDictionary<ConfigurationType*, ConfigurationVersion*>**)((uintptr_t)this + 0x118);
	}
	 Il2CppDictionary<ConfigurationType*, Action3int64_t, int64_t, ConfigurationType*>*>*& _configurationActions() {
		return *(Il2CppDictionary<ConfigurationType*, Action3int64_t, int64_t, ConfigurationType*>*>**)((uintptr_t)this + 0x120);
	}

	template <typename R = void> R add_OnConnectionError(Action1ProtoTools::ErrorCodes*>* value) {
		return ((R (*)(ConfigurationLS*, Action1ProtoTools::ErrorCodes*>*))(Il2CppBase() + 0x15E47AC))(this, value);
	}
	template <typename R = void> R remove_OnConnectionError(Action1ProtoTools::ErrorCodes*>* value) {
		return ((R (*)(ConfigurationLS*, Action1ProtoTools::ErrorCodes*>*))(Il2CppBase() + 0x15E484C))(this, value);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(ConfigurationLS*))(Il2CppBase() + 0x15E4E14))(this);
	}
	template <typename R = void> R Disable() {
		return ((R (*)(ConfigurationLS*))(Il2CppBase() + 0x15E4E8C))(this);
	}
	template <typename R = void> R OnUserLogged(Il2CppString* adress, Il2CppString* coordinatorAddress, IEnumerable1ConfigurationVersion*>* cfgVersions, int64_t userID, Il2CppArray<uint8_t>* token) {
		return ((R (*)(ConfigurationLS*, Il2CppString*, Il2CppString*, IEnumerable1ConfigurationVersion*>*, int64_t, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x15E4F1C))(this, adress, coordinatorAddress, cfgVersions, userID, token);
	}
	template <typename R = void> R SendWaitMe() {
		return ((R (*)(ConfigurationLS*))(Il2CppBase() + 0x15E4F90))(this);
	}
	template <typename R = void> R CheckTimeForSendWaitMe() {
		return ((R (*)(ConfigurationLS*))(Il2CppBase() + 0x15E5070))(this);
	}
	template <typename R = void> R LoadLocalization(int64_t currentVersion, int64_t serverVersion, ConfigurationType* cfgType) {
		return ((R (*)(ConfigurationLS*, int64_t, int64_t, ConfigurationType*))(Il2CppBase() + 0x15E5130))(this, currentVersion, serverVersion, cfgType);
	}
	template <typename R = void> R LoadClientConfig(int64_t currentVersion, int64_t serverVersion, ConfigurationType* cfgType) {
		return ((R (*)(ConfigurationLS*, int64_t, int64_t, ConfigurationType*))(Il2CppBase() + 0x15E5408))(this, currentVersion, serverVersion, cfgType);
	}
	template <typename R = void> R OnClientConfigLoaded(uintptr_t content, int64_t serverVersion, ConfigurationType* cfgType) {
		return ((R (*)(ConfigurationLS*, uintptr_t, int64_t, ConfigurationType*))(Il2CppBase() + 0x15E55C0))(this, content, serverVersion, cfgType);
	}
	template <typename R = void> R ConnectionError(ProtoTools::ErrorCodes* code) {
		return ((R (*)(ConfigurationLS*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x15E5C90))(this, code);
	}
	template <typename R = void> R UpdateBlueprints(int64_t version, Il2CppDictionary<Il2CppString*, Il2CppString*>* files) {
		return ((R (*)(ConfigurationLS*, int64_t, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x15E5740))(this, version, files);
	}
	template <typename R = uintptr_t> R InitDataContext() {
		return ((R (*)(ConfigurationLS*))(Il2CppBase() + 0x15E5DE4))(this);
	}
	template <typename R = uintptr_t> R LoadConfiguration(IEnumerable1ConfigurationVersion*>* configs) {
		return ((R (*)(ConfigurationLS*, IEnumerable1ConfigurationVersion*>*))(Il2CppBase() + 0x15E5E5C))(this, configs);
	}
	template <typename R = void> R SendWaitMeb__22_0(uintptr_t m) {
		return ((R (*)(ConfigurationLS*, uintptr_t))(Il2CppBase() + 0x15E5EF0))(this, m);
	}

};

