#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class ResourceLoadLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourceLoadLS"));
	}

	template <typename R = ProtoModels::WorldResourcesType> R& _resourcesType() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Disable() {
		return ((R (*)(ResourceLoadLS*))(Il2CppBase() + 0x119C46C))(this);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(ResourceLoadLS*))(Il2CppBase() + 0x119C508))(this);
	}
	template <typename R = void> R OnError() {
		return ((R (*)(ResourceLoadLS*))(Il2CppBase() + 0x119C580))(this);
	}
	template <typename R = void> R OnConnectedToCoordinator(bool connectToGlobalMap, UdpClientConfig* udpConfig, int64_t userID, int64_t sessionID, int64_t worldID, Il2CppString* sceneName, ProtoModels::WorldResourcesType resourcesType) {
		return ((R (*)(ResourceLoadLS*, bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, ProtoModels::WorldResourcesType))(Il2CppBase() + 0x119C874))(this, connectToGlobalMap, udpConfig, userID, sessionID, worldID, sceneName, resourcesType);
	}
	template <typename R = void> R OnErrorb__4_0(int32_t result) {
		return ((R (*)(ResourceLoadLS*, int32_t))(Il2CppBase() + 0x119C87C))(this, result);
	}

};

