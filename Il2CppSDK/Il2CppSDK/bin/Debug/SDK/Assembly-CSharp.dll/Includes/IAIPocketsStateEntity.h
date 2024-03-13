#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAIPocketsStateEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAIPocketsStateEntity"));
	}


	template <typename T = AIPocketsStateComponent*> T get_aIPocketsState() {
		return ((T (*)(IAIPocketsStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAIPocketsState() {
		return ((T (*)(IAIPocketsStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((T (*)(IAIPocketsStateEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0x0))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename T = void> T ReplaceAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((T (*)(IAIPocketsStateEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0x0))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename T = void> T RemoveAIPocketsState() {
		return ((T (*)(IAIPocketsStateEntity*))(Il2CppBase() + 0x0))(this);
	}

};

