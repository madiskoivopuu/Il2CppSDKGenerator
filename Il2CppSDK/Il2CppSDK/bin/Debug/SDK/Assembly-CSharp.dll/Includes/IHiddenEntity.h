#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHiddenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHiddenEntity"));
	}


	template <typename T = bool> T get_isHidden() {
		return ((T (*)(IHiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isHidden(bool value) {
		return ((T (*)(IHiddenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
