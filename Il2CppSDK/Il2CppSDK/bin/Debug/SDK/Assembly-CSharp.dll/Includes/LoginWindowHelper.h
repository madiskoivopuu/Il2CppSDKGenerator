#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoginWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginWindowHelper"));
	}


	template <typename R = LoginWindow*> static R ShowLogin(UIWindowsManager* manager, ILoginState* state, ClientSharedContexts* sharedContexts, Il2CppString* emulatedLoginId, bool toLocalHost, ClientAnalyticsManager* analytics) {
		return ((R (*)(void *, UIWindowsManager*, ILoginState*, ClientSharedContexts*, Il2CppString*, bool, ClientAnalyticsManager*))(Il2CppBase() + 0x1731B5C))(0, manager, state, sharedContexts, emulatedLoginId, toLocalHost, analytics);
	}
	template <typename R = void> static R CloseLogin(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1731C58))(0, manager);
	}

};

