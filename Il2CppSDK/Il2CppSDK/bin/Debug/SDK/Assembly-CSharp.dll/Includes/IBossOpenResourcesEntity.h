#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBossOpenResourcesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBossOpenResourcesEntity"));
	}


	template <typename T = uintptr_t> T get_bossOpenResources() {
		return ((T (*)(IBossOpenResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBossOpenResources() {
		return ((T (*)(IBossOpenResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBossOpenResources(uintptr_t newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<uintptr_t>* newOpenPortalItems, Il2CppArray<uintptr_t>* newBosses) {
		return ((T (*)(IBossOpenResourcesEntity*, uintptr_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename T = void> T ReplaceBossOpenResources(uintptr_t newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<uintptr_t>* newOpenPortalItems, Il2CppArray<uintptr_t>* newBosses) {
		return ((T (*)(IBossOpenResourcesEntity*, uintptr_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename T = void> T RemoveBossOpenResources() {
		return ((T (*)(IBossOpenResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
