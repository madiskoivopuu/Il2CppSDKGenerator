#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMiningActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMiningActionEntity"));
	}


	template <typename T = MiningActionComponent*> T get_miningAction() {
		return ((T (*)(IMiningActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMiningAction() {
		return ((T (*)(IMiningActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMiningAction(Il2CppString* newName) {
		return ((T (*)(IMiningActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceMiningAction(Il2CppString* newName) {
		return ((T (*)(IMiningActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveMiningAction() {
		return ((T (*)(IMiningActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

