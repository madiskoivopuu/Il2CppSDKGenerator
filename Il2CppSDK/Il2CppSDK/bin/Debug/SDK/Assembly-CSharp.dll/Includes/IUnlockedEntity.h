#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockedEntity"));
	}


	template <typename T = bool> T get_isUnlocked() {
		return ((T (*)(IUnlockedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isUnlocked(bool value) {
		return ((T (*)(IUnlockedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

