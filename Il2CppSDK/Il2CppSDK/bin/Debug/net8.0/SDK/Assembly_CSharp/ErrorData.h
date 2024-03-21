#pragma once

#include "../mscorlib/System/ValueType.h"
#include "Commands.h"
#include "Errors.h"


class ErrorData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ErrorData"));
	}

	Commands& CommandId() {
		return *(Commands*)((uintptr_t)this + 0x0);
	}

	Errors& ErrorId() {
		return *(Errors*)((uintptr_t)this + 0x2);
	}

	Il2CppString*& Msg() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
