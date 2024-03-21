#pragma once

#include "../mscorlib/System/Object.h"


class ChatSettings : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatSettings"));
	}

	static Il2CppString*& MatrixLicence() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

};};
