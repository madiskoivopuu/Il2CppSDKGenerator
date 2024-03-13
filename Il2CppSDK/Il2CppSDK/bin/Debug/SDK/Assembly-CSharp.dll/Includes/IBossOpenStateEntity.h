#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBossOpenStateEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBossOpenStateEntity"));
	}


	template <typename T = BossOpenStateComponent*> T get_bossOpenState() {
		return ((T (*)(IBossOpenStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBossOpenState() {
		return ((T (*)(IBossOpenStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState*>* newStates) {
		return ((T (*)(IBossOpenStateEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState*>*))(Il2CppBase() + 0x0))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename T = void> T ReplaceBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState*>* newStates) {
		return ((T (*)(IBossOpenStateEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState*>*))(Il2CppBase() + 0x0))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename T = void> T RemoveBossOpenState() {
		return ((T (*)(IBossOpenStateEntity*))(Il2CppBase() + 0x0))(this);
	}

};

