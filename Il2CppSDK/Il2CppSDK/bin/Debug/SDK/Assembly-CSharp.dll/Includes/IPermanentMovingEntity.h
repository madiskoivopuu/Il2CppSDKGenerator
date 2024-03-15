#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPermanentMovingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPermanentMovingEntity"));
	}


	template <typename R = bool> R get_isPermanentMoving() {
		return ((R (*)(IPermanentMovingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isPermanentMoving(bool value) {
		return ((R (*)(IPermanentMovingEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

