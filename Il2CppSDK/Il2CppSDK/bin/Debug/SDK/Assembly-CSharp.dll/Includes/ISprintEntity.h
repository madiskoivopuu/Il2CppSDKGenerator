#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISprintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISprintEntity"));
	}


	template <typename T = bool> T get_isSprint() {
		return ((T (*)(ISprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isSprint(bool value) {
		return ((T (*)(ISprintEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

