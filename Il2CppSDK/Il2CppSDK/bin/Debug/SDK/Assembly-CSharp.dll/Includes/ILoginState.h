#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILoginState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILoginState"));
	}


	template <typename R = void> R LoginUser(Il2CppString* address, Il2CppString* deviceId, Il2CppString* googleId, Il2CppString* gamecenterID, Il2CppString* referallID, Il2CppString* firebaseToken, LoginClientInfo info, Action4<ProtoTools::ErrorCodes, Il2CppString*, int64_t, int32_t>* callback) {
		return ((R (*)(ILoginState*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, LoginClientInfo, Action4<ProtoTools::ErrorCodes, Il2CppString*, int64_t, int32_t>*))(Il2CppBase() + 0x0))(this, address, deviceId, googleId, gamecenterID, referallID, firebaseToken, info, callback);
	}

};

