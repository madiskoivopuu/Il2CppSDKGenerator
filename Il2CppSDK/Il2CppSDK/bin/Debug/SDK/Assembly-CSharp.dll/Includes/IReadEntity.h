#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IReadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IReadEntity"));
	}


	template <typename R = bool> R get_wasRead() {
		return ((R (*)(IReadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_wasRead(bool value) {
		return ((R (*)(IReadEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

