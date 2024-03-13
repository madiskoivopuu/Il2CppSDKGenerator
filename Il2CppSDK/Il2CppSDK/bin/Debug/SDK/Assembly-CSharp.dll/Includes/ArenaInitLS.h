#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWorldInitLS.h" 

class ArenaInitLS : public BaseWorldInitLS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaInitLS"));
	}


	template <typename T = void> T OnConnectedToCoordinator(bool connectToGlobalMap, UdpClientConfig* udpConfig, int64_t userID, int64_t sessionID, int64_t worldID, Il2CppString* sceneName, WorldResourcesType* resourceType) {
		return ((T (*)(ArenaInitLS*, bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, WorldResourcesType*))(Il2CppBase() + 0x1E2ACE0))(this, connectToGlobalMap, udpConfig, userID, sessionID, worldID, sceneName, resourceType);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(ArenaInitLS*))(Il2CppBase() + 0x1E2AE2C))(this);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(ArenaInitLS*, float))(Il2CppBase() + 0x1E2AEA4))(this, deltaTime);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(ArenaInitLS*))(Il2CppBase() + 0x1E2AF9C))(this);
	}
	template <typename T = void> T OnLeaveArene(Il2CppString* coordinator, Il2CppString* toLocation) {
		return ((T (*)(ArenaInitLS*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E2B1B4))(this, coordinator, toLocation);
	}
	template <typename T = uintptr_t> T PrewarmAssets() {
		return ((T (*)(ArenaInitLS*))(Il2CppBase() + 0x1E2B300))(this);
	}
	template <typename T = void> T Startb__2_0(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* b) {
		return ((T (*)(ArenaInitLS*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x1E2B35C))(this, b);
	}

};

