#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChooseCreatureEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChooseCreatureEntity"));
	}


	template <typename T = ChooseCreatureComponent*> T get_chooseCreature() {
		return ((T (*)(IChooseCreatureEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasChooseCreature() {
		return ((T (*)(IChooseCreatureEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((T (*)(IChooseCreatureEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newRandomGroup, newForceSpawn);
	}
	template <typename T = void> T ReplaceChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((T (*)(IChooseCreatureEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newRandomGroup, newForceSpawn);
	}
	template <typename T = void> T RemoveChooseCreature() {
		return ((T (*)(IChooseCreatureEntity*))(Il2CppBase() + 0x0))(this);
	}

};

