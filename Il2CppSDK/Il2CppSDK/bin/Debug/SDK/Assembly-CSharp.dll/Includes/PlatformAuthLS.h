#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class PlatformAuthLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformAuthLS"));
	}

	template <typename T = LoginWindow*> T& _loginWindow() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _isPlatformAuthenticated() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Action2PlatformAuthData*, LoginClientInfo*>*> static T& OnPlatformAuthenticated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T add_OnPlatformAuthenticated(Action2PlatformAuthData*, LoginClientInfo*>* value) {
		return ((T (*)(void *, Action2PlatformAuthData*, LoginClientInfo*>*))(Il2CppBase() + 0x16F893C))(0, value);
	}
	template <typename T = void> static T remove_OnPlatformAuthenticated(Action2PlatformAuthData*, LoginClientInfo*>* value) {
		return ((T (*)(void *, Action2PlatformAuthData*, LoginClientInfo*>*))(Il2CppBase() + 0x16F89F8))(0, value);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(PlatformAuthLS*))(Il2CppBase() + 0x16F8B50))(this);
	}
	template <typename T = void> T PlatformAuthenticated(PlatformAuthData* authData, LoginClientInfo* info) {
		return ((T (*)(PlatformAuthLS*, PlatformAuthData*, LoginClientInfo*))(Il2CppBase() + 0x16F8BC8))(this, authData, info);
	}

};

