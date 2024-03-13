#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyInPvPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyInPvPEntity"));
	}


	template <typename T = bool> T get_isApplyInPvP() {
		return ((T (*)(IApplyInPvPEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isApplyInPvP(bool value) {
		return ((T (*)(IApplyInPvPEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

