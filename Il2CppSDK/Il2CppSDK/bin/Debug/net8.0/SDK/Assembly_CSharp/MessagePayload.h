#pragma once

#include "../mscorlib/System/ValueType.h"
#include "MessagePayloadType.h"


class MessagePayload : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessagePayload"));
	}

	Il2CppString*& Data() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppArray<Il2CppString*>*& Parameters() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x8);
	}

	MessagePayloadType& Type() {
		return *(MessagePayloadType*)((uintptr_t)this + 0x10);
	}

};};
