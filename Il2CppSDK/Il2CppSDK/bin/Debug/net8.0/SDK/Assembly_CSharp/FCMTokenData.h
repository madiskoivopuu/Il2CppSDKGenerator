#pragma once

#include "../mscorlib/System/ValueType.h"


class FCMTokenData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FCMTokenData"));
	}

	Il2CppString*& Token() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	uint8_t& Platform() {
		return *(uint8_t*)((uintptr_t)this + 0x8);
	}

};};
