#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseState" 

class ConfigurationState: BaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationState"));
	}

	template <typename T = void*> T& OnConnectionError() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _mainAddress() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _coordAddress() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _tokenKey() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _dataContexts() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _blueprintPath() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _blueprintLoader() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _isDatFromServerExist() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _currentData() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _currentConfigVersion() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& _configurationActions() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T add_OnConnectionError(void* value) {
		return ((T (*)(ConfigurationState*, void*))(Il2CppBase() + 0x15E5FF8))(this, value);
	}
	template <typename T = void> T remove_OnConnectionError(void* value) {
		return ((T (*)(ConfigurationState*, void*))(Il2CppBase() + 0x15E6098))(this, value);
	}
	template <typename T = void> T LoadLocalization(int64_t currentVersion, int64_t serverVersion, uintptr_t cfgType) {
		return ((T (*)(ConfigurationState*, int64_t, int64_t, uintptr_t))(Il2CppBase() + 0x15E659C))(this, currentVersion, serverVersion, cfgType);
	}
	template <typename T = void> T LoadClientConfig(int64_t currentVersion, int64_t serverVersion, uintptr_t cfgType) {
		return ((T (*)(ConfigurationState*, int64_t, int64_t, uintptr_t))(Il2CppBase() + 0x15E66F4))(this, currentVersion, serverVersion, cfgType);
	}
	template <typename T = void> T OnClientConfigLoaded(uintptr_t content, int64_t serverVersion, uintptr_t cfgType) {
		return ((T (*)(ConfigurationState*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x15E68AC))(this, content, serverVersion, cfgType);
	}
	template <typename T = void> T ConnectionError(uintptr_t code) {
		return ((T (*)(ConfigurationState*, uintptr_t))(Il2CppBase() + 0x15E7098))(this, code);
	}
	template <typename T = void> T UpdateBlueprints(int64_t version, Il2CppDictionary<Il2CppString*, Il2CppString*>* files) {
		return ((T (*)(ConfigurationState*, int64_t, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x15E6ACC))(this, version, files);
	}
	template <typename T = uintptr_t> T Enter(uintptr_t transition) {
		return ((T (*)(ConfigurationState*, uintptr_t))(Il2CppBase() + 0x15E71E0))(this, transition);
	}
	template <typename T = uintptr_t> T Exit(uintptr_t transition) {
		return ((T (*)(ConfigurationState*, uintptr_t))(Il2CppBase() + 0x15E74A0))(this, transition);
	}
	template <typename T = uintptr_t> T LoadConfiguration(void* configs) {
		return ((T (*)(ConfigurationState*, void*))(Il2CppBase() + 0x15E740C))(this, configs);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(ConfigurationState*, float))(Il2CppBase() + 0x15E7518))(this, deltaTime);
	}

};

}
