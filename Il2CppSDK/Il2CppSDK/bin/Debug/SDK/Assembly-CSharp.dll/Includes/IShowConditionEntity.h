#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IShowConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IShowConditionEntity"));
	}


	template <typename T = ShowConditionComponent*> T get_showCondition() {
		return ((T (*)(IShowConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasShowCondition() {
		return ((T (*)(IShowConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddShowCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(IShowConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceShowCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(IShowConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveShowCondition() {
		return ((T (*)(IShowConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

