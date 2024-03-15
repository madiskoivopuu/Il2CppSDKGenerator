#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClickEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClickEntity"));
	}


	template <typename R = bool> R get_isClick() {
		return ((R (*)(IClickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isClick(bool value) {
		return ((R (*)(IClickEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

