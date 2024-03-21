#pragma once

#include "../mscorlib/System/Object.h"


class ArmingEmojisData : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingEmojisData"));
	}

	Il2CppArray<Il2CppString*>*& Names() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x10);
	}

};};
