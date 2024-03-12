#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotInteractableEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotInteractableEntity"));
	}


	template <typename T = bool> T get_isNotInteractable() {
		return ((T (*)(INotInteractableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isNotInteractable(bool value) {
		return ((T (*)(INotInteractableEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
