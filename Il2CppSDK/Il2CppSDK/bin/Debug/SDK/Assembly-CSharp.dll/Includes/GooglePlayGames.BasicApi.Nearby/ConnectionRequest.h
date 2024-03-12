#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class ConnectionRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "ConnectionRequest"));
	}

	template <typename T = uintptr_t> T& mRemoteEndpoint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mPayload() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_RemoteEndpoint() {
		return ((T (*)(ConnectionRequest*))(Il2CppBase() + 0x15E93B8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Payload() {
		return ((T (*)(ConnectionRequest*))(Il2CppBase() + 0x15E93CC))(this);
	}

};

}
