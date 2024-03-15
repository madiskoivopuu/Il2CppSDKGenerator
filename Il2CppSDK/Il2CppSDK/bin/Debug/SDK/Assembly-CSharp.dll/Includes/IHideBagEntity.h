#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHideBagEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHideBagEntity"));
	}


	template <typename R = bool> R get_isHideBag() {
		return ((R (*)(IHideBagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isHideBag(bool value) {
		return ((R (*)(IHideBagEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

