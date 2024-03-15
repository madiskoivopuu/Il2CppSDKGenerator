#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISaveableEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISaveableEntity"));
	}


	template <typename R = bool> R get_isSaveable() {
		return ((R (*)(ISaveableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isSaveable(bool value) {
		return ((R (*)(ISaveableEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

