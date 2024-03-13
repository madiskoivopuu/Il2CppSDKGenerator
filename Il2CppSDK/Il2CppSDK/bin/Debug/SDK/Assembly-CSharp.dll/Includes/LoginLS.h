#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class LoginLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginLS"));
	}

	template <typename T = LoginWindow*> T& _loginWindow() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = ErrorCodes*> T& _loginStatus() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _isLoginProcessing() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = PlatformAuthData*> T& _authData() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = LoginClientInfo*> T& _clientInfo() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Action5Il2CppString*, Il2CppString*, IEnumerable1ConfigurationVersion*>*, int64_t, Il2CppArray<uintptr_t>*>*> static T& OnUserLogged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get__canRepeat() {
		return ((T (*)(LoginLS*))(Il2CppBase() + 0x1729250))(this);
	}
	template <typename T = void> static T add_OnUserLogged(Action5Il2CppString*, Il2CppString*, IEnumerable1ConfigurationVersion*>*, int64_t, Il2CppArray<uintptr_t>*>* value) {
		return ((T (*)(void *, Action5Il2CppString*, Il2CppString*, IEnumerable1ConfigurationVersion*>*, int64_t, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1729260))(0, value);
	}
	template <typename T = void> static T remove_OnUserLogged(Action5Il2CppString*, Il2CppString*, IEnumerable1ConfigurationVersion*>*, int64_t, Il2CppArray<uintptr_t>*>* value) {
		return ((T (*)(void *, Action5Il2CppString*, Il2CppString*, IEnumerable1ConfigurationVersion*>*, int64_t, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x172931C))(0, value);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(LoginLS*))(Il2CppBase() + 0x17294D4))(this);
	}
	template <typename T = void> T OnServerDefined(PlatformAuthData* authData, LoginClientInfo* clientInfo) {
		return ((T (*)(LoginLS*, PlatformAuthData*, LoginClientInfo*))(Il2CppBase() + 0x172954C))(this, authData, clientInfo);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(LoginLS*))(Il2CppBase() + 0x17295A0))(this);
	}
	template <typename T = void> T LoginUser(PlatformAuthData* authData, LoginClientInfo* info) {
		return ((T (*)(LoginLS*, PlatformAuthData*, LoginClientInfo*))(Il2CppBase() + 0x172963C))(this, authData, info);
	}
	template <typename T = void> T OnUserLoggedHandler(ErrorCodes* code, Il2CppString* message, int64_t banTime, int32_t banRule) {
		return ((T (*)(LoginLS*, ErrorCodes*, Il2CppString*, int64_t, int32_t))(Il2CppBase() + 0x1729C30))(this, code, message, banTime, banRule);
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

