#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMinimapHiddenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMinimapHiddenEntity"));
	}


	template <typename R = bool> R get_isMinimapHidden() {
		return ((R (*)(IMinimapHiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isMinimapHidden(bool value) {
		return ((R (*)(IMinimapHiddenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

