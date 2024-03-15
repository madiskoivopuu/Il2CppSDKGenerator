#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyInPvPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyInPvPEntity"));
	}


	template <typename R = bool> R get_isApplyInPvP() {
		return ((R (*)(IApplyInPvPEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isApplyInPvP(bool value) {
		return ((R (*)(IApplyInPvPEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

