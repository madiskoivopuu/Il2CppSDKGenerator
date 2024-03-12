#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidNearbyConnectionClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidNearbyConnectionClient"));
	}

	template <typename T = uintptr_t> T& mClient() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> static T& NearbyClientId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ApplicationInfoFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& ServiceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& mAdvertisingMessageListener() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T MaxUnreliableMessagePayloadLength() {
		return ((T (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B4DC0))(this);
	}
	template <typename T = int32_t> T MaxReliableMessagePayloadLength() {
		return ((T (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B4DC8))(this);
	}
	template <typename T = void> T SendReliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12B4DD0))(this, recipientEndpointIds, payload);
	}
	template <typename T = void> T SendUnreliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12B527C))(this, recipientEndpointIds, payload);
	}
	template <typename T = void> T InternalSend(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12B4DD4))(this, recipientEndpointIds, payload);
	}
	template <typename T = void> T StartAdvertising(Il2CppString* name, Il2CppList<Il2CppString*>* appIdentifiers, void* advertisingDuration, void* resultCallback, void* connectionRequestCallback) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppString*, Il2CppList<Il2CppString*>*, void*, void*, void*))(Il2CppBase() + 0x12B5280))(this, name, appIdentifiers, advertisingDuration, resultCallback, connectionRequestCallback);
	}
	template <typename T = uintptr_t> T CreateAdvertisingOptions() {
		return ((T (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B5A14))(this);
	}
	template <typename T = void> T StopAdvertising() {
		return ((T (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B5F74))(this);
	}
	template <typename T = void> T SendConnectionRequest(Il2CppString* name, Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, void* responseCallback, uintptr_t listener) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, void*, uintptr_t))(Il2CppBase() + 0x12B6084))(this, name, remoteEndpointId, payload, responseCallback, listener);
	}
	template <typename T = void> T AcceptConnectionRequest(Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, uintptr_t listener) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x12B64E4))(this, remoteEndpointId, payload, listener);
	}
	template <typename T = void> T StartDiscovery(Il2CppString* serviceId, void* advertisingDuration, uintptr_t listener) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppString*, void*, uintptr_t))(Il2CppBase() + 0x12B68F0))(this, serviceId, advertisingDuration, listener);
	}
	template <typename T = uintptr_t> T CreateDiscoveryOptions() {
		return ((T (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B6F94))(this);
	}
	template <typename T = void> T StopDiscovery(Il2CppString* serviceId) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x12B74F4))(this, serviceId);
	}
	template <typename T = void> T RejectConnectionRequest(Il2CppString* requestingEndpointId) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x12B75F4))(this, requestingEndpointId);
	}
	template <typename T = void> T DisconnectFromEndpoint(Il2CppString* remoteEndpointId) {
		return ((T (*)(AndroidNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x12B77AC))(this, remoteEndpointId);
	}
	template <typename T = void> T StopAllConnections() {
		return ((T (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B788C))(this);
	}
	template <typename T = Il2CppString*> T GetAppBundleId() {
		return ((T (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B799C))(this);
	}
	template <typename T = Il2CppString*> T GetServiceId() {
		return ((T (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B7BA4))(this);
	}
	template <typename T = Il2CppString*> static T ReadServiceId() {
		return ((T (*)(void *))(Il2CppBase() + 0x12B7C08))(0);
	}
	template <typename T = void*> static T ToOnGameThread(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	template <typename T = void*> static T ToOnGameThread_1(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
