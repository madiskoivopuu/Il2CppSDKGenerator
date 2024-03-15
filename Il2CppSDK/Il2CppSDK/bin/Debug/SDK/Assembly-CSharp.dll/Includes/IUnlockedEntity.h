#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockedEntity"));
	}


	template <typename R = bool> R get_isUnlocked() {
		return ((R (*)(IUnlockedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isUnlocked(bool value) {
		return ((R (*)(IUnlockedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

