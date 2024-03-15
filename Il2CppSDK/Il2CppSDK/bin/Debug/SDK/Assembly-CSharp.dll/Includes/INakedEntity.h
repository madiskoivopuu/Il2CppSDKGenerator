#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INakedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INakedEntity"));
	}


	template <typename R = bool> R get_isNaked() {
		return ((R (*)(INakedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isNaked(bool value) {
		return ((R (*)(INakedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

