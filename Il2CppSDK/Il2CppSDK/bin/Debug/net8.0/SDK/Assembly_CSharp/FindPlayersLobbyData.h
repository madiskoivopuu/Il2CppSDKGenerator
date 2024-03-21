#pragma once

#include "../mscorlib/System/ValueType.h"
#include "LobbyType.h"


class FindPlayersLobbyData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayersLobbyData"));
	}

	LobbyType& Type() {
		return *(LobbyType*)((uintptr_t)this + 0x0);
	}

	Il2CppArray<FindPlayersLobbyData::Player>*& Players() {
		return *(Il2CppArray<FindPlayersLobbyData::Player>**)((uintptr_t)this + 0x8);
	}

};};
