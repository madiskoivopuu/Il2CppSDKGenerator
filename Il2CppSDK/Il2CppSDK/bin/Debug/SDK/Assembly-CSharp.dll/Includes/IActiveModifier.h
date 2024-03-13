#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActiveModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActiveModifier"));
	}


	template <typename T = bool> T get_IsActive() {
		return ((T (*)(IActiveModifier*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_IsActive(bool value) {
		return ((T (*)(IActiveModifier*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

