#pragma once

#include "../mscorlib/System/ValueType.h"


class ExchangeResult : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeResult"));
	}

	int32_t& Reward() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& ErrorMsg() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
