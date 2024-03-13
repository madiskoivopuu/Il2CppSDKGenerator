#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPLevelUpNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPLevelUpNotificationSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _prevVIPPointsCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _prevVIPLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = ICollector1AccountEntity*>*> T GetTrigger(IContext1AccountEntity*>* context) {
		return ((T (*)(VIPLevelUpNotificationSystem*, IContext1AccountEntity*>*))(Il2CppBase() + 0x15C0CAC))(this, context);
	}
	template <typename T = bool> T Filter(AccountEntity* entity) {
		return ((T (*)(VIPLevelUpNotificationSystem*, AccountEntity*))(Il2CppBase() + 0x15C0D04))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<AccountEntity*>* accounts) {
		return ((T (*)(VIPLevelUpNotificationSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0x15C0D20))(this, accounts);
	}

};

