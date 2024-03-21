#pragma once

#include "../mscorlib/System/ValueType.h"


class PlayerNameData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerNameData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& FakeClanName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& GuildTag() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

};};
