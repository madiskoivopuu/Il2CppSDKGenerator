#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class LoginLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginLS"));
	}

	template <typename R = LoginWindow*> R& _loginWindow() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = ProtoTools::ErrorCodes> R& _loginStatus() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = bool> R& _isLoginProcessing() {
		return *(R*)((uintptr_t)this + 0xAC);
	}
	template <typename R = PlatformAuthData> R& _authData() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = LoginClientInfo> R& _clientInfo() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	 static Action5<Il2CppString*, Il2CppString*, IEnumerable1<ConfigurationVersion*>*, int64_t, Il2CppArray<uint8_t>*>*& OnUserLogged() {
		return *(Action5<Il2CppString*, Il2CppString*, IEnumerable1<ConfigurationVersion*>*, int64_t, Il2CppArray<uint8_t>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> R get__canRepeat() {
		return ((R (*)(LoginLS*))(Il2CppBase() + 0x1729250))(this);
	}
	template <typename R = void> static R add_OnUserLogged(Action5<Il2CppString*, Il2CppString*, IEnumerable1<ConfigurationVersion*>*, int64_t, Il2CppArray<uint8_t>*>* value) {
		return ((R (*)(void *, Action5<Il2CppString*, Il2CppString*, IEnumerable1<ConfigurationVersion*>*, int64_t, Il2CppArray<uint8_t>*>*))(Il2CppBase() + 0x1729260))(0, value);
	}
	template <typename R = void> static R remove_OnUserLogged(Action5<Il2CppString*, Il2CppString*, IEnumerable1<ConfigurationVersion*>*, int64_t, Il2CppArray<uint8_t>*>* value) {
		return ((R (*)(void *, Action5<Il2CppString*, Il2CppString*, IEnumerable1<ConfigurationVersion*>*, int64_t, Il2CppArray<uint8_t>*>*))(Il2CppBase() + 0x172931C))(0, value);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(LoginLS*))(Il2CppBase() + 0x17294D4))(this);
	}
	template <typename R = void> R OnServerDefined(PlatformAuthData authData, LoginClientInfo clientInfo) {
		return ((R (*)(LoginLS*, PlatformAuthData, LoginClientInfo))(Il2CppBase() + 0x172954C))(this, authData, clientInfo);
	}
	template <typename R = void> R Disable() {
		return ((R (*)(LoginLS*))(Il2CppBase() + 0x17295A0))(this);
	}
	template <typename R = void> R LoginUser(PlatformAuthData authData, LoginClientInfo info) {
		return ((R (*)(LoginLS*, PlatformAuthData, LoginClientInfo))(Il2CppBase() + 0x172963C))(this, authData, info);
	}
	template <typename R = void> R OnUserLoggedHandler(ProtoTools::ErrorCodes code, Il2CppString* message, int64_t banTime, int32_t banRule) {
		return ((R (*)(LoginLS*, ProtoTools::ErrorCodes, Il2CppString*, int64_t, int32_t))(Il2CppBase() + 0x1729C30))(this, code, message, banTime, banRule);
	}
	template <typename R = void> R ShowServerSelection() {
		return ((R (*)(LoginLS*))(Il2CppBase() + 0x172B998))(this);
	}
	template <typename R = void> R OnUserLoggedHandlerb__15_1(int32_t result) {
		return ((R (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BA88))(this, result);
	}
	template <typename R = void> R OnUserLoggedHandlerb__15_2(int32_t result) {
		return ((R (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BA8C))(this, result);
	}
	template <typename R = void> R OnUserLoggedHandlerb__15_3(int32_t result) {
		return ((R (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BBF4))(this, result);
	}
	template <typename R = void> R OnUserLoggedHandlerb__15_4(int32_t result) {
		return ((R (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BBF8))(this, result);
	}
	template <typename R = void> R OnUserLoggedHandlerb__15_5(int32_t result) {
		return ((R (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BBFC))(this, result);
	}
	template <typename R = void> R OnUserLoggedHandlerb__15_6(int32_t result) {
		return ((R (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BC00))(this, result);
	}
	template <typename R = void> R OnUserLoggedHandlerb__15_7(int32_t result) {
		return ((R (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BC04))(this, result);
	}
	template <typename R = void> R OnUserLoggedHandlerb__15_8(int32_t result) {
		return ((R (*)(LoginLS*, int32_t))(Il2CppBase() + 0x172BC08))(this, result);
	}

};

