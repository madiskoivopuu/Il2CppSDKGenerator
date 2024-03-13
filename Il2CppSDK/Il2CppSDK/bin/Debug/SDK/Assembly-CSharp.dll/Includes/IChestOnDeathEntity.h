#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChestOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChestOnDeathEntity"));
	}


	template <typename T = ChestOnDeathComponent*> T get_chestOnDeath() {
		return ((T (*)(IChestOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasChestOnDeath() {
		return ((T (*)(IChestOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((T (*)(IChestOnDeathEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0x0))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename T = void> T ReplaceChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((T (*)(IChestOnDeathEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0x0))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename T = void> T RemoveChestOnDeath() {
		return ((T (*)(IChestOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

