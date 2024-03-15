#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerEntity"));
	}


	template <typename R = bool> R get_isPlayer() {
		return ((R (*)(IPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isPlayer(bool value) {
		return ((R (*)(IPlayerEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

