#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UdpClientListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UdpClientListener"));
	}

	template <typename R = uintptr_t> R& NetClient() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& updateTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = UdpClientConfig*> R& Config() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ICommonLogger*> R& Logger() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Action1<uintptr_t>*& OnDisconnectHandler() {
		return *(Action1<uintptr_t>**)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& PollEventsPaused() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Queue1<ValueTuple2<uintptr_t, uintptr_t>*>*& _bufferedEvents() {
		return *(Queue1<ValueTuple2<uintptr_t, uintptr_t>*>**)((uintptr_t)this + 0x40);
	}

	template <typename R = uintptr_t> R get_NetClient() {
		return ((R (*)(UdpClientListener*))(Il2CppBase() + 0x15361E8))(this);
	}
	template <typename R = void> R set_NetClient(uintptr_t value) {
		return ((R (*)(UdpClientListener*, uintptr_t))(Il2CppBase() + 0x15361F0))(this, value);
	}
	template <typename R = void> R Initialize() {
		return ((R (*)(UdpClientListener*))(Il2CppBase() + 0x153634C))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(UdpClientListener*))(Il2CppBase() + 0x15363AC))(this);
	}
	template <typename R = void> R Stop() {
		return ((R (*)(UdpClientListener*))(Il2CppBase() + 0x153651C))(this);
	}
	template <typename R = void> R OnConnectionRequest(uintptr_t request) {
		return ((R (*)(UdpClientListener*, uintptr_t))(Il2CppBase() + 0x1536590))(this, request);
	}
	template <typename R = void> R OnPeerConnected(uintptr_t peer) {
		return ((R (*)(UdpClientListener*, uintptr_t))(Il2CppBase() + 0x1536594))(this, peer);
	}
	template <typename R = void> R OnNetworkError(uintptr_t endPoint, uintptr_t socketError) {
		return ((R (*)(UdpClientListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x15365FC))(this, endPoint, socketError);
	}
	template <typename R = void> R OnNetworkReceive(uintptr_t peer, uintptr_t reader, uint8_t channelId, uintptr_t deliveryMethod) {
		return ((R (*)(UdpClientListener*, uintptr_t, uintptr_t, uint8_t, uintptr_t))(Il2CppBase() + 0x15366E8))(this, peer, reader, channelId, deliveryMethod);
	}
	template <typename R = void> R OnNetworkReceiveUnconnected(uintptr_t remoteEndPoint, uintptr_t reader, uintptr_t messageType) {
		return ((R (*)(UdpClientListener*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x15367FC))(this, remoteEndPoint, reader, messageType);
	}
	template <typename R = void> R OnNetworkLatencyUpdate(uintptr_t peer, int32_t latency) {
		return ((R (*)(UdpClientListener*, uintptr_t, int32_t))(Il2CppBase() + 0x1536800))(this, peer, latency);
	}
	template <typename R = void> R OnPeerDisconnected(uintptr_t peer, uintptr_t disconnectInfo) {
		return ((R (*)(UdpClientListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1536804))(this, peer, disconnectInfo);
	}

};

