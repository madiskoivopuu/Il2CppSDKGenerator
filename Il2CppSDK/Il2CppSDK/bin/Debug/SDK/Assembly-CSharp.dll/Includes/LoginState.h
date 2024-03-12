#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseState" 

class LoginState: BaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginState"));
	}

	template <typename T = uintptr_t> T& _sharedContexts() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T LoginUser(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* referallID, Il2CppString* firebaseToken, uintptr_t info, void* callback) {
		return ((T (*)(LoginState*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x172BC40))(this, address, deviceId, googleId, gamecenterID, referallID, firebaseToken, info, callback);
	}
	template <typename T = uintptr_t> T Exit(uintptr_t transition) {
		return ((T (*)(LoginState*, uintptr_t))(Il2CppBase() + 0x172BF78))(this, transition);
	}

};

}
