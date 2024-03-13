#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICorpseDestructionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICorpseDestructionEntity"));
	}


	template <typename T = CorpseDestructionComponent*> T get_corpseDestruction() {
		return ((T (*)(ICorpseDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCorpseDestruction() {
		return ((T (*)(ICorpseDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCorpseDestruction(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ICorpseDestructionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceCorpseDestruction(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ICorpseDestructionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveCorpseDestruction() {
		return ((T (*)(ICorpseDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

