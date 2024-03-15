#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActionIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActionIdEntity"));
	}


	template <typename R = ActionIdComponent*> R get_actionId() {
		return ((R (*)(IActionIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasActionId() {
		return ((R (*)(IActionIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddActionId(int32_t newId) {
		return ((R (*)(IActionIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceActionId(int32_t newId) {
		return ((R (*)(IActionIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveActionId() {
		return ((R (*)(IActionIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

