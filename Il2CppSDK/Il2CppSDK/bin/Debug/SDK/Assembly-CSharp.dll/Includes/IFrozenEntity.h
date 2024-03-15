#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFrozenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFrozenEntity"));
	}


	template <typename R = bool> R get_isFrozen() {
		return ((R (*)(IFrozenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isFrozen(bool value) {
		return ((R (*)(IFrozenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

