#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BasePetsInventoryWindow`1" 

class PetTrainerWindow: BasePetsInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetTrainerWindow"));
	}

	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _gradeUpBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _priceIcon() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _priceText() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _enoughTextColor() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _notEnoughTextColor() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _faceImg() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _petIcon() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _petGrade() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _petName() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _petSkills() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _resourcesPanel() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _silverPanel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _canGradeUpDescription() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _conditionFailed() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& _priceCoef() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _currentPetSlot() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& _currentPet() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = int32_t> T& _selectedSkill() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& _silverPrice() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& _sendGradeUp() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PetTrainerWindow*))(Il2CppBase() + 0x16EE304))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PetTrainerWindow*))(Il2CppBase() + 0x16EE4E0))(this);
	}
	template <typename T = void> T SelectArmingPetOrFirst() {
		return ((T (*)(PetTrainerWindow*))(Il2CppBase() + 0x16EE8A8))(this);
	}
	template <typename T = void> T SelectPet(uintptr_t petSlot) {
		return ((T (*)(PetTrainerWindow*, uintptr_t))(Il2CppBase() + 0x16EEC80))(this, petSlot);
	}
	template <typename T = void> T SelectSkill(int32_t index) {
		return ((T (*)(PetTrainerWindow*, int32_t))(Il2CppBase() + 0x16EF240))(this, index);
	}
	template <typename T = void> T UpdateResources(Il2CppArray<uintptr_t>* resources, uintptr_t avatar) {
		return ((T (*)(PetTrainerWindow*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x16EF75C))(this, resources, avatar);
	}
	template <typename T = void> T OnSelect(uintptr_t item) {
		return ((T (*)(PetTrainerWindow*, uintptr_t))(Il2CppBase() + 0x16F0018))(this, item);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(PetTrainerWindow*, float))(Il2CppBase() + 0x16F0080))(this, deltaTime);
	}
	template <typename T = Il2CppString*> T CanGradeUp() {
		return ((T (*)(PetTrainerWindow*))(Il2CppBase() + 0x16EFC18))(this);
	}
	template <typename T = void> T GradeUpClick() {
		return ((T (*)(PetTrainerWindow*))(Il2CppBase() + 0x16F0440))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(PetTrainerWindow*))(Il2CppBase() + 0x16F0794))(this);
	}
	template <typename T = bool> T IsNeedToClose() {
		return ((T (*)(PetTrainerWindow*))(Il2CppBase() + 0x16F02C8))(this);
	}
	template <typename T = void> T OnGradeUpSkillResult(uintptr_t data) {
		return ((T (*)(PetTrainerWindow*, uintptr_t))(Il2CppBase() + 0x16F0A38))(this, data);
	}

};

}
