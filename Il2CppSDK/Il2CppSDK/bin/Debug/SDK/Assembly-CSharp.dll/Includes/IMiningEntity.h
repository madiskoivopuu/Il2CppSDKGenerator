#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMiningEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMiningEntity"));
	}


	template <typename T = uintptr_t> T get_mining() {
		return ((T (*)(IMiningEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMining() {
		return ((T (*)(IMiningEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(IMiningEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename T = void> T ReplaceMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(IMiningEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename T = void> T RemoveMining() {
		return ((T (*)(IMiningEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
