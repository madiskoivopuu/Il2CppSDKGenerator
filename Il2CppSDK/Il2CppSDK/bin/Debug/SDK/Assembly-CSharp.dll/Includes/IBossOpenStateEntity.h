#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBossOpenStateEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBossOpenStateEntity"));
	}


	template <typename R = BossOpenStateComponent*> R get_bossOpenState() {
		return ((R (*)(IBossOpenStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBossOpenState() {
		return ((R (*)(IBossOpenStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState>* newStates) {
		return ((R (*)(IBossOpenStateEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState>*))(Il2CppBase() + 0x0))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename R = void> R ReplaceBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState>* newStates) {
		return ((R (*)(IBossOpenStateEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState>*))(Il2CppBase() + 0x0))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename R = void> R RemoveBossOpenState() {
		return ((R (*)(IBossOpenStateEntity*))(Il2CppBase() + 0x0))(this);
	}

};

