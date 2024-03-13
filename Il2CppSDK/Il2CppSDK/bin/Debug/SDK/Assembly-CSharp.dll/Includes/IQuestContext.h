#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestContext"));
	}


	template <typename T = QuestDataContext*> T get_questsData() {
		return ((T (*)(IQuestContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = QuestContext*> T get_quests() {
		return ((T (*)(IQuestContext*))(Il2CppBase() + 0x0))(this);
	}

};

