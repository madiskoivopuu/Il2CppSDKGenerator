#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPLevelUpNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPLevelUpNotificationSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& _prevVIPPointsCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _prevVIPLevel() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	 ICollector1AccountEntity*>* GetTrigger(IContext1AccountEntity*>* context) {
		return ((ICollector1AccountEntity*>* (*)(VIPLevelUpNotificationSystem*, IContext1AccountEntity*>*))(Il2CppBase() + 0x15C0CAC))(this, context);
	}
	template <typename R = bool> R Filter(AccountEntity* entity) {
		return ((R (*)(VIPLevelUpNotificationSystem*, AccountEntity*))(Il2CppBase() + 0x15C0D04))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<AccountEntity*>* accounts) {
		return ((R (*)(VIPLevelUpNotificationSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0x15C0D20))(this, accounts);
	}

};

