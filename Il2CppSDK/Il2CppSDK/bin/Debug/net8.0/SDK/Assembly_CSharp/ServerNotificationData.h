#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ServerNotificationType.h"


class ServerNotificationData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerNotificationData"));
	}

	ServerNotificationType& Type() {
		return *(ServerNotificationType*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Text() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	Il2CppArray<MessagePayload>*& Payload() {
		return *(Il2CppArray<MessagePayload>**)((uintptr_t)this + 0x18);
	}

};};
