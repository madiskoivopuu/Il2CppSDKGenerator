#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IReadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IReadEntity"));
	}


	template <typename T = bool> T get_wasRead() {
		return ((T (*)(IReadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_wasRead(bool value) {
		return ((T (*)(IReadEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
