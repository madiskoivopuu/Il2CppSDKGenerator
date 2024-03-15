#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidNearbyConnectionClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidNearbyConnectionClient"));
	}

	template <typename R = uintptr_t> R& mClient() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> static R& NearbyClientId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ApplicationInfoFlags() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppString*> static R& ServiceId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::IMessageListener*> R& mAdvertisingMessageListener() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = int32_t> R MaxUnreliableMessagePayloadLength() {
		return ((R (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B4DC0))(this);
	}
	template <typename R = int32_t> R MaxReliableMessagePayloadLength() {
		return ((R (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B4DC8))(this);
	}
	template <typename R = void> R SendReliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uint8_t>* payload) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x12B4DD0))(this, recipientEndpointIds, payload);
	}
	template <typename R = void> R SendUnreliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uint8_t>* payload) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x12B527C))(this, recipientEndpointIds, payload);
	}
	template <typename R = void> R InternalSend(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uint8_t>* payload) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x12B4DD4))(this, recipientEndpointIds, payload);
	}
	template <typename R = void> R StartAdvertising(Il2CppString* name, Il2CppList<Il2CppString*>* appIdentifiers, Nullable1uintptr_t>* advertisingDuration, Action1GooglePlayGamesBasicApiNearby::AdvertisingResult*>* resultCallback, Action1GooglePlayGamesBasicApiNearby::ConnectionRequest*>* connectionRequestCallback) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppString*, Il2CppList<Il2CppString*>*, Nullable1uintptr_t>*, Action1GooglePlayGamesBasicApiNearby::AdvertisingResult*>*, Action1GooglePlayGamesBasicApiNearby::ConnectionRequest*>*))(Il2CppBase() + 0x12B5280))(this, name, appIdentifiers, advertisingDuration, resultCallback, connectionRequestCallback);
	}
	template <typename R = uintptr_t> R CreateAdvertisingOptions() {
		return ((R (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B5A14))(this);
	}
	template <typename R = void> R StopAdvertising() {
		return ((R (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B5F74))(this);
	}
	template <typename R = void> R SendConnectionRequest(Il2CppString* name, Il2CppString* remoteEndpointId, Il2CppArray<uint8_t>* payload, Action1GooglePlayGamesBasicApiNearby::ConnectionResponse*>* responseCallback, GooglePlayGamesBasicApiNearby::IMessageListener* listener) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppString*, Il2CppString*, Il2CppArray<uint8_t>*, Action1GooglePlayGamesBasicApiNearby::ConnectionResponse*>*, GooglePlayGamesBasicApiNearby::IMessageListener*))(Il2CppBase() + 0x12B6084))(this, name, remoteEndpointId, payload, responseCallback, listener);
	}
	template <typename R = void> R AcceptConnectionRequest(Il2CppString* remoteEndpointId, Il2CppArray<uint8_t>* payload, GooglePlayGamesBasicApiNearby::IMessageListener* listener) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppString*, Il2CppArray<uint8_t>*, GooglePlayGamesBasicApiNearby::IMessageListener*))(Il2CppBase() + 0x12B64E4))(this, remoteEndpointId, payload, listener);
	}
	template <typename R = void> R StartDiscovery(Il2CppString* serviceId, Nullable1uintptr_t>* advertisingDuration, GooglePlayGamesBasicApiNearby::IDiscoveryListener* listener) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppString*, Nullable1uintptr_t>*, GooglePlayGamesBasicApiNearby::IDiscoveryListener*))(Il2CppBase() + 0x12B68F0))(this, serviceId, advertisingDuration, listener);
	}
	template <typename R = uintptr_t> R CreateDiscoveryOptions() {
		return ((R (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B6F94))(this);
	}
	template <typename R = void> R StopDiscovery(Il2CppString* serviceId) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x12B74F4))(this, serviceId);
	}
	template <typename R = void> R RejectConnectionRequest(Il2CppString* requestingEndpointId) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x12B75F4))(this, requestingEndpointId);
	}
	template <typename R = void> R DisconnectFromEndpoint(Il2CppString* remoteEndpointId) {
		return ((R (*)(AndroidNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x12B77AC))(this, remoteEndpointId);
	}
	template <typename R = void> R StopAllConnections() {
		return ((R (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B788C))(this);
	}
	template <typename R = Il2CppString*> R GetAppBundleId() {
		return ((R (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B799C))(this);
	}
	template <typename R = Il2CppString*> R GetServiceId() {
		return ((R (*)(AndroidNearbyConnectionClient*))(Il2CppBase() + 0x12B7BA4))(this);
	}
	template <typename R = Il2CppString*> static R ReadServiceId() {
		return ((R (*)(void *))(Il2CppBase() + 0x12B7C08))(0);
	}
	 static Action1uintptr_t>* ToOnGameThread(Action1uintptr_t>* toConvert) {
		return ((Action1uintptr_t>* (*)(void *, Action1uintptr_t>*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	 static Action2uintptr_t, uintptr_t>* ToOnGameThread_1(Action2uintptr_t, uintptr_t>* toConvert) {
		return ((Action2uintptr_t, uintptr_t>* (*)(void *, Action2uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
