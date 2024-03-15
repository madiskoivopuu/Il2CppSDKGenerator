#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotSelectableEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotSelectableEntity"));
	}


	template <typename R = bool> R get_isNotSelectable() {
		return ((R (*)(INotSelectableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isNotSelectable(bool value) {
		return ((R (*)(INotSelectableEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

