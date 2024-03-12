#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFrozenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFrozenEntity"));
	}


	template <typename T = bool> T get_isFrozen() {
		return ((T (*)(IFrozenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isFrozen(bool value) {
		return ((T (*)(IFrozenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
