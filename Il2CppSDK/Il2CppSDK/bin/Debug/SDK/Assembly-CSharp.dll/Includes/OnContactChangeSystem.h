#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnContactChangeSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnContactChangeSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ContactsEntity*>*> T GetTrigger(IContext1ContactsEntity*>* context) {
		return ((T (*)(OnContactChangeSystem*, IContext1ContactsEntity*>*))(Il2CppBase() + 0x11DC310))(this, context);
	}
	template <typename T = bool> T Filter(ContactsEntity* entity) {
		return ((T (*)(OnContactChangeSystem*, ContactsEntity*))(Il2CppBase() + 0x11DC494))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<ContactsEntity*>* entities) {
		return ((T (*)(OnContactChangeSystem*, Il2CppList<ContactsEntity*>*))(Il2CppBase() + 0x11DC4C0))(this, entities);
	}

};

