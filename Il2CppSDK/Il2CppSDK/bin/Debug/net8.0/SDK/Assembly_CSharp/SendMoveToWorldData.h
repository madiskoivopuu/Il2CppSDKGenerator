#pragma once

#include "../mscorlib/System/ValueType.h"


class SendMoveToWorldData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendMoveToWorldData"));
	}

	Il2CppString*& Coordinator() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& ToLocationName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
