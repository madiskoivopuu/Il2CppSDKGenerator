#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestsSaveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestsSaveEntity"));
	}


	template <typename R = QuestsSaveComponent*> R get_questsSave() {
		return ((R (*)(IQuestsSaveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasQuestsSave() {
		return ((R (*)(IQuestsSaveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddQuestsSave(int32_t newVersion, Il2CppArray<Item*>* newData) {
		return ((R (*)(IQuestsSaveEntity*, int32_t, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newVersion, newData);
	}
	template <typename R = void> R ReplaceQuestsSave(int32_t newVersion, Il2CppArray<Item*>* newData) {
		return ((R (*)(IQuestsSaveEntity*, int32_t, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newVersion, newData);
	}
	template <typename R = void> R RemoveQuestsSave() {
		return ((R (*)(IQuestsSaveEntity*))(Il2CppBase() + 0x0))(this);
	}

};

