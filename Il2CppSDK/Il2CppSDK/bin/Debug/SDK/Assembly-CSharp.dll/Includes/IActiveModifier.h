#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActiveModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActiveModifier"));
	}


	template <typename R = bool> R get_IsActive() {
		return ((R (*)(IActiveModifier*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_IsActive(bool value) {
		return ((R (*)(IActiveModifier*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

