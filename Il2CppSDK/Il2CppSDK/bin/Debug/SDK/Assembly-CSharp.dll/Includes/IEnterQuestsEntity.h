#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEnterQuestsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEnterQuestsEntity"));
	}


	template <typename R = EnterQuestsComponent*> R get_enterQuests() {
		return ((R (*)(IEnterQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasEnterQuests() {
		return ((R (*)(IEnterQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEnterQuests(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(IEnterQuestsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceEnterQuests(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(IEnterQuestsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveEnterQuests() {
		return ((R (*)(IEnterQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

