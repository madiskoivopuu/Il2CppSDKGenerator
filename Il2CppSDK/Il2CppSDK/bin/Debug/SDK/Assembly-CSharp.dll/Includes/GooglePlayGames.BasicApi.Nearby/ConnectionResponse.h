#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class ConnectionResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "ConnectionResponse"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyPayload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mLocalClientId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& mRemoteEndpointId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Status*> T& mResponseStatus() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mPayload() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int64_t> T get_LocalClientId() {
		return ((T (*)(ConnectionResponse*))(Il2CppBase() + 0x15E9488))(this);
	}
	template <typename T = Il2CppString*> T get_RemoteEndpointId() {
		return ((T (*)(ConnectionResponse*))(Il2CppBase() + 0x15E9490))(this);
	}
	template <typename T = Status*> T get_ResponseStatus() {
		return ((T (*)(ConnectionResponse*))(Il2CppBase() + 0x15E9498))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Payload() {
		return ((T (*)(ConnectionResponse*))(Il2CppBase() + 0x15E94A0))(this);
	}
	template <typename T = ConnectionResponse*> static T Rejected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E94A8))(0, localClientId, remoteEndpointId);
	}
	template <typename T = ConnectionResponse*> static T NetworkNotConnected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E9538))(0, localClientId, remoteEndpointId);
	}
	template <typename T = ConnectionResponse*> static T InternalError(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E95C8))(0, localClientId, remoteEndpointId);
	}
	template <typename T = ConnectionResponse*> static T EndpointNotConnected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E9658))(0, localClientId, remoteEndpointId);
	}
	template <typename T = ConnectionResponse*> static T Accepted(int64_t localClientId, Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(void *, int64_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15E96E8))(0, localClientId, remoteEndpointId, payload);
	}
	template <typename T = ConnectionResponse*> static T AlreadyConnected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E9708))(0, localClientId, remoteEndpointId);
	}

};

}
