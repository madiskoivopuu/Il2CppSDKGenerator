#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotAggressiveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotAggressiveEntity"));
	}


	template <typename T = bool> T get_isNotAggressive() {
		return ((T (*)(INotAggressiveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isNotAggressive(bool value) {
		return ((T (*)(INotAggressiveEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
