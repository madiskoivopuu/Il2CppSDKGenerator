#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UdpClientListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UdpClientListener"));
	}

	template <typename T = uintptr_t> T& NetClient() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& updateTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Config() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Logger() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& OnDisconnectHandler() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& PollEventsPaused() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& _bufferedEvents() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T get_NetClient() {
		return ((T (*)(UdpClientListener*))(Il2CppBase() + 0x15361E8))(this);
	}
	template <typename T = void> T set_NetClient(uintptr_t value) {
		return ((T (*)(UdpClientListener*, uintptr_t))(Il2CppBase() + 0x15361F0))(this, value);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(UdpClientListener*))(Il2CppBase() + 0x153634C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(UdpClientListener*))(Il2CppBase() + 0x15363AC))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(UdpClientListener*))(Il2CppBase() + 0x153651C))(this);
	}
	template <typename T = void> T OnConnectionRequest(uintptr_t request) {
		return ((T (*)(UdpClientListener*, uintptr_t))(Il2CppBase() + 0x1536590))(this, request);
	}
	template <typename T = void> T OnPeerConnected(uintptr_t peer) {
		return ((T (*)(UdpClientListener*, uintptr_t))(Il2CppBase() + 0x1536594))(this, peer);
	}
	template <typename T = void> T OnNetworkError(uintptr_t endPoint, uintptr_t socketError) {
		return ((T (*)(UdpClientListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x15365FC))(this, endPoint, socketError);
	}
	template <typename T = void> T OnNetworkReceive(uintptr_t peer, uintptr_t reader, unsigned char channelId, uintptr_t deliveryMethod) {
		return ((T (*)(UdpClientListener*, uintptr_t, uintptr_t, unsigned char, uintptr_t))(Il2CppBase() + 0x15366E8))(this, peer, reader, channelId, deliveryMethod);
	}
	template <typename T = void> T OnNetworkReceiveUnconnected(uintptr_t remoteEndPoint, uintptr_t reader, uintptr_t messageType) {
		return ((T (*)(UdpClientListener*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x15367FC))(this, remoteEndPoint, reader, messageType);
	}
	template <typename T = void> T OnNetworkLatencyUpdate(uintptr_t peer, int32_t latency) {
		return ((T (*)(UdpClientListener*, uintptr_t, int32_t))(Il2CppBase() + 0x1536800))(this, peer, latency);
	}
	template <typename T = void> T OnPeerDisconnected(uintptr_t peer, uintptr_t disconnectInfo) {
		return ((T (*)(UdpClientListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1536804))(this, peer, disconnectInfo);
	}

};

}
