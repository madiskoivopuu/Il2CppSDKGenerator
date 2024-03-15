#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDifficultyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDifficultyEntity"));
	}


	template <typename R = DifficultyComponent*> R get_difficulty() {
		return ((R (*)(IDifficultyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDifficulty() {
		return ((R (*)(IDifficultyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDifficulty(Difficulty* newType) {
		return ((R (*)(IDifficultyEntity*, Difficulty*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceDifficulty(Difficulty* newType) {
		return ((R (*)(IDifficultyEntity*, Difficulty*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveDifficulty() {
		return ((R (*)(IDifficultyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

