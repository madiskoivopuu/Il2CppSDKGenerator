#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChestOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChestOnDeathEntity"));
	}


	template <typename R = ChestOnDeathComponent*> R get_chestOnDeath() {
		return ((R (*)(IChestOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasChestOnDeath() {
		return ((R (*)(IChestOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((R (*)(IChestOnDeathEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0x0))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename R = void> R ReplaceChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((R (*)(IChestOnDeathEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0x0))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename R = void> R RemoveChestOnDeath() {
		return ((R (*)(IChestOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

