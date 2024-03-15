#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IProgressQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IProgressQuestEntity"));
	}


	template <typename R = ProgressQuestComponent*> R get_progressQuest() {
		return ((R (*)(IProgressQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasProgressQuest() {
		return ((R (*)(IProgressQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((R (*)(IProgressQuestEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newName, newTag, newValue);
	}
	template <typename R = void> R ReplaceProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((R (*)(IProgressQuestEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newName, newTag, newValue);
	}
	template <typename R = void> R RemoveProgressQuest() {
		return ((R (*)(IProgressQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

