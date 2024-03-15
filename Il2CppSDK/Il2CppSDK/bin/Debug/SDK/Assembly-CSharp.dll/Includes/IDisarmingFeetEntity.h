#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDisarmingFeetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDisarmingFeetEntity"));
	}


	template <typename R = bool> R get_isDisarmingFeet() {
		return ((R (*)(IDisarmingFeetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isDisarmingFeet(bool value) {
		return ((R (*)(IDisarmingFeetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

