#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInvisibleEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInvisibleEntity"));
	}


	template <typename T = bool> T get_isInvisible() {
		return ((T (*)(IInvisibleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isInvisible(bool value) {
		return ((T (*)(IInvisibleEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
