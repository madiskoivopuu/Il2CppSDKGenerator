#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnhiddenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnhiddenEntity"));
	}


	template <typename T = bool> T get_isUnhidden() {
		return ((T (*)(IUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isUnhidden(bool value) {
		return ((T (*)(IUnhiddenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

