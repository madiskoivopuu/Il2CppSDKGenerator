#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerEntity"));
	}


	template <typename T = bool> T get_isPlayer() {
		return ((T (*)(IPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isPlayer(bool value) {
		return ((T (*)(IPlayerEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
