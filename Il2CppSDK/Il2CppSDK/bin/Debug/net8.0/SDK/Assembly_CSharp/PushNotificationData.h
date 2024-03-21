#pragma once

#include "../mscorlib/System/ValueType.h"


class PushNotificationData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationData"));
	}

	bool& IsEnabled() {
		return *(bool*)((uintptr_t)this + 0x0);
	}

	Il2CppArray<Il2CppString*>*& Blocked() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x8);
	}

};};
