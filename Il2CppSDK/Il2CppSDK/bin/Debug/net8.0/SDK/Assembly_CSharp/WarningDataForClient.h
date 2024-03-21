#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ServiceMessage.h"
#include "MessageLayer.h"


class WarningDataForClient : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningDataForClient"));
	}

	ServiceMessage& Message() {
		return *(ServiceMessage*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Text() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	MessageLayer& Layer() {
		return *(MessageLayer*)((uintptr_t)this + 0x10);
	}

};};
