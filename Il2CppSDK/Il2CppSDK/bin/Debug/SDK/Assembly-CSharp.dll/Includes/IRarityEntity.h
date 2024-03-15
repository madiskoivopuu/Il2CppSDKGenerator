#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRarityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRarityEntity"));
	}


	template <typename R = RarityComponent*> R get_rarity() {
		return ((R (*)(IRarityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRarity() {
		return ((R (*)(IRarityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRarity(Rarity newValue) {
		return ((R (*)(IRarityEntity*, Rarity))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceRarity(Rarity newValue) {
		return ((R (*)(IRarityEntity*, Rarity))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveRarity() {
		return ((R (*)(IRarityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

