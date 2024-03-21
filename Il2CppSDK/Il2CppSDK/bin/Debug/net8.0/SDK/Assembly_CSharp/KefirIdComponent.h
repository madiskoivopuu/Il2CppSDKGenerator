#pragma once

#include "../mscorlib/System/Object.h"


class KefirIdComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdComponent"));
	}

	Il2CppString*& KefirId() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

};};
