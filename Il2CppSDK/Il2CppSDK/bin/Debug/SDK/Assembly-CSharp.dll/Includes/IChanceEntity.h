#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChanceEntity"));
	}


	template <typename R = ChanceComponent*> R get_chance() {
		return ((R (*)(IChanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasChance() {
		return ((R (*)(IChanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IChanceEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValue, newName, newNames);
	}
	template <typename R = void> R ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IChanceEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValue, newName, newNames);
	}
	template <typename R = void> R RemoveChance() {
		return ((R (*)(IChanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

