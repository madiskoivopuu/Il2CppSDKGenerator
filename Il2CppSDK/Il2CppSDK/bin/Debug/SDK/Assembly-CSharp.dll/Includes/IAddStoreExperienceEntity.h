#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAddStoreExperienceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAddStoreExperienceEntity"));
	}


	template <typename T = uintptr_t> T get_addStoreExperience() {
		return ((T (*)(IAddStoreExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAddStoreExperience() {
		return ((T (*)(IAddStoreExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAddStoreExperience(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IAddStoreExperienceEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename T = void> T ReplaceAddStoreExperience(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IAddStoreExperienceEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename T = void> T RemoveAddStoreExperience() {
		return ((T (*)(IAddStoreExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
