#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStartQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStartQuestEntity"));
	}


	template <typename R = StartQuestComponent*> R get_startQuest() {
		return ((R (*)(IStartQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStartQuest() {
		return ((R (*)(IStartQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(IStartQuestEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newTag);
	}
	template <typename R = void> R ReplaceStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(IStartQuestEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newTag);
	}
	template <typename R = void> R RemoveStartQuest() {
		return ((R (*)(IStartQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

