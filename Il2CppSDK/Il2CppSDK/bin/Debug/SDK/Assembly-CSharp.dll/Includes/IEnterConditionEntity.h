#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEnterConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEnterConditionEntity"));
	}


	template <typename T = EnterConditionComponent*> T get_enterCondition() {
		return ((T (*)(IEnterConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasEnterCondition() {
		return ((T (*)(IEnterConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEnterCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(IEnterConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceEnterCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(IEnterConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveEnterCondition() {
		return ((T (*)(IEnterConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

