#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInfinityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInfinityEntity"));
	}


	template <typename T = bool> T get_isInfinity() {
		return ((T (*)(IInfinityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isInfinity(bool value) {
		return ((T (*)(IInfinityEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
