#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRandomNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRandomNameEntity"));
	}


	template <typename R = RandomNameComponent*> R get_randomName() {
		return ((R (*)(IRandomNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRandomName() {
		return ((R (*)(IRandomNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRandomName(RandomNameRules newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IRandomNameEntity*, RandomNameRules, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newRule, newNames);
	}
	template <typename R = void> R ReplaceRandomName(RandomNameRules newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IRandomNameEntity*, RandomNameRules, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newRule, newNames);
	}
	template <typename R = void> R RemoveRandomName() {
		return ((R (*)(IRandomNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

