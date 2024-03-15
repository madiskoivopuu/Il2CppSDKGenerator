#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRandomClanNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRandomClanNameEntity"));
	}


	template <typename R = RandomClanNameComponent*> R get_randomClanName() {
		return ((R (*)(IRandomClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRandomClanName() {
		return ((R (*)(IRandomClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRandomClanName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IRandomClanNameEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newRule, newNames);
	}
	template <typename R = void> R ReplaceRandomClanName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IRandomClanNameEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newRule, newNames);
	}
	template <typename R = void> R RemoveRandomClanName() {
		return ((R (*)(IRandomClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

