#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISaveableEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISaveableEntity"));
	}


	template <typename T = bool> T get_isSaveable() {
		return ((T (*)(ISaveableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isSaveable(bool value) {
		return ((T (*)(ISaveableEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

