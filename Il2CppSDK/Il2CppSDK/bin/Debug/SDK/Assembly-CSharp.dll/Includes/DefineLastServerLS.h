#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class DefineLastServerLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DefineLastServerLS"));
	}

	template <typename R = PlatformAuthData*> R& _authData() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = LoginClientInfo*> R& _clientInfo() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	 ConcurrentDictionary2Il2CppString*, int64_t>*& _lastVisited() {
		return *(ConcurrentDictionary2Il2CppString*, int64_t>**)((uintptr_t)this + 0x110);
	}
	template <typename R = int32_t> R& _serverCheckedCount() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = int32_t> R& _serverToCheckCount() {
		return *(R*)((uintptr_t)this + 0x11C);
	}
	template <typename R = Config*> R& _config() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	 static Action2PlatformAuthData*, LoginClientInfo*>*& OnServerDefined() {
		return *(Action2PlatformAuthData*, LoginClientInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> static R add_OnServerDefined(Action2PlatformAuthData*, LoginClientInfo*>* value) {
		return ((R (*)(void *, Action2PlatformAuthData*, LoginClientInfo*>*))(Il2CppBase() + 0xEB7454))(0, value);
	}
	template <typename R = void> static R remove_OnServerDefined(Action2PlatformAuthData*, LoginClientInfo*>* value) {
		return ((R (*)(void *, Action2PlatformAuthData*, LoginClientInfo*>*))(Il2CppBase() + 0xEB7510))(0, value);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(DefineLastServerLS*))(Il2CppBase() + 0xEB76D0))(this);
	}
	template <typename R = void> R Disable() {
		return ((R (*)(DefineLastServerLS*))(Il2CppBase() + 0xEB7748))(this);
	}
	template <typename R = void> R PlatformAuthenticated(PlatformAuthData* authData, LoginClientInfo* clientInfo) {
		return ((R (*)(DefineLastServerLS*, PlatformAuthData*, LoginClientInfo*))(Il2CppBase() + 0xEB77E4))(this, authData, clientInfo);
	}
	template <typename R = uintptr_t> R Repeat() {
		return ((R (*)(DefineLastServerLS*))(Il2CppBase() + 0xEB7838))(this);
	}
	template <typename R = void> R GetLastVisit(ProtoModels::ServerInfo* serverInfo) {
		return ((R (*)(DefineLastServerLS*, ProtoModels::ServerInfo*))(Il2CppBase() + 0xEB78B0))(this, serverInfo);
	}
	template <typename R = void> R SetLastServer(Il2CppArray<ProtoModels::ServerInfo*>* serverInfos) {
		return ((R (*)(DefineLastServerLS*, Il2CppArray<ProtoModels::ServerInfo*>*))(Il2CppBase() + 0xEB7BEC))(this, serverInfos);
	}
	template <typename R = void> R Repeatb__13_0() {
		return ((R (*)(DefineLastServerLS*))(Il2CppBase() + 0xEB8258))(this);
	}

};

