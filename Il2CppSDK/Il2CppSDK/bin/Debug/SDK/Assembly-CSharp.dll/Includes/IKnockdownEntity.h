#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IKnockdownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IKnockdownEntity"));
	}


	template <typename T = bool> T get_isKnockdown() {
		return ((T (*)(IKnockdownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isKnockdown(bool value) {
		return ((T (*)(IKnockdownEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
