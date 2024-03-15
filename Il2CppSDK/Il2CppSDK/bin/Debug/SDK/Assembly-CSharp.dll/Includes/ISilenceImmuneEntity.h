#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISilenceImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISilenceImmuneEntity"));
	}


	template <typename R = bool> R get_isSilenceImmune() {
		return ((R (*)(ISilenceImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isSilenceImmune(bool value) {
		return ((R (*)(ISilenceImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

