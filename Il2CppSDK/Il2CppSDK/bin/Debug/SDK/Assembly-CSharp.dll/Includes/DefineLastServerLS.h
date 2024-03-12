#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep" 

class DefineLastServerLS: BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DefineLastServerLS"));
	}

	template <typename T = uintptr_t> T& _authData() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _clientInfo() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = void*> T& _lastVisited() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& _serverCheckedCount() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& _serverToCheckCount() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& _config() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = void*> static T& OnServerDefined() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T add_OnServerDefined(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xEB7454))(0, value);
	}
	template <typename T = void> static T remove_OnServerDefined(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xEB7510))(0, value);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(DefineLastServerLS*))(Il2CppBase() + 0xEB76D0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(DefineLastServerLS*))(Il2CppBase() + 0xEB7748))(this);
	}
	template <typename T = void> T PlatformAuthenticated(uintptr_t authData, uintptr_t clientInfo) {
		return ((T (*)(DefineLastServerLS*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEB77E4))(this, authData, clientInfo);
	}
	template <typename T = uintptr_t> T Repeat() {
		return ((T (*)(DefineLastServerLS*))(Il2CppBase() + 0xEB7838))(this);
	}
	template <typename T = void> T GetLastVisit(uintptr_t serverInfo) {
		return ((T (*)(DefineLastServerLS*, uintptr_t))(Il2CppBase() + 0xEB78B0))(this, serverInfo);
	}
	template <typename T = void> T SetLastServer(Il2CppArray<uintptr_t>* serverInfos) {
		return ((T (*)(DefineLastServerLS*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xEB7BEC))(this, serverInfos);
	}
	template <typename T = void> T Repeatb__13_0() {
		return ((T (*)(DefineLastServerLS*))(Il2CppBase() + 0xEB8258))(this);
	}

};

}
