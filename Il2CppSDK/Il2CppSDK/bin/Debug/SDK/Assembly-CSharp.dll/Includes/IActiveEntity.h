#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActiveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActiveEntity"));
	}


	template <typename T = uintptr_t> T get_active() {
		return ((T (*)(IActiveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasActive() {
		return ((T (*)(IActiveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddActive(bool newValue) {
		return ((T (*)(IActiveEntity*, bool))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceActive(bool newValue) {
		return ((T (*)(IActiveEntity*, bool))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveActive() {
		return ((T (*)(IActiveEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
