#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientManualQuestTrackingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientManualQuestTrackingSystem"));
	}

	template <typename R = BaseClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1AccountEntity*>* GetTrigger(IContext1AccountEntity*>* context) {
		return ((ICollector1AccountEntity*>* (*)(ClientManualQuestTrackingSystem*, IContext1AccountEntity*>*))(Il2CppBase() + 0xE195DC))(this, context);
	}
	template <typename R = bool> R Filter(AccountEntity* entity) {
		return ((R (*)(ClientManualQuestTrackingSystem*, AccountEntity*))(Il2CppBase() + 0xE19634))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<AccountEntity*>* entities) {
		return ((R (*)(ClientManualQuestTrackingSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0xE19650))(this, entities);
	}

};

