#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotSelectableEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotSelectableEntity"));
	}


	template <typename T = bool> T get_isNotSelectable() {
		return ((T (*)(INotSelectableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isNotSelectable(bool value) {
		return ((T (*)(INotSelectableEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
