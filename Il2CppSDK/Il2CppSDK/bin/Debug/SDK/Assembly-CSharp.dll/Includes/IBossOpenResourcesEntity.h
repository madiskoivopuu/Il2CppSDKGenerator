#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBossOpenResourcesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBossOpenResourcesEntity"));
	}


	template <typename R = BossOpenResourcesComponent*> R get_bossOpenResources() {
		return ((R (*)(IBossOpenResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBossOpenResources() {
		return ((R (*)(IBossOpenResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBossOpenResources(CurrencyType* newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<Il2CppString*>* newOpenPortalItems, Il2CppArray<BossResource*>* newBosses) {
		return ((R (*)(IBossOpenResourcesEntity*, CurrencyType*, int32_t, int32_t, Il2CppArray<Il2CppString*>*, Il2CppArray<BossResource*>*))(Il2CppBase() + 0x0))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename R = void> R ReplaceBossOpenResources(CurrencyType* newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<Il2CppString*>* newOpenPortalItems, Il2CppArray<BossResource*>* newBosses) {
		return ((R (*)(IBossOpenResourcesEntity*, CurrencyType*, int32_t, int32_t, Il2CppArray<Il2CppString*>*, Il2CppArray<BossResource*>*))(Il2CppBase() + 0x0))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename R = void> R RemoveBossOpenResources() {
		return ((R (*)(IBossOpenResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

