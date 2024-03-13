#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChanceEntity"));
	}


	template <typename T = ChanceComponent*> T get_chance() {
		return ((T (*)(IChanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasChance() {
		return ((T (*)(IChanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IChanceEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValue, newName, newNames);
	}
	template <typename T = void> T ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IChanceEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValue, newName, newNames);
	}
	template <typename T = void> T RemoveChance() {
		return ((T (*)(IChanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

