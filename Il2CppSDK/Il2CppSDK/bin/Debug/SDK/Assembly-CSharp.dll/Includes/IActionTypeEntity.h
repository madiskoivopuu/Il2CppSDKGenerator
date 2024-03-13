#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActionTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActionTypeEntity"));
	}


	template <typename T = ActionTypeComponent*> T get_actionType() {
		return ((T (*)(IActionTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasActionType() {
		return ((T (*)(IActionTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddActionType(ActionType* newValue) {
		return ((T (*)(IActionTypeEntity*, ActionType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceActionType(ActionType* newValue) {
		return ((T (*)(IActionTypeEntity*, ActionType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveActionType() {
		return ((T (*)(IActionTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

