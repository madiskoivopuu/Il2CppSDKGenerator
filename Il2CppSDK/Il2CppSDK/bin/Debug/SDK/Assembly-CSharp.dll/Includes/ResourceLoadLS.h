#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class ResourceLoadLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourceLoadLS"));
	}

	template <typename T = WorldResourcesType*> T& _resourcesType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Disable() {
		return ((T (*)(ResourceLoadLS*))(Il2CppBase() + 0x119C46C))(this);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(ResourceLoadLS*))(Il2CppBase() + 0x119C508))(this);
	}
	template <typename T = void> T OnError() {
		return ((T (*)(ResourceLoadLS*))(Il2CppBase() + 0x119C580))(this);
	}
	template <typename T = void> T OnConnectedToCoordinator(bool connectToGlobalMap, UdpClientConfig* udpConfig, int64_t userID, int64_t sessionID, int64_t worldID, Il2CppString* sceneName, WorldResourcesType* resourcesType) {
		return ((T (*)(ResourceLoadLS*, bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, WorldResourcesType*))(Il2CppBase() + 0x119C874))(this, connectToGlobalMap, udpConfig, userID, sessionID, worldID, sceneName, resourcesType);
	}
	template <typename T = void> T OnErrorb__4_0(int32_t result) {
		return ((T (*)(ResourceLoadLS*, int32_t))(Il2CppBase() + 0x119C87C))(this, result);
	}

};

