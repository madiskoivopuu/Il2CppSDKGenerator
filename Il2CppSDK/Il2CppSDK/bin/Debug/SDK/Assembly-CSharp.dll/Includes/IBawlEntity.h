#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBawlEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBawlEntity"));
	}


	template <typename T = uintptr_t> T get_bawl() {
		return ((T (*)(IBawlEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBawl() {
		return ((T (*)(IBawlEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IBawlEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename T = void> T ReplaceBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IBawlEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename T = void> T RemoveBawl() {
		return ((T (*)(IBawlEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
