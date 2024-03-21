#pragma once

#include "../mscorlib/System/ValueType.h"


class ClientLogData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientLogData"));
	}

	Il2CppString*& Text() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
