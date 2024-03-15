#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFakeBaseEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFakeBaseEntity"));
	}


	template <typename R = bool> R get_isFakeBase() {
		return ((R (*)(IFakeBaseEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isFakeBase(bool value) {
		return ((R (*)(IFakeBaseEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

