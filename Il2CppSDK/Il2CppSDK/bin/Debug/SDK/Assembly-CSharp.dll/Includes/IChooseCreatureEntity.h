#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChooseCreatureEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChooseCreatureEntity"));
	}


	template <typename R = ChooseCreatureComponent*> R get_chooseCreature() {
		return ((R (*)(IChooseCreatureEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasChooseCreature() {
		return ((R (*)(IChooseCreatureEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((R (*)(IChooseCreatureEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newRandomGroup, newForceSpawn);
	}
	template <typename R = void> R ReplaceChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((R (*)(IChooseCreatureEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newRandomGroup, newForceSpawn);
	}
	template <typename R = void> R RemoveChooseCreature() {
		return ((R (*)(IChooseCreatureEntity*))(Il2CppBase() + 0x0))(this);
	}

};

