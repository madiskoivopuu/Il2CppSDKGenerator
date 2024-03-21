#pragma once

#include "../mscorlib/System/Object.h"
#include "StartGuildQuestResult.h"


class StartGuildQuestData : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartGuildQuestData"));
	}

	Il2CppString*& QuestName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	StartGuildQuestResult& Result() {
		return *(StartGuildQuestResult*)((uintptr_t)this + 0x18);
	}

};};
