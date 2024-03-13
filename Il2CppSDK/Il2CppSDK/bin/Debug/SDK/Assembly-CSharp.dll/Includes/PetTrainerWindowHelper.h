#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetTrainerWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetTrainerWindowHelper"));
	}


	template <typename T = PetTrainerWindow*> static T ShowPetTrainer(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16F0FF8))(0, manager, targetId);
	}
	template <typename T = PetTrainerWindow*> static T ShowPetTrainer_1(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x16F10C8))(0, manager, dialogueEntity);
	}
	template <typename T = void> static T OnGradeUpSkillResult(UIWindowsManager* manager, GradeUpPetSkillDataResult* data) {
		return ((T (*)(void *, UIWindowsManager*, GradeUpPetSkillDataResult*))(Il2CppBase() + 0x16F1224))(0, manager, data);
	}
	template <typename T = bool> static T ClosePetTrainer(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16F1340))(0, manager, targetId);
	}

};

