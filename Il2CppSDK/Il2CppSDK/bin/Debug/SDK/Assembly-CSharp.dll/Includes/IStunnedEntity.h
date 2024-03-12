#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStunnedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStunnedEntity"));
	}


	template <typename T = uintptr_t> T get_stunned() {
		return ((T (*)(IStunnedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStunned() {
		return ((T (*)(IStunnedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStunned(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(IStunnedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceStunned(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(IStunnedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T RemoveStunned() {
		return ((T (*)(IStunnedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
