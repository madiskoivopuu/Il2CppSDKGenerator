#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartGuildQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartGuildQuestData"));
	}

	template <typename T = Il2CppString*> T& QuestName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = StartGuildQuestResult*> T& Result() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StartGuildQuestData*, uintptr_t))(Il2CppBase() + 0x148CC08))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StartGuildQuestData*, uintptr_t))(Il2CppBase() + 0x148CC5C))(this, reader);
	}

};

