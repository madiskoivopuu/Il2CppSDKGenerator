#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INoAutoModeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INoAutoModeEntity"));
	}


	template <typename T = bool> T get_isNoAutoMode() {
		return ((T (*)(INoAutoModeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isNoAutoMode(bool value) {
		return ((T (*)(INoAutoModeEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
