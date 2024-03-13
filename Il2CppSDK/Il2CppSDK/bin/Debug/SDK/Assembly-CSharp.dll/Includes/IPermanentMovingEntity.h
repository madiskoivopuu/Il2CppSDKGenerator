#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPermanentMovingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPermanentMovingEntity"));
	}


	template <typename T = bool> T get_isPermanentMoving() {
		return ((T (*)(IPermanentMovingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isPermanentMoving(bool value) {
		return ((T (*)(IPermanentMovingEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

