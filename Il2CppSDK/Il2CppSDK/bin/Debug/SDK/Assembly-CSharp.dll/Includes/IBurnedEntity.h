#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBurnedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBurnedEntity"));
	}


	template <typename R = bool> R get_isBurned() {
		return ((R (*)(IBurnedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isBurned(bool value) {
		return ((R (*)(IBurnedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

