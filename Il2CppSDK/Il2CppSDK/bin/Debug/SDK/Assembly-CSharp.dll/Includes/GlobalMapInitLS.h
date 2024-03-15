#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWorldInitLS.h" 

class GlobalMapInitLS : public BaseWorldInitLS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalMapInitLS"));
	}


	template <typename R = void> R OnConnectedToCoordinator(bool connectToGlobalMap, UdpClientConfig* udpConfig, int64_t userID, int64_t sessionID, int64_t worldID, Il2CppString* sceneName, ProtoModels::WorldResourcesType* resourceType) {
		return ((R (*)(GlobalMapInitLS*, bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x12D8348))(this, connectToGlobalMap, udpConfig, userID, sessionID, worldID, sceneName, resourceType);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(GlobalMapInitLS*))(Il2CppBase() + 0x12D84A4))(this);
	}
	template <typename R = void> R OnUpdate(float deltaTime) {
		return ((R (*)(GlobalMapInitLS*, float))(Il2CppBase() + 0x12D851C))(this, deltaTime);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(GlobalMapInitLS*))(Il2CppBase() + 0x12D8614))(this);
	}
	template <typename R = void> R OnEnterLocation(Il2CppString* coordinator) {
		return ((R (*)(GlobalMapInitLS*, Il2CppString*))(Il2CppBase() + 0x12D8828))(this, coordinator);
	}
	template <typename R = void> R Startb__2_0(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* b) {
		return ((R (*)(GlobalMapInitLS*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x12D8A20))(this, b);
	}

};

