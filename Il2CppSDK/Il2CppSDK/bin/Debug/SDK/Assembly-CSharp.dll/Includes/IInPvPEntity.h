#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInPvPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInPvPEntity"));
	}


	template <typename R = bool> R get_isInPvP() {
		return ((R (*)(IInPvPEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isInPvP(bool value) {
		return ((R (*)(IInPvPEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

