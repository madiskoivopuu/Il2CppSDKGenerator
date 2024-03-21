#pragma once

#include "../mscorlib/System/ValueType.h"


class AcceptLobbyData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcceptLobbyData"));
	}

	int64_t& Id() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	bool& Accept() {
		return *(bool*)((uintptr_t)this + 0x8);
	}

};};
