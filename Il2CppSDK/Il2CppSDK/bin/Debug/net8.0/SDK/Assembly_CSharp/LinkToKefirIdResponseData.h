#pragma once

#include "../mscorlib/System/ValueType.h"


class LinkToKefirIdResponseData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkToKefirIdResponseData"));
	}

	int64_t& PlayerId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& KefirId() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	bool& IsBonusSent() {
		return *(bool*)((uintptr_t)this + 0x10);
	}

	Il2CppList<LinkingPlayerData>*& LinkedPlayers() {
		return *(Il2CppList<LinkingPlayerData>**)((uintptr_t)this + 0x18);
	}

};};
