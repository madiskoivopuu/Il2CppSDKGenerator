#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDisabledEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDisabledEntity"));
	}


	template <typename T = bool> T get_isDisabled() {
		return ((T (*)(IDisabledEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isDisabled(bool value) {
		return ((T (*)(IDisabledEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

