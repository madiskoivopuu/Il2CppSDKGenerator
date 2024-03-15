#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHiddenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHiddenEntity"));
	}


	template <typename R = bool> R get_isHidden() {
		return ((R (*)(IHiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isHidden(bool value) {
		return ((R (*)(IHiddenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

