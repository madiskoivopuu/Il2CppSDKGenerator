#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGhostEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGhostEntity"));
	}


	template <typename T = bool> T get_isGhost() {
		return ((T (*)(IGhostEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isGhost(bool value) {
		return ((T (*)(IGhostEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

