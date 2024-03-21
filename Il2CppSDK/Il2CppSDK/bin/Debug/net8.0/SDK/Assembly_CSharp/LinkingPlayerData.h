#pragma once

#include "../mscorlib/System/ValueType.h"


class LinkingPlayerData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkingPlayerData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& BattleTag() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Region() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	int32_t& Level() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

	bool& IsLinked() {
		return *(bool*)((uintptr_t)this + 0x1C);
	}

};};
