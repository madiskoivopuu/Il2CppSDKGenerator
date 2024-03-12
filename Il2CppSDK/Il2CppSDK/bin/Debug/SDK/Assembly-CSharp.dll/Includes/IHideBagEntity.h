#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHideBagEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHideBagEntity"));
	}


	template <typename T = bool> T get_isHideBag() {
		return ((T (*)(IHideBagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isHideBag(bool value) {
		return ((T (*)(IHideBagEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
