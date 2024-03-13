#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFinishQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFinishQuestEntity"));
	}


	template <typename T = FinishQuestComponent*> T get_finishQuest() {
		return ((T (*)(IFinishQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasFinishQuest() {
		return ((T (*)(IFinishQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((T (*)(IFinishQuestEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename T = void> T ReplaceFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((T (*)(IFinishQuestEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename T = void> T RemoveFinishQuest() {
		return ((T (*)(IFinishQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

