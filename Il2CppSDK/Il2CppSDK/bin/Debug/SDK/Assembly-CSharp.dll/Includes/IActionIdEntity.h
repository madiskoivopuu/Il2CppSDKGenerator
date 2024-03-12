#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActionIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActionIdEntity"));
	}


	template <typename T = uintptr_t> T get_actionId() {
		return ((T (*)(IActionIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasActionId() {
		return ((T (*)(IActionIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddActionId(int32_t newId) {
		return ((T (*)(IActionIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceActionId(int32_t newId) {
		return ((T (*)(IActionIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveActionId() {
		return ((T (*)(IActionIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
