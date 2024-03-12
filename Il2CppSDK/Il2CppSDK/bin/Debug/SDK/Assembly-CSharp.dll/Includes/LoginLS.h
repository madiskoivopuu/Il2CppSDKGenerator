#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep" 

class LoginLS: BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginLS"));
	}

	template <typename T = uintptr_t> T& _loginWindow() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _loginStatus() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _isLoginProcessing() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& _authData() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _clientInfo() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> static T& OnUserLogged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get__canRepeat() {
		return ((T (*)(LoginLS*))(Il2CppBase() + 0x1729250))(this);
	}
	template <typename T = void> static T add_OnUserLogged(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1729260))(0, value);
	}
	template <typename T = void> static T remove_OnUserLogged(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x172931C))(0, value);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(LoginLS*))(Il2CppBase() + 0x17294D4))(this);
	}
	template <typename T = void> T OnServerDefined(uintptr_t authData, uintptr_t clientInfo) {
		return ((T (*)(LoginLS*, uintptr_t, uintptr_t))(Il2CppBase() + 0x172954C))(this, authData, clientInfo);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(LoginLS*))(Il2CppBase() + 0x17295A0))(this);
	}
	template <typename T = void> T LoginUser(uintptr_t authData, uintptr_t info) {
		return ((T (*)(LoginLS*, uintptr_t, uintptr_t))(Il2CppBase() + 0x172963C))(this, authData, info);
	}
	template <typename T = void> T OnUserLoggedHandler(uintptr_t code, Il2CppString* message, int64_t banTime, int32_t banRule) {
		return ((T (*)(LoginLS*, uintptr_t, Il2CppString*, int64_t, int32_t))(Il2CppBase() + 0x1729C30))(this, code, message, banTime, banRule);
	}
	template <typename T = void> T ShowServerSelection() {
		return ((T (*)(LoginLS*))(Il2CppBase() + 0x172B998))(this);
	}
	template <typename T = void> T OnUserLoggedHandlerb__15_1(int32_t result) {
		return ((T (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BA88))(this, result);
	}
	template <typename T = void> T OnUserLoggedHandlerb__15_2(int32_t result) {
		return ((T (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BA8C))(this, result);
	}
	template <typename T = void> T OnUserLoggedHandlerb__15_3(int32_t result) {
		return ((T (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BBF4))(this, result);
	}
	template <typename T = void> T OnUserLoggedHandlerb__15_4(int32_t result) {
		return ((T (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BBF8))(this, result);
	}
	template <typename T = void> T OnUserLoggedHandlerb__15_5(int32_t result) {
		return ((T (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BBFC))(this, result);
	}
	template <typename T = void> T OnUserLoggedHandlerb__15_6(int32_t result) {
		return ((T (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BC00))(this, result);
	}
	template <typename T = void> T OnUserLoggedHandlerb__15_7(int32_t result) {
		return ((T (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BC04))(this, result);
	}
	template <typename T = void> T OnUserLoggedHandlerb__15_8(int32_t result) {
		return ((T (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BC08))(this, result);
	}

};

}
