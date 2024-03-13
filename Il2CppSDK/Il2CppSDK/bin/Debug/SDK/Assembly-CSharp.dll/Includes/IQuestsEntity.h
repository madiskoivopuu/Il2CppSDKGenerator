#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestsEntity"));
	}


	template <typename T = QuestsComponent*> T get_quests() {
		return ((T (*)(IQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasQuests() {
		return ((T (*)(IQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddQuests(int64_t newStartTime, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IQuestsEntity*, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newStartTime, newNames);
	}
	template <typename T = void> T ReplaceQuests(int64_t newStartTime, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IQuestsEntity*, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newStartTime, newNames);
	}
	template <typename T = void> T RemoveQuests() {
		return ((T (*)(IQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

