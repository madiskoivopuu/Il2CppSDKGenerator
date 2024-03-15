#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotInteractableEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotInteractableEntity"));
	}


	template <typename R = bool> R get_isNotInteractable() {
		return ((R (*)(INotInteractableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isNotInteractable(bool value) {
		return ((R (*)(INotInteractableEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

