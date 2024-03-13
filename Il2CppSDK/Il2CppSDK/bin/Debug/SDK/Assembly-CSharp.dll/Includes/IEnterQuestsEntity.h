#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEnterQuestsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEnterQuestsEntity"));
	}


	template <typename T = EnterQuestsComponent*> T get_enterQuests() {
		return ((T (*)(IEnterQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasEnterQuests() {
		return ((T (*)(IEnterQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEnterQuests(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IEnterQuestsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceEnterQuests(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IEnterQuestsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveEnterQuests() {
		return ((T (*)(IEnterQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

