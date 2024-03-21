#pragma once

#include "../mscorlib/System/ValueType.h"
#include "LobbyType.h"


class CreateLobbyData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateLobbyData"));
	}

	LobbyType& Type() {
		return *(LobbyType*)((uintptr_t)this + 0x0);
	}

	int32_t& PlayersCount() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

};};
