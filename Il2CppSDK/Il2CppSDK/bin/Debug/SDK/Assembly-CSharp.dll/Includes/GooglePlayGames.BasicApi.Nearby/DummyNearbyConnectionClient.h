#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class DummyNearbyConnectionClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "DummyNearbyConnectionClient"));
	}


	template <typename T = int32_t> T MaxUnreliableMessagePayloadLength() {
		return ((T (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306398))(this);
	}
	template <typename T = int32_t> T MaxReliableMessagePayloadLength() {
		return ((T (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x13063A0))(this);
	}
	template <typename T = void> T SendReliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(DummyNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13063A8))(this, recipientEndpointIds, payload);
	}
	template <typename T = void> T SendUnreliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(DummyNearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x130641C))(this, recipientEndpointIds, payload);
	}
	template <typename T = void> T StartAdvertising(Il2CppString* name, Il2CppList<Il2CppString*>* appIdentifiers, Nullable1uintptr_t>* advertisingDuration, Action1AdvertisingResult*>* resultCallback, Action1ConnectionRequest*>* connectionRequestCallback) {
		return ((T (*)(DummyNearbyConnectionClient*, Il2CppString*, Il2CppList<Il2CppString*>*, Nullable1uintptr_t>*, Action1AdvertisingResult*>*, Action1ConnectionRequest*>*))(Il2CppBase() + 0x1306490))(this, name, appIdentifiers, advertisingDuration, resultCallback, connectionRequestCallback);
	}
	template <typename T = void> T StopAdvertising() {
		return ((T (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306528))(this);
	}
	template <typename T = void> T SendConnectionRequest(Il2CppString* name, Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, Action1ConnectionResponse*>* responseCallback, IMessageListener* listener) {
		return ((T (*)(DummyNearbyConnectionClient*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Action1ConnectionResponse*>*, IMessageListener*))(Il2CppBase() + 0x130659C))(this, name, remoteEndpointId, payload, responseCallback, listener);
	}
	template <typename T = void> T AcceptConnectionRequest(Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, IMessageListener* listener) {
		return ((T (*)(DummyNearbyConnectionClient*, Il2CppString*, Il2CppArray<uintptr_t>*, IMessageListener*))(Il2CppBase() + 0x13066C0))(this, remoteEndpointId, payload, listener);
	}
	template <typename T = void> T StartDiscovery(Il2CppString* serviceId, Nullable1uintptr_t>* advertisingTimeout, IDiscoveryListener* listener) {
		return ((T (*)(DummyNearbyConnectionClient*, Il2CppString*, Nullable1uintptr_t>*, IDiscoveryListener*))(Il2CppBase() + 0x1306734))(this, serviceId, advertisingTimeout, listener);
	}
	template <typename T = void> T StopDiscovery(Il2CppString* serviceId) {
		return ((T (*)(DummyNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x13067A8))(this, serviceId);
	}
	template <typename T = void> T RejectConnectionRequest(Il2CppString* requestingEndpointId) {
		return ((T (*)(DummyNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x130681C))(this, requestingEndpointId);
	}
	template <typename T = void> T DisconnectFromEndpoint(Il2CppString* remoteEndpointId) {
		return ((T (*)(DummyNearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x1306890))(this, remoteEndpointId);
	}
	template <typename T = void> T StopAllConnections() {
		return ((T (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306904))(this);
	}
	template <typename T = Il2CppString*> T LocalEndpointId() {
		return ((T (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306978))(this);
	}
	template <typename T = Il2CppString*> T LocalDeviceId() {
		return ((T (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x13069C4))(this);
	}
	template <typename T = Il2CppString*> T GetAppBundleId() {
		return ((T (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306A08))(this);
	}
	template <typename T = Il2CppString*> T GetServiceId() {
		return ((T (*)(DummyNearbyConnectionClient*))(Il2CppBase() + 0x1306A4C))(this);
	}

};

}
