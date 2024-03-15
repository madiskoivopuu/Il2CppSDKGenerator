#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBawlEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBawlEntity"));
	}


	template <typename R = BawlComponent*> R get_bawl() {
		return ((R (*)(IBawlEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBawl() {
		return ((R (*)(IBawlEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<Item*>* newList) {
		return ((R (*)(IBawlEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename R = void> R ReplaceBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<Item*>* newList) {
		return ((R (*)(IBawlEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename R = void> R RemoveBawl() {
		return ((R (*)(IBawlEntity*))(Il2CppBase() + 0x0))(this);
	}

};

