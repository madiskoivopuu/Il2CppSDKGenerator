#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseState.h" 

class LoginState : public BaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginState"));
	}

	template <typename R = ClientSharedContexts*> R& _sharedContexts() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R LoginUser(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* referallID, Il2CppString* firebaseToken, LoginClientInfo* info, Action4ProtoTools::ErrorCodes*, Il2CppString*, int64_t, int32_t>* callback) {
		return ((R (*)(LoginState*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, LoginClientInfo*, Action4ProtoTools::ErrorCodes*, Il2CppString*, int64_t, int32_t>*))(Il2CppBase() + 0x172BC40))(this, address, deviceId, googleId, gamecenterID, referallID, firebaseToken, info, callback);
	}
	template <typename R = uintptr_t> R Exit(Transition* transition) {
		return ((R (*)(LoginState*, Transition*))(Il2CppBase() + 0x172BF78))(this, transition);
	}

};

