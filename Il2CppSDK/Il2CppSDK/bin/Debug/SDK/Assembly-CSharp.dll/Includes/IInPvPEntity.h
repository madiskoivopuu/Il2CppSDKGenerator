#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInPvPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInPvPEntity"));
	}


	template <typename T = bool> T get_isInPvP() {
		return ((T (*)(IInPvPEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isInPvP(bool value) {
		return ((T (*)(IInPvPEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

