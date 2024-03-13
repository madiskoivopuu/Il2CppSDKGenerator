#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseState.h" 

class LoginState : public BaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginState"));
	}

	template <typename T = ClientSharedContexts*> T& _sharedContexts() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T LoginUser(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* referallID, Il2CppString* firebaseToken, LoginClientInfo* info, Action4ErrorCodes*, Il2CppString*, int64_t, int32_t>* callback) {
		return ((T (*)(LoginState*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, LoginClientInfo*, Action4ErrorCodes*, Il2CppString*, int64_t, int32_t>*))(Il2CppBase() + 0x172BC40))(this, address, deviceId, googleId, gamecenterID, referallID, firebaseToken, info, callback);
	}
	template <typename T = uintptr_t> T Exit(Transition* transition) {
		return ((T (*)(LoginState*, Transition*))(Il2CppBase() + 0x172BF78))(this, transition);
	}

};

