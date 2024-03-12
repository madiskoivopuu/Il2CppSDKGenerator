#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetTrainerWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetTrainerWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowPetTrainer(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x16F0FF8))(0, manager, targetId);
	}
	template <typename T = uintptr_t> static T ShowPetTrainer_1(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16F10C8))(0, manager, dialogueEntity);
	}
	template <typename T = void> static T OnGradeUpSkillResult(uintptr_t manager, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16F1224))(0, manager, data);
	}
	template <typename T = bool> static T ClosePetTrainer(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x16F1340))(0, manager, targetId);
	}

};

}
