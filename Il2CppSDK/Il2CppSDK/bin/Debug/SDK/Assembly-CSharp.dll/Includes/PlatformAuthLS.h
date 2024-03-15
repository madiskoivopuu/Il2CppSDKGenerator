#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class PlatformAuthLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformAuthLS"));
	}

	template <typename R = LoginWindow*> R& _loginWindow() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = bool> R& _isPlatformAuthenticated() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	 static Action2PlatformAuthData*, LoginClientInfo*>*& OnPlatformAuthenticated() {
		return *(Action2PlatformAuthData*, LoginClientInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> static R add_OnPlatformAuthenticated(Action2PlatformAuthData*, LoginClientInfo*>* value) {
		return ((R (*)(void *, Action2PlatformAuthData*, LoginClientInfo*>*))(Il2CppBase() + 0x16F893C))(0, value);
	}
	template <typename R = void> static R remove_OnPlatformAuthenticated(Action2PlatformAuthData*, LoginClientInfo*>* value) {
		return ((R (*)(void *, Action2PlatformAuthData*, LoginClientInfo*>*))(Il2CppBase() + 0x16F89F8))(0, value);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(PlatformAuthLS*))(Il2CppBase() + 0x16F8B50))(this);
	}
	template <typename R = void> R PlatformAuthenticated(PlatformAuthData* authData, LoginClientInfo* info) {
		return ((R (*)(PlatformAuthLS*, PlatformAuthData*, LoginClientInfo*))(Il2CppBase() + 0x16F8BC8))(this, authData, info);
	}

};

