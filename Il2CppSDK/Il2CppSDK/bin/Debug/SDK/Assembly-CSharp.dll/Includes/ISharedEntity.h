#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISharedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISharedEntity"));
	}


	template <typename R = SharedComponent*> R get_shared() {
		return ((R (*)(ISharedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasShared() {
		return ((R (*)(ISharedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddShared(bool newValue, bool newCantSwitch) {
		return ((R (*)(ISharedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newValue, newCantSwitch);
	}
	template <typename R = void> R ReplaceShared(bool newValue, bool newCantSwitch) {
		return ((R (*)(ISharedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newValue, newCantSwitch);
	}
	template <typename R = void> R RemoveShared() {
		return ((R (*)(ISharedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

