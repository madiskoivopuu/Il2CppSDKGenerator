#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRandomNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRandomNameEntity"));
	}


	template <typename T = RandomNameComponent*> T get_randomName() {
		return ((T (*)(IRandomNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRandomName() {
		return ((T (*)(IRandomNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRandomName(RandomNameRules* newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IRandomNameEntity*, RandomNameRules*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newRule, newNames);
	}
	template <typename T = void> T ReplaceRandomName(RandomNameRules* newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IRandomNameEntity*, RandomNameRules*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newRule, newNames);
	}
	template <typename T = void> T RemoveRandomName() {
		return ((T (*)(IRandomNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

