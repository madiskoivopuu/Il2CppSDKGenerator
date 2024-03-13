#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRootedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRootedEntity"));
	}


	template <typename T = RootedComponent*> T get_rooted() {
		return ((T (*)(IRootedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRooted() {
		return ((T (*)(IRootedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRooted(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(IRootedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceRooted(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(IRootedEntity*, bool, bool))(Il2CppBase() + 0x0))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T RemoveRooted() {
		return ((T (*)(IRootedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

