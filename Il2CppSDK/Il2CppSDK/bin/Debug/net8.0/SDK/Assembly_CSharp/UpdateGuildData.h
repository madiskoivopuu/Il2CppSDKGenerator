#pragma once

#include "../mscorlib/System/ValueType.h"
#include "GuildType.h"


class UpdateGuildData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateGuildData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Tag() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Description() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	int32_t& Language() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

	GuildType& Type() {
		return *(GuildType*)((uintptr_t)this + 0x1C);
	}

};};
