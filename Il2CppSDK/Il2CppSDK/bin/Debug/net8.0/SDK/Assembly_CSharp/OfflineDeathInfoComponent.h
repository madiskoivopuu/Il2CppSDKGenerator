#pragma once

#include "../mscorlib/System/Object.h"
#include "DamageStatType.h"


class OfflineDeathInfoComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfflineDeathInfoComponent"));
	}

	DamageStatType& Type() {
		return *(DamageStatType*)((uintptr_t)this + 0x10);
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& Blueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& GuildTag() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

	Il2CppString*& ClanName() {
		return *(Il2CppString**)((uintptr_t)this + 0x30);
	}

	Il2CppString*& LocationName() {
		return *(Il2CppString**)((uintptr_t)this + 0x38);
	}

};};
