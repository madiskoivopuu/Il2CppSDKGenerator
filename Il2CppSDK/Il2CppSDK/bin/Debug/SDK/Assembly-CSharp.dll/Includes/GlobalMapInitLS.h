#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWorldInitLS.h" 

class GlobalMapInitLS : public BaseWorldInitLS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalMapInitLS"));
	}


	template <typename T = void> T OnConnectedToCoordinator(bool connectToGlobalMap, UdpClientConfig* udpConfig, int64_t userID, int64_t sessionID, int64_t worldID, Il2CppString* sceneName, WorldResourcesType* resourceType) {
		return ((T (*)(GlobalMapInitLS*, bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, WorldResourcesType*))(Il2CppBase() + 0x12D8348))(this, connectToGlobalMap, udpConfig, userID, sessionID, worldID, sceneName, resourceType);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(GlobalMapInitLS*))(Il2CppBase() + 0x12D84A4))(this);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(GlobalMapInitLS*, float))(Il2CppBase() + 0x12D851C))(this, deltaTime);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(GlobalMapInitLS*))(Il2CppBase() + 0x12D8614))(this);
	}
	template <typename T = void> T OnEnterLocation(Il2CppString* coordinator) {
		return ((T (*)(GlobalMapInitLS*, Il2CppString*))(Il2CppBase() + 0x12D8828))(this, coordinator);
	}
	template <typename T = void> T Startb__2_0(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* b) {
		return ((T (*)(GlobalMapInitLS*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x12D8A20))(this, b);
	}

};

