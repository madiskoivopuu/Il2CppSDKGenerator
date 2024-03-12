#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActiveConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActiveConditionEntity"));
	}


	template <typename T = uintptr_t> T get_activeCondition() {
		return ((T (*)(IActiveConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasActiveCondition() {
		return ((T (*)(IActiveConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(IActiveConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(IActiveConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveActiveCondition() {
		return ((T (*)(IActiveConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
