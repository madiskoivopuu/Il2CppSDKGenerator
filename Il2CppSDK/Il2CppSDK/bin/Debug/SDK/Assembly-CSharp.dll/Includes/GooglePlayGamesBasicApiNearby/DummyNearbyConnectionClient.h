#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class DummyNearbyConnectionClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "DummyNearbyConnectionClient"));
	}


	template <typename R = int32_t> R MaxUnreliableMessagePayloadLength() {
		return ((R (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306398))(this);
	}
	template <typename R = int32_t> R MaxReliableMessagePayloadLength() {
		return ((R (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x13063A0))(this);
	}
	template <typename R = void> R SendReliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uint8_t>* payload) {
		return ((R (*)(DummyNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x13063A8))(this, recipientEndpointIds, payload);
	}
	template <typename R = void> R SendUnreliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uint8_t>* payload) {
		return ((R (*)(DummyNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x130641C))(this, recipientEndpointIds, payload);
	}
	template <typename R = void> R StartAdvertising(Il2CppString* name, Il2CppList<Il2CppString*>* appIdentifiers, Nullable1<uintptr_t>* advertisingDuration, Action1<GooglePlayGamesBasicApiNearby::AdvertisingResult>* resultCallback, Action1<GooglePlayGamesBasicApiNearby::ConnectionRequest>* connectionRequestCallback) {
		return ((R (*)(DummyNearbyConnectionClient*, Il2CppString*, Il2CppList<Il2CppString*>*, Nullable1<uintptr_t>*, Action1<GooglePlayGamesBasicApiNearby::AdvertisingResult>*, Action1<GooglePlayGamesBasicApiNearby::ConnectionRequest>*))(Il2CppBase() + 0x1306490))(this, name, appIdentifiers, advertisingDuration, resultCallback, connectionRequestCallback);
	}
	template <typename R = void> R StopAdvertising() {
		return ((R (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306528))(this);
	}
	template <typename R = void> R SendConnectionRequest(Il2CppString* name, Il2CppString* remoteEndpointId, Il2CppArray<uint8_t>* payload, Action1<GooglePlayGamesBasicApiNearby::ConnectionResponse>* responseCallback, GooglePlayGamesBasicApiNearby::IMessageListener* listener) {
		return ((R (*)(DummyNearbyConnectionClient*, Il2CppString*, Il2CppString*, Il2CppArray<uint8_t>*, Action1<GooglePlayGamesBasicApiNearby::ConnectionResponse>*, GooglePlayGamesBasicApiNearby::IMessageListener*))(Il2CppBase() + 0x130659C))(this, name, remoteEndpointId, payload, responseCallback, listener);
	}
	template <typename R = void> R AcceptConnectionRequest(Il2CppString* remoteEndpointId, Il2CppArray<uint8_t>* payload, GooglePlayGamesBasicApiNearby::IMessageListener* listener) {
		return ((R (*)(DummyNearbyConnectionClient*, Il2CppString*, Il2CppArray<uint8_t>*, GooglePlayGamesBasicApiNearby::IMessageListener*))(Il2CppBase() + 0x13066C0))(this, remoteEndpointId, payload, listener);
	}
	template <typename R = void> R StartDiscovery(Il2CppString* serviceId, Nullable1<uintptr_t>* advertisingTimeout, GooglePlayGamesBasicApiNearby::IDiscoveryListener* listener) {
		return ((R (*)(DummyNearbyConnectionClient*, Il2CppString*, Nullable1<uintptr_t>*, GooglePlayGamesBasicApiNearby::IDiscoveryListener*))(Il2CppBase() + 0x1306734))(this, serviceId, advertisingTimeout, listener);
	}
	template <typename R = void> R StopDiscovery(Il2CppString* serviceId) {
		return ((R (*)(DummyNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x13067A8))(this, serviceId);
	}
	template <typename R = void> R RejectConnectionRequest(Il2CppString* requestingEndpointId) {
		return ((R (*)(DummyNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x130681C))(this, requestingEndpointId);
	}
	template <typename R = void> R DisconnectFromEndpoint(Il2CppString* remoteEndpointId) {
		return ((R (*)(DummyNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x1306890))(this, remoteEndpointId);
	}
	template <typename R = void> R StopAllConnections() {
		return ((R (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306904))(this);
	}
	template <typename R = Il2CppString*> R LocalEndpointId() {
		return ((R (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306978))(this);
	}
	template <typename R = Il2CppString*> R LocalDeviceId() {
		return ((R (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x13069C4))(this);
	}
	template <typename R = Il2CppString*> R GetAppBundleId() {
		return ((R (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306A08))(this);
	}
	template <typename R = Il2CppString*> R GetServiceId() {
		return ((R (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306A4C))(this);
	}

};

}
