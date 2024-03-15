#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGhostEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGhostEntity"));
	}


	template <typename R = bool> R get_isGhost() {
		return ((R (*)(IGhostEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isGhost(bool value) {
		return ((R (*)(IGhostEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

