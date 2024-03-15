#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFinishQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFinishQuestEntity"));
	}


	template <typename R = FinishQuestComponent*> R get_finishQuest() {
		return ((R (*)(IFinishQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasFinishQuest() {
		return ((R (*)(IFinishQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((R (*)(IFinishQuestEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename R = void> R ReplaceFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((R (*)(IFinishQuestEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename R = void> R RemoveFinishQuest() {
		return ((R (*)(IFinishQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

