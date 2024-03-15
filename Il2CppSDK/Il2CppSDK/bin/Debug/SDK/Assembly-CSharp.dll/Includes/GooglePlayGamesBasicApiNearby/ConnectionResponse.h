#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class ConnectionResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "ConnectionResponse"));
	}

	template <typename R = Il2CppArray<uint8_t>*> static R& EmptyPayload() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mLocalClientId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& mRemoteEndpointId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Status> R& mResponseStatus() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& mPayload() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = int64_t> R get_LocalClientId() {
		return ((R (*)(ConnectionResponse*))(Il2CppBase() + 0x15E9488))(this);
	}
	template <typename R = Il2CppString*> R get_RemoteEndpointId() {
		return ((R (*)(ConnectionResponse*))(Il2CppBase() + 0x15E9490))(this);
	}
	template <typename R = Status> R get_ResponseStatus() {
		return ((R (*)(ConnectionResponse*))(Il2CppBase() + 0x15E9498))(this);
	}
	template <typename R = Il2CppArray<uint8_t>*> R get_Payload() {
		return ((R (*)(ConnectionResponse*))(Il2CppBase() + 0x15E94A0))(this);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::ConnectionResponse> static R Rejected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((R (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E94A8))(0, localClientId, remoteEndpointId);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::ConnectionResponse> static R NetworkNotConnected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((R (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E9538))(0, localClientId, remoteEndpointId);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::ConnectionResponse> static R InternalError(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((R (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E95C8))(0, localClientId, remoteEndpointId);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::ConnectionResponse> static R EndpointNotConnected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((R (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E9658))(0, localClientId, remoteEndpointId);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::ConnectionResponse> static R Accepted(int64_t localClientId, Il2CppString* remoteEndpointId, Il2CppArray<uint8_t>* payload) {
		return ((R (*)(void *, int64_t, Il2CppString*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x15E96E8))(0, localClientId, remoteEndpointId, payload);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::ConnectionResponse> static R AlreadyConnected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((R (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x15E9708))(0, localClientId, remoteEndpointId);
	}

};

}
