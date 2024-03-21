#pragma once

#include "../mscorlib/System/Exception.h"
#include "Commands.h"
#include "Errors.h"


class CommandProcessException : public Exception {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommandProcessException"));
	}

	Commands& <CommandId>k__BackingField() {
		return *(Commands*)((uintptr_t)this + 0x88);
	}

	Errors& <ErrorId>k__BackingField() {
		return *(Errors*)((uintptr_t)this + 0x8A);
	}

};};
