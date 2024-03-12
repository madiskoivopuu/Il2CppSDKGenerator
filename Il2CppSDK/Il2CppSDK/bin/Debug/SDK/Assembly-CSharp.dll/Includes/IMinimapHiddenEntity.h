#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMinimapHiddenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMinimapHiddenEntity"));
	}


	template <typename T = bool> T get_isMinimapHidden() {
		return ((T (*)(IMinimapHiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isMinimapHidden(bool value) {
		return ((T (*)(IMinimapHiddenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
