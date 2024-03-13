#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAvatarEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAvatarEntity"));
	}


	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(IAvatarEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(IAvatarEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

