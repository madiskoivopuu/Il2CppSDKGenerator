#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStartConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStartConditionEntity"));
	}


	template <typename T = uintptr_t> T get_startCondition() {
		return ((T (*)(IStartConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStartCondition() {
		return ((T (*)(IStartConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(IStartConditionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newSourceCondition, newTargetCondition);
	}
	template <typename T = void> T ReplaceStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(IStartConditionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newSourceCondition, newTargetCondition);
	}
	template <typename T = void> T RemoveStartCondition() {
		return ((T (*)(IStartConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
