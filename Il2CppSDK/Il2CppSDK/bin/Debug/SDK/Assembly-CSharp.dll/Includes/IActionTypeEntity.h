#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActionTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActionTypeEntity"));
	}


	template <typename R = ActionTypeComponent*> R get_actionType() {
		return ((R (*)(IActionTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasActionType() {
		return ((R (*)(IActionTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddActionType(ActionType newValue) {
		return ((R (*)(IActionTypeEntity*, ActionType))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceActionType(ActionType newValue) {
		return ((R (*)(IActionTypeEntity*, ActionType))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveActionType() {
		return ((R (*)(IActionTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

