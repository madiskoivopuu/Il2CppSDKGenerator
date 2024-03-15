#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDestroyOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDestroyOnDeathEntity"));
	}


	template <typename R = DestroyOnDeathComponent*> R get_destroyOnDeath() {
		return ((R (*)(IDestroyOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDestroyOnDeath() {
		return ((R (*)(IDestroyOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDestroyOnDeath(bool newInstantly) {
		return ((R (*)(IDestroyOnDeathEntity*, bool))(Il2CppBase() + 0x0))(this, newInstantly);
	}
	template <typename R = void> R ReplaceDestroyOnDeath(bool newInstantly) {
		return ((R (*)(IDestroyOnDeathEntity*, bool))(Il2CppBase() + 0x0))(this, newInstantly);
	}
	template <typename R = void> R RemoveDestroyOnDeath() {
		return ((R (*)(IDestroyOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

