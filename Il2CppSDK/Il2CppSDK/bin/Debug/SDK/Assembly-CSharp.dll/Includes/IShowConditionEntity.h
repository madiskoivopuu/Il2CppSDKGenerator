#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IShowConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IShowConditionEntity"));
	}


	template <typename R = ShowConditionComponent*> R get_showCondition() {
		return ((R (*)(IShowConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasShowCondition() {
		return ((R (*)(IShowConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddShowCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(IShowConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceShowCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(IShowConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveShowCondition() {
		return ((R (*)(IShowConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

