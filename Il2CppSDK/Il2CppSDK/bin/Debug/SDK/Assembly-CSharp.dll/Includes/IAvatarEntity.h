#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAvatarEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAvatarEntity"));
	}


	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(IAvatarEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(IAvatarEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

