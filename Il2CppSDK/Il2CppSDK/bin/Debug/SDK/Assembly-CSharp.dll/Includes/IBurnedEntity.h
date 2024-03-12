#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBurnedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBurnedEntity"));
	}


	template <typename T = bool> T get_isBurned() {
		return ((T (*)(IBurnedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isBurned(bool value) {
		return ((T (*)(IBurnedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
