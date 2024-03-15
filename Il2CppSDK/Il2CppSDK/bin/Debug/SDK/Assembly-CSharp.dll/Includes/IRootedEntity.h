#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRootedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRootedEntity"));
	}


	template <typename R = RootedComponent*> R get_rooted() {
		return ((R (*)(IRootedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRooted() {
		return ((R (*)(IRootedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRooted(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(IRootedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceRooted(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(IRootedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R RemoveRooted() {
		return ((R (*)(IRootedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

