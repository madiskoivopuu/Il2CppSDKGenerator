#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMiningEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMiningEntity"));
	}


	template <typename R = MiningComponent*> R get_mining() {
		return ((R (*)(IMiningEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMining() {
		return ((R (*)(IMiningEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<Il2CppString*>* newMagics) {
		return ((R (*)(IMiningEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename R = void> R ReplaceMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<Il2CppString*>* newMagics) {
		return ((R (*)(IMiningEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename R = void> R RemoveMining() {
		return ((R (*)(IMiningEntity*))(Il2CppBase() + 0x0))(this);
	}

};

