#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep" 

class PlatformAuthLS: BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformAuthLS"));
	}

	template <typename T = uintptr_t> T& _loginWindow() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _isPlatformAuthenticated() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> static T& OnPlatformAuthenticated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T add_OnPlatformAuthenticated(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x16F893C))(0, value);
	}
	template <typename T = void> static T remove_OnPlatformAuthenticated(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x16F89F8))(0, value);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(PlatformAuthLS*))(Il2CppBase() + 0x16F8B50))(this);
	}
	template <typename T = void> T PlatformAuthenticated(uintptr_t authData, uintptr_t info) {
		return ((T (*)(PlatformAuthLS*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16F8BC8))(this, authData, info);
	}

};

}
