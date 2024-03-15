#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INoAutoModeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INoAutoModeEntity"));
	}


	template <typename R = bool> R get_isNoAutoMode() {
		return ((R (*)(INoAutoModeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isNoAutoMode(bool value) {
		return ((R (*)(INoAutoModeEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

