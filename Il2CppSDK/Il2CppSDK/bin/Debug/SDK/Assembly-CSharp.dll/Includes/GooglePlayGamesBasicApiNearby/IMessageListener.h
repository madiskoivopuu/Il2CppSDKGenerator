#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class IMessageListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "IMessageListener"));
	}


	template <typename R = void> R OnMessageReceived(Il2CppString* remoteEndpointId, Il2CppArray<uint8_t>* data, bool isReliableMessage) {
		return ((R (*)(IMessageListener*, Il2CppString*, Il2CppArray<uint8_t>*, bool))(Il2CppBase() + 0x0))(this, remoteEndpointId, data, isReliableMessage);
	}
	template <typename R = void> R OnRemoteEndpointDisconnected(Il2CppString* remoteEndpointId) {
		return ((R (*)(IMessageListener*, Il2CppString*))(Il2CppBase() + 0x0))(this, remoteEndpointId);
	}

};

}
