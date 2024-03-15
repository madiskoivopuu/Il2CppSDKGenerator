#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestContext"));
	}


	template <typename R = QuestDataContext*> R get_questsData() {
		return ((R (*)(IQuestContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = QuestContext*> R get_quests() {
		return ((R (*)(IQuestContext*))(Il2CppBase() + 0x0))(this);
	}

};

