#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFakeBaseEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFakeBaseEntity"));
	}


	template <typename T = bool> T get_isFakeBase() {
		return ((T (*)(IFakeBaseEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isFakeBase(bool value) {
		return ((T (*)(IFakeBaseEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
