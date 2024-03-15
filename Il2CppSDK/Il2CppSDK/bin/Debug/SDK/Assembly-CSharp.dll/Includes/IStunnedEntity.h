#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStunnedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStunnedEntity"));
	}


	template <typename R = StunnedComponent*> R get_stunned() {
		return ((R (*)(IStunnedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStunned() {
		return ((R (*)(IStunnedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStunned(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(IStunnedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceStunned(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(IStunnedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R RemoveStunned() {
		return ((R (*)(IStunnedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

