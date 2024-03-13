#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiscoveringConnectionLifecycleCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiscoveringConnectionLifecycleCallback"));
	}

	template <typename T = Action1ConnectionResponse*>*> T& mResponseCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = IMessageListener*> T& mListener() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mClient() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T onConnectionInitiated(Il2CppString* endpointId, uintptr_t connectionInfo) {
		return ((T (*)(DiscoveringConnectionLifecycleCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1142680))(this, endpointId, connectionInfo);
	}
	template <typename T = void> T onConnectionResult(Il2CppString* endpointId, uintptr_t connectionResolution) {
		return ((T (*)(DiscoveringConnectionLifecycleCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1142AA4))(this, endpointId, connectionResolution);
	}
	template <typename T = void> T onDisconnected(Il2CppString* endpointId) {
		return ((T (*)(DiscoveringConnectionLifecycleCallback*, Il2CppString*))(Il2CppBase() + 0x1142F34))(this, endpointId);
	}

};

