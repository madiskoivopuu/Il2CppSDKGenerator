#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInstabilityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInstabilityEntity"));
	}


	template <typename T = bool> T get_isInstability() {
		return ((T (*)(IInstabilityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isInstability(bool value) {
		return ((T (*)(IInstabilityEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

