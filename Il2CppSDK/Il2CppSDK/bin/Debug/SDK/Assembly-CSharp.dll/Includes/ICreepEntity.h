#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreepEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreepEntity"));
	}


	template <typename T = bool> T get_isCreep() {
		return ((T (*)(ICreepEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isCreep(bool value) {
		return ((T (*)(ICreepEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
