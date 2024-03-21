#pragma once

#include "../mscorlib/System/Object.h"


class KefirAuthValidatorError : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirAuthValidatorError"));
	}

	static Il2CppString*& INVALID_TOKEN() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& INVALID_VALIDATION() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& INVALID_AUD() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& NOT_SUPPORT() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

};};
