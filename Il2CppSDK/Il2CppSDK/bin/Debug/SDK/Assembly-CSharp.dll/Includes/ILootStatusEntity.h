#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILootStatusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILootStatusEntity"));
	}


	template <typename R = LootStatusComponent*> R get_lootStatus() {
		return ((R (*)(ILootStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLootStatus() {
		return ((R (*)(ILootStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((R (*)(ILootStatusEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newTag, newWeight);
	}
	template <typename R = void> R ReplaceLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((R (*)(ILootStatusEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newTag, newWeight);
	}
	template <typename R = void> R RemoveLootStatus() {
		return ((R (*)(ILootStatusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

