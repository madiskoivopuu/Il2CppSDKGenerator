#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMiningActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMiningActionEntity"));
	}


	template <typename R = MiningActionComponent*> R get_miningAction() {
		return ((R (*)(IMiningActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMiningAction() {
		return ((R (*)(IMiningActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMiningAction(Il2CppString* newName) {
		return ((R (*)(IMiningActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceMiningAction(Il2CppString* newName) {
		return ((R (*)(IMiningActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveMiningAction() {
		return ((R (*)(IMiningActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

