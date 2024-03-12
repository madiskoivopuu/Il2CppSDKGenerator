#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWorldInitLS" 

class ArenaInitLS: BaseWorldInitLS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaInitLS"));
	}


	template <typename T = void> T OnConnectedToCoordinator(bool connectToGlobalMap, uintptr_t udpConfig, int64_t userID, int64_t sessionID, int64_t worldID, Il2CppString* sceneName, uintptr_t resourceType) {
		return ((T (*)(ArenaInitLS*, bool, uintptr_t, int64_t, int64_t, int64_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1E2ACE0))(this, connectToGlobalMap, udpConfig, userID, sessionID, worldID, sceneName, resourceType);
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
	template <typename T = void> T Startb__2_0(Il2CppList<void*>* b) {
		return ((T (*)(ArenaInitLS*, Il2CppList<void*>*))(Il2CppBase() + 0x1E2B35C))(this, b);
	}

};

}
