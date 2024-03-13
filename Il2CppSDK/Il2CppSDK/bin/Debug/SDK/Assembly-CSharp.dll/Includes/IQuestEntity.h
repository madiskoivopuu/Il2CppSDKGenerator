#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestEntity"));
	}


	template <typename T = QuestComponent*> T get_quest() {
		return ((T (*)(IQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasQuest() {
		return ((T (*)(IQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddQuest(Il2CppString* newName) {
		return ((T (*)(IQuestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceQuest(Il2CppString* newName) {
		return ((T (*)(IQuestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveQuest() {
		return ((T (*)(IQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

