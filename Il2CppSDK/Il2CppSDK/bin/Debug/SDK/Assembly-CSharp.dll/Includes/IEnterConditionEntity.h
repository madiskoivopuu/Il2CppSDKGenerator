#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEnterConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEnterConditionEntity"));
	}


	template <typename R = EnterConditionComponent*> R get_enterCondition() {
		return ((R (*)(IEnterConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasEnterCondition() {
		return ((R (*)(IEnterConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEnterCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(IEnterConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceEnterCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(IEnterConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveEnterCondition() {
		return ((R (*)(IEnterConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

