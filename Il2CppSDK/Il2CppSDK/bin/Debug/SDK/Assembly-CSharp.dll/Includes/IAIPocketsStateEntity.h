#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAIPocketsStateEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAIPocketsStateEntity"));
	}


	template <typename R = AIPocketsStateComponent*> R get_aIPocketsState() {
		return ((R (*)(IAIPocketsStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAIPocketsState() {
		return ((R (*)(IAIPocketsStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((R (*)(IAIPocketsStateEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0x0))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename R = void> R ReplaceAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((R (*)(IAIPocketsStateEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0x0))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename R = void> R RemoveAIPocketsState() {
		return ((R (*)(IAIPocketsStateEntity*))(Il2CppBase() + 0x0))(this);
	}

};

