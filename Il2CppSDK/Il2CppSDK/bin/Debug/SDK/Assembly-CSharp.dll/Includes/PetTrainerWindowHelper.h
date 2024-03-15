#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetTrainerWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetTrainerWindowHelper"));
	}


	template <typename R = PetTrainerWindow*> static R ShowPetTrainer(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16F0FF8))(0, manager, targetId);
	}
	template <typename R = PetTrainerWindow*> static R ShowPetTrainer_1(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x16F10C8))(0, manager, dialogueEntity);
	}
	template <typename R = void> static R OnGradeUpSkillResult(UIWindowsManager* manager, GradeUpPetSkillDataResult data) {
		return ((R (*)(void *, UIWindowsManager*, GradeUpPetSkillDataResult))(Il2CppBase() + 0x16F1224))(0, manager, data);
	}
	template <typename R = bool> static R ClosePetTrainer(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16F1340))(0, manager, targetId);
	}

};

