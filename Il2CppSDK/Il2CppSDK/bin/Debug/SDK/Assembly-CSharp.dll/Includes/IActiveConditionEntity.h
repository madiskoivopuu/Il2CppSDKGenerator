#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActiveConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActiveConditionEntity"));
	}


	template <typename R = ActiveConditionComponent*> R get_activeCondition() {
		return ((R (*)(IActiveConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasActiveCondition() {
		return ((R (*)(IActiveConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(IActiveConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(IActiveConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveActiveCondition() {
		return ((R (*)(IActiveConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

