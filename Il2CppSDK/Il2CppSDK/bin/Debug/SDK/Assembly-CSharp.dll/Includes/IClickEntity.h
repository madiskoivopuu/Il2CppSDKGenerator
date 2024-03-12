#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClickEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClickEntity"));
	}


	template <typename T = bool> T get_isClick() {
		return ((T (*)(IClickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isClick(bool value) {
		return ((T (*)(IClickEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
