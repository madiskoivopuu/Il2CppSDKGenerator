#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISharedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISharedEntity"));
	}


	template <typename T = SharedComponent*> T get_shared() {
		return ((T (*)(ISharedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasShared() {
		return ((T (*)(ISharedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddShared(bool newValue, bool newCantSwitch) {
		return ((T (*)(ISharedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newValue, newCantSwitch);
	}
	template <typename T = void> T ReplaceShared(bool newValue, bool newCantSwitch) {
		return ((T (*)(ISharedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newValue, newCantSwitch);
	}
	template <typename T = void> T RemoveShared() {
		return ((T (*)(ISharedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

