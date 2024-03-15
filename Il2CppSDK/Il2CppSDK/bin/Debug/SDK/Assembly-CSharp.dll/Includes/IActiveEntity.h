#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActiveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActiveEntity"));
	}


	template <typename R = ActiveComponent*> R get_active() {
		return ((R (*)(IActiveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasActive() {
		return ((R (*)(IActiveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddActive(bool newValue) {
		return ((R (*)(IActiveEntity*, bool))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceActive(bool newValue) {
		return ((R (*)(IActiveEntity*, bool))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveActive() {
		return ((R (*)(IActiveEntity*))(Il2CppBase() + 0x0))(this);
	}

};

