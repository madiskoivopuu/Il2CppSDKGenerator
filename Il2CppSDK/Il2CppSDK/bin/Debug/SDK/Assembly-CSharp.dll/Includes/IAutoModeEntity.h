#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoModeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoModeEntity"));
	}


	template <typename R = bool> R get_isAutoMode() {
		return ((R (*)(IAutoModeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isAutoMode(bool value) {
		return ((R (*)(IAutoModeEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

