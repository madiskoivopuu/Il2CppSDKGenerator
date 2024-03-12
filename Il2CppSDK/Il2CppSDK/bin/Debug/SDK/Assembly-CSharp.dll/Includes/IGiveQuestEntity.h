#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGiveQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGiveQuestEntity"));
	}


	template <typename T = uintptr_t> T get_giveQuest() {
		return ((T (*)(IGiveQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGiveQuest() {
		return ((T (*)(IGiveQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(IGiveQuestEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newDontStart, newName, newTag);
	}
	template <typename T = void> T ReplaceGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(IGiveQuestEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newDontStart, newName, newTag);
	}
	template <typename T = void> T RemoveGiveQuest() {
		return ((T (*)(IGiveQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
