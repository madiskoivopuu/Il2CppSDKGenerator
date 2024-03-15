#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotAggressiveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotAggressiveEntity"));
	}


	template <typename R = bool> R get_isNotAggressive() {
		return ((R (*)(INotAggressiveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isNotAggressive(bool value) {
		return ((R (*)(INotAggressiveEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

