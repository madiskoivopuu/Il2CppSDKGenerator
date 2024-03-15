#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInvisibleEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInvisibleEntity"));
	}


	template <typename R = bool> R get_isInvisible() {
		return ((R (*)(IInvisibleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isInvisible(bool value) {
		return ((R (*)(IInvisibleEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

