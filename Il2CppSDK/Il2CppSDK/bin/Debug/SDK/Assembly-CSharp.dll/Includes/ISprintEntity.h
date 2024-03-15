#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISprintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISprintEntity"));
	}


	template <typename R = bool> R get_isSprint() {
		return ((R (*)(ISprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isSprint(bool value) {
		return ((R (*)(ISprintEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

