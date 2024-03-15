#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnGameThreadMessageListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGameThreadMessageListener"));
	}

	template <typename R = GooglePlayGamesBasicApiNearby::IMessageListener*> R& mListener() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R OnMessageReceived(Il2CppString* remoteEndpointId, Il2CppArray<uint8_t>* data, bool isReliableMessage) {
		return ((R (*)(OnGameThreadMessageListener*, Il2CppString*, Il2CppArray<uint8_t>*, bool))(Il2CppBase() + 0x1143708))(this, remoteEndpointId, data, isReliableMessage);
	}
	template <typename R = void> R OnRemoteEndpointDisconnected(Il2CppString* remoteEndpointId) {
		return ((R (*)(OnGameThreadMessageListener*, Il2CppString*))(Il2CppBase() + 0x1143834))(this, remoteEndpointId);
	}

};

