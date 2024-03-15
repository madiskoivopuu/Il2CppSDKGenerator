#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestEntity"));
	}


	template <typename R = QuestComponent*> R get_quest() {
		return ((R (*)(IQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasQuest() {
		return ((R (*)(IQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddQuest(Il2CppString* newName) {
		return ((R (*)(IQuestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceQuest(Il2CppString* newName) {
		return ((R (*)(IQuestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveQuest() {
		return ((R (*)(IQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

