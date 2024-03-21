#pragma once

#include "../mscorlib/System/Object.h"


class DungeonLastEnterComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonLastEnterComponent"));
	}

	Il2CppDictionary<Il2CppString*, ValueTuple2<int64_t, int64_t>*>*& Values() {
		return *(Il2CppDictionary<Il2CppString*, ValueTuple2<int64_t, int64_t>*>**)((uintptr_t)this + 0x10);
	}

};};
