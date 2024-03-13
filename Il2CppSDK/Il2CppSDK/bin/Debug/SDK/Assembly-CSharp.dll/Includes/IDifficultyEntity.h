#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDifficultyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDifficultyEntity"));
	}


	template <typename T = DifficultyComponent*> T get_difficulty() {
		return ((T (*)(IDifficultyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDifficulty() {
		return ((T (*)(IDifficultyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDifficulty(Difficulty* newType) {
		return ((T (*)(IDifficultyEntity*, Difficulty*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceDifficulty(Difficulty* newType) {
		return ((T (*)(IDifficultyEntity*, Difficulty*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveDifficulty() {
		return ((T (*)(IDifficultyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

