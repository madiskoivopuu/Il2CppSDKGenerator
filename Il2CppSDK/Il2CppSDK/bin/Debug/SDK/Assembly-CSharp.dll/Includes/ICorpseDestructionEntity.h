#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICorpseDestructionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICorpseDestructionEntity"));
	}


	template <typename R = CorpseDestructionComponent*> R get_corpseDestruction() {
		return ((R (*)(ICorpseDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCorpseDestruction() {
		return ((R (*)(ICorpseDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCorpseDestruction(Il2CppArray<LevelTime*>* newValues) {
		return ((R (*)(ICorpseDestructionEntity*, Il2CppArray<LevelTime*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceCorpseDestruction(Il2CppArray<LevelTime*>* newValues) {
		return ((R (*)(ICorpseDestructionEntity*, Il2CppArray<LevelTime*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveCorpseDestruction() {
		return ((R (*)(ICorpseDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

