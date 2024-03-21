#pragma once

#include "../mscorlib/System/Object.h"


class SeenMapEventsComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeenMapEventsComponent"));
	}

	Il2CppDictionary<Il2CppString*, Il2CppArray<int64_t>*>*& EventPoints() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppArray<int64_t>*>**)((uintptr_t)this + 0x10);
	}

};};
