#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnhiddenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnhiddenEntity"));
	}


	template <typename R = bool> R get_isUnhidden() {
		return ((R (*)(IUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isUnhidden(bool value) {
		return ((R (*)(IUnhiddenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

