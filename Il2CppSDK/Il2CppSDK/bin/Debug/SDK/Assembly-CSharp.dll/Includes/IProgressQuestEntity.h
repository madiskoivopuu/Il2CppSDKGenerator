#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IProgressQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IProgressQuestEntity"));
	}


	template <typename T = uintptr_t> T get_progressQuest() {
		return ((T (*)(IProgressQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasProgressQuest() {
		return ((T (*)(IProgressQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((T (*)(IProgressQuestEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newName, newTag, newValue);
	}
	template <typename T = void> T ReplaceProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((T (*)(IProgressQuestEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newName, newTag, newValue);
	}
	template <typename T = void> T RemoveProgressQuest() {
		return ((T (*)(IProgressQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
