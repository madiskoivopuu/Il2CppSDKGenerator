#pragma once

#include "../mscorlib/System/Object.h"


class ClassRunesComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRunesComponent"));
	}

	Il2CppDictionary<PlayerClassType, Il2CppArray<Il2CppString*>*>*& AllClassRunes() {
		return *(Il2CppDictionary<PlayerClassType, Il2CppArray<Il2CppString*>*>**)((uintptr_t)this + 0x10);
	}

};};
