#pragma once

#include "../mscorlib/System/Object.h"


class SeenSeasonQuestsComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeenSeasonQuestsComponent"));
	}

	Il2CppList<Il2CppString*>*& Names() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x10);
	}

};};
