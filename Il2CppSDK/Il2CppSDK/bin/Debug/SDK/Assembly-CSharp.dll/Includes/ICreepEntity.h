#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreepEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreepEntity"));
	}


	template <typename R = bool> R get_isCreep() {
		return ((R (*)(ICreepEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isCreep(bool value) {
		return ((R (*)(ICreepEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

