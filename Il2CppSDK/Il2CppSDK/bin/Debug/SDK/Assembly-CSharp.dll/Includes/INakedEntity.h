#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INakedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INakedEntity"));
	}


	template <typename T = bool> T get_isNaked() {
		return ((T (*)(INakedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isNaked(bool value) {
		return ((T (*)(INakedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
