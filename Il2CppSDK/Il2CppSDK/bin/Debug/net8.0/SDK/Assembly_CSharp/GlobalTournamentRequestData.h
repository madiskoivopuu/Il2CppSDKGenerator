#pragma once

#include "../mscorlib/System/ValueType.h"


class GlobalTournamentRequestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentRequestData"));
	}

	Il2CppString*& TournamentBlueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
