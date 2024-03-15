#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseState.h" 

class ConfigurationState : public BaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationState"));
	}

	 Action1ProtoTools::ErrorCodes*>*& OnConnectionError() {
		return *(Action1ProtoTools::ErrorCodes*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& _mainAddress() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& _coordAddress() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& _tokenKey() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = ClientDataContexts*> R& _dataContexts() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& _blueprintPath() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = IBlueprintLoader*> R& _blueprintLoader() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& _isDatFromServerExist() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = DataBlueprints*> R& _currentData() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	 Il2CppDictionary<ConfigurationType*, ConfigurationVersion*>*& _currentConfigVersion() {
		return *(Il2CppDictionary<ConfigurationType*, ConfigurationVersion*>**)((uintptr_t)this + 0x88);
	}
	 Il2CppDictionary<ConfigurationType*, Action3int64_t, int64_t, ConfigurationType*>*>*& _configurationActions() {
		return *(Il2CppDictionary<ConfigurationType*, Action3int64_t, int64_t, ConfigurationType*>*>**)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R add_OnConnectionError(Action1ProtoTools::ErrorCodes*>* value) {
		return ((R (*)(ConfigurationState*, Action1ProtoTools::ErrorCodes*>*))(Il2CppBase() + 0x15E5FF8))(this, value);
	}
	template <typename R = void> R remove_OnConnectionError(Action1ProtoTools::ErrorCodes*>* value) {
		return ((R (*)(ConfigurationState*, Action1ProtoTools::ErrorCodes*>*))(Il2CppBase() + 0x15E6098))(this, value);
	}
	template <typename R = void> R LoadLocalization(int64_t currentVersion, int64_t serverVersion, ConfigurationType* cfgType) {
		return ((R (*)(ConfigurationState*, int64_t, int64_t, ConfigurationType*))(Il2CppBase() + 0x15E659C))(this, currentVersion, serverVersion, cfgType);
	}
	template <typename R = void> R LoadClientConfig(int64_t currentVersion, int64_t serverVersion, ConfigurationType* cfgType) {
		return ((R (*)(ConfigurationState*, int64_t, int64_t, ConfigurationType*))(Il2CppBase() + 0x15E66F4))(this, currentVersion, serverVersion, cfgType);
	}
	template <typename R = void> R OnClientConfigLoaded(uintptr_t content, int64_t serverVersion, ConfigurationType* cfgType) {
		return ((R (*)(ConfigurationState*, uintptr_t, int64_t, ConfigurationType*))(Il2CppBase() + 0x15E68AC))(this, content, serverVersion, cfgType);
	}
	template <typename R = void> R ConnectionError(ProtoTools::ErrorCodes* code) {
		return ((R (*)(ConfigurationState*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x15E7098))(this, code);
	}
	template <typename R = void> R UpdateBlueprints(int64_t version, Il2CppDictionary<Il2CppString*, Il2CppString*>* files) {
		return ((R (*)(ConfigurationState*, int64_t, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x15E6ACC))(this, version, files);
	}
	template <typename R = uintptr_t> R Enter(Transition* transition) {
		return ((R (*)(ConfigurationState*, Transition*))(Il2CppBase() + 0x15E71E0))(this, transition);
	}
	template <typename R = uintptr_t> R Exit(Transition* transition) {
		return ((R (*)(ConfigurationState*, Transition*))(Il2CppBase() + 0x15E74A0))(this, transition);
	}
	template <typename R = uintptr_t> R LoadConfiguration(IEnumerable1ConfigurationVersion*>* configs) {
		return ((R (*)(ConfigurationState*, IEnumerable1ConfigurationVersion*>*))(Il2CppBase() + 0x15E740C))(this, configs);
	}
	template <typename R = void> R OnUpdate(float deltaTime) {
		return ((R (*)(ConfigurationState*, float))(Il2CppBase() + 0x15E7518))(this, deltaTime);
	}

};

