#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDisabledEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDisabledEntity"));
	}


	template <typename R = bool> R get_isDisabled() {
		return ((R (*)(IDisabledEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isDisabled(bool value) {
		return ((R (*)(IDisabledEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

