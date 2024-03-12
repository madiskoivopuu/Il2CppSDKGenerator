#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStartQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStartQuestEntity"));
	}


	template <typename T = uintptr_t> T get_startQuest() {
		return ((T (*)(IStartQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStartQuest() {
		return ((T (*)(IStartQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(IStartQuestEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newTag);
	}
	template <typename T = void> T ReplaceStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(IStartQuestEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newTag);
	}
	template <typename T = void> T RemoveStartQuest() {
		return ((T (*)(IStartQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
