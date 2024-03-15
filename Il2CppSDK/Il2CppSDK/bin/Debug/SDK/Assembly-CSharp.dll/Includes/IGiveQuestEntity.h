#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGiveQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGiveQuestEntity"));
	}


	template <typename R = GiveQuestComponent*> R get_giveQuest() {
		return ((R (*)(IGiveQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGiveQuest() {
		return ((R (*)(IGiveQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(IGiveQuestEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newDontStart, newName, newTag);
	}
	template <typename R = void> R ReplaceGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(IGiveQuestEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newDontStart, newName, newTag);
	}
	template <typename R = void> R RemoveGiveQuest() {
		return ((R (*)(IGiveQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

