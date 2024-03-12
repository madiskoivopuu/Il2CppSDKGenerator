#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDestroyOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDestroyOnDeathEntity"));
	}


	template <typename T = uintptr_t> T get_destroyOnDeath() {
		return ((T (*)(IDestroyOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDestroyOnDeath() {
		return ((T (*)(IDestroyOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDestroyOnDeath(bool newInstantly) {
		return ((T (*)(IDestroyOnDeathEntity*, bool))(Il2CppBase() + 0x0))(this, newInstantly);
	}
	template <typename T = void> T ReplaceDestroyOnDeath(bool newInstantly) {
		return ((T (*)(IDestroyOnDeathEntity*, bool))(Il2CppBase() + 0x0))(this, newInstantly);
	}
	template <typename T = void> T RemoveDestroyOnDeath() {
		return ((T (*)(IDestroyOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
