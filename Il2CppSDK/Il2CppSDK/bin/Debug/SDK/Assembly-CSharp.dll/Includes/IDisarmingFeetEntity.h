#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDisarmingFeetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDisarmingFeetEntity"));
	}


	template <typename T = bool> T get_isDisarmingFeet() {
		return ((T (*)(IDisarmingFeetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isDisarmingFeet(bool value) {
		return ((T (*)(IDisarmingFeetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
