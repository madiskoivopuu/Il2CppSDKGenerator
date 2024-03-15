#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPursuitGroupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPursuitGroupEntity"));
	}


	template <typename R = PursuitGroupComponent*> R get_pursuitGroup() {
		return ((R (*)(IPursuitGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPursuitGroup() {
		return ((R (*)(IPursuitGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((R (*)(IPursuitGroupEntity*, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newDistance, newGroupName);
	}
	template <typename R = void> R ReplacePursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((R (*)(IPursuitGroupEntity*, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newDistance, newGroupName);
	}
	template <typename R = void> R RemovePursuitGroup() {
		return ((R (*)(IPursuitGroupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

