#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInfinityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInfinityEntity"));
	}


	template <typename R = bool> R get_isInfinity() {
		return ((R (*)(IInfinityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isInfinity(bool value) {
		return ((R (*)(IInfinityEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

