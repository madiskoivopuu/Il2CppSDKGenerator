#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestsEntity"));
	}


	template <typename R = QuestsComponent*> R get_quests() {
		return ((R (*)(IQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasQuests() {
		return ((R (*)(IQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddQuests(int64_t newStartTime, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IQuestsEntity*, int64_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newStartTime, newNames);
	}
	template <typename R = void> R ReplaceQuests(int64_t newStartTime, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IQuestsEntity*, int64_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newStartTime, newNames);
	}
	template <typename R = void> R RemoveQuests() {
		return ((R (*)(IQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

