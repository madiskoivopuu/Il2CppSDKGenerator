#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveInactiveContactSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveInactiveContactSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<ContactsEntity*>*& _contacts() {
		return *(IGroup1<ContactsEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(RemoveInactiveContactSystem*))(Il2CppBase() + 0x13A0564))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(RemoveInactiveContactSystem*))(Il2CppBase() + 0x13A0654))(this);
	}

};

