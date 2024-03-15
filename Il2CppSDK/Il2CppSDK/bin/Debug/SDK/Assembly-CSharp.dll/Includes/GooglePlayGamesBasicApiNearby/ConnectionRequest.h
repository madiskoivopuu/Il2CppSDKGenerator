#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class ConnectionRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "ConnectionRequest"));
	}

	template <typename R = GooglePlayGamesBasicApiNearby::EndpointDetails*> R& mRemoteEndpoint() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& mPayload() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = GooglePlayGamesBasicApiNearby::EndpointDetails*> R get_RemoteEndpoint() {
		return ((R (*)(ConnectionRequest*))(Il2CppBase() + 0x15E93B8))(this);
	}
	template <typename R = Il2CppArray<uint8_t>*> R get_Payload() {
		return ((R (*)(ConnectionRequest*))(Il2CppBase() + 0x15E93CC))(this);
	}

};

}
