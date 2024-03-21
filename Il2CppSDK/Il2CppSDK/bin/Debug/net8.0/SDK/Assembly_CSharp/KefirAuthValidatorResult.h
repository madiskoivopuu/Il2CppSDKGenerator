#pragma once

#include "../mscorlib/System/ValueType.h"


class KefirAuthValidatorResult : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirAuthValidatorResult"));
	}

	bool& IsValid() {
		return *(bool*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Error() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& KefirID() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& NickName() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

};};
