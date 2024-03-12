#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISilenceImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISilenceImmuneEntity"));
	}


	template <typename T = bool> T get_isSilenceImmune() {
		return ((T (*)(ISilenceImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isSilenceImmune(bool value) {
		return ((T (*)(ISilenceImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
