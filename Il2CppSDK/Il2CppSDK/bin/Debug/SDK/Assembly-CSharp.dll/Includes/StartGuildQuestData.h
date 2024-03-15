#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartGuildQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartGuildQuestData"));
	}

	template <typename R = Il2CppString*> R& QuestName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = StartGuildQuestResult*> R& Result() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StartGuildQuestData*, uintptr_t))(Il2CppBase() + 0x148CC08))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StartGuildQuestData*, uintptr_t))(Il2CppBase() + 0x148CC5C))(this, reader);
	}

};

