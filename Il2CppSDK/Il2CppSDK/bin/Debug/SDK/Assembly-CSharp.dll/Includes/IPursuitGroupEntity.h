#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPursuitGroupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPursuitGroupEntity"));
	}


	template <typename T = uintptr_t> T get_pursuitGroup() {
		return ((T (*)(IPursuitGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPursuitGroup() {
		return ((T (*)(IPursuitGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((T (*)(IPursuitGroupEntity*, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newDistance, newGroupName);
	}
	template <typename T = void> T ReplacePursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((T (*)(IPursuitGroupEntity*, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newDistance, newGroupName);
	}
	template <typename T = void> T RemovePursuitGroup() {
		return ((T (*)(IPursuitGroupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
