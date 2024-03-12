#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoModeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoModeEntity"));
	}


	template <typename T = bool> T get_isAutoMode() {
		return ((T (*)(IAutoModeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isAutoMode(bool value) {
		return ((T (*)(IAutoModeEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
