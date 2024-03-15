#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnContactChangeSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnContactChangeSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<ContactsEntity*>* GetTrigger(IContext1<ContactsEntity*>* context) {
		return ((ICollector1<ContactsEntity*>* (*)(OnContactChangeSystem*, IContext1<ContactsEntity*>*))(Il2CppBase() + 0x11DC310))(this, context);
	}
	template <typename R = bool> R Filter(ContactsEntity* entity) {
		return ((R (*)(OnContactChangeSystem*, ContactsEntity*))(Il2CppBase() + 0x11DC494))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<ContactsEntity*>* entities) {
		return ((R (*)(OnContactChangeSystem*, Il2CppList<ContactsEntity*>*))(Il2CppBase() + 0x11DC4C0))(this, entities);
	}

};

