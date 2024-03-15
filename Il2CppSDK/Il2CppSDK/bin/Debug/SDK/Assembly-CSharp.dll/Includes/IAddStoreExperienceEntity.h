#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAddStoreExperienceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAddStoreExperienceEntity"));
	}


	template <typename R = AddStoreExperienceComponent*> R get_addStoreExperience() {
		return ((R (*)(IAddStoreExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAddStoreExperience() {
		return ((R (*)(IAddStoreExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAddStoreExperience(Il2CppArray<Entry*>* newList) {
		return ((R (*)(IAddStoreExperienceEntity*, Il2CppArray<Entry*>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename R = void> R ReplaceAddStoreExperience(Il2CppArray<Entry*>* newList) {
		return ((R (*)(IAddStoreExperienceEntity*, Il2CppArray<Entry*>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename R = void> R RemoveAddStoreExperience() {
		return ((R (*)(IAddStoreExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

