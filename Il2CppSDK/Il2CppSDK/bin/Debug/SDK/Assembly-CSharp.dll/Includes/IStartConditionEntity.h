#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStartConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStartConditionEntity"));
	}


	template <typename R = StartConditionComponent*> R get_startCondition() {
		return ((R (*)(IStartConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStartCondition() {
		return ((R (*)(IStartConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(IStartConditionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newSourceCondition, newTargetCondition);
	}
	template <typename R = void> R ReplaceStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(IStartConditionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newSourceCondition, newTargetCondition);
	}
	template <typename R = void> R RemoveStartCondition() {
		return ((R (*)(IStartConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

