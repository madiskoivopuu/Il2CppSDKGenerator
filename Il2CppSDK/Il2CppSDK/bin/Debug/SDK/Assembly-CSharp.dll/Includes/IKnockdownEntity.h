#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IKnockdownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IKnockdownEntity"));
	}


	template <typename R = bool> R get_isKnockdown() {
		return ((R (*)(IKnockdownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isKnockdown(bool value) {
		return ((R (*)(IKnockdownEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

