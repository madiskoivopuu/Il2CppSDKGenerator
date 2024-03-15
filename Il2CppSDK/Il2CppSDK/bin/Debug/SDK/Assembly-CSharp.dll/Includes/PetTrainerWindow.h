#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BasePetsInventoryWindow1.h" 

class PetTrainerWindow : public BasePetsInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetTrainerWindow"));
	}

	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = StandartButton*> R& _gradeUpBtn() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _priceIcon() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _priceText() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _enoughTextColor() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& _notEnoughTextColor() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& _faceImg() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& _petIcon() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& _petGrade() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& _petName() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = Il2CppArray<PetSkillGradeUpView*>*> R& _petSkills() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& _resourcesPanel() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _resourceViews() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = HUDStorePanel*> R& _silverPanel() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& _canGradeUpDescription() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& _conditionFailed() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = float> R& _priceCoef() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = InventorySlotEntity*> R& _currentPetSlot() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = ItemEntity*> R& _currentPet() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = int32_t> R& _selectedSkill() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = int32_t> R& _silverPrice() {
		return *(R*)((uintptr_t)this + 0x19C);
	}
	template <typename R = bool> R& _sendGradeUp() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(PetTrainerWindow*))(Il2CppBase() + 0x16EE304))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PetTrainerWindow*))(Il2CppBase() + 0x16EE4E0))(this);
	}
	template <typename R = void> R SelectArmingPetOrFirst() {
		return ((R (*)(PetTrainerWindow*))(Il2CppBase() + 0x16EE8A8))(this);
	}
	template <typename R = void> R SelectPet(InventorySlotEntity* petSlot) {
		return ((R (*)(PetTrainerWindow*, InventorySlotEntity*))(Il2CppBase() + 0x16EEC80))(this, petSlot);
	}
	template <typename R = void> R SelectSkill(int32_t index) {
		return ((R (*)(PetTrainerWindow*, int32_t))(Il2CppBase() + 0x16EF240))(this, index);
	}
	template <typename R = void> R UpdateResources(Il2CppArray<Resource*>* resources, GameEntity* avatar) {
		return ((R (*)(PetTrainerWindow*, Il2CppArray<Resource*>*, GameEntity*))(Il2CppBase() + 0x16EF75C))(this, resources, avatar);
	}
	template <typename R = void> R OnSelect(IInventoryItem* item) {
		return ((R (*)(PetTrainerWindow*, IInventoryItem*))(Il2CppBase() + 0x16F0018))(this, item);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(PetTrainerWindow*, float))(Il2CppBase() + 0x16F0080))(this, deltaTime);
	}
	template <typename R = Il2CppString*> R CanGradeUp() {
		return ((R (*)(PetTrainerWindow*))(Il2CppBase() + 0x16EFC18))(this);
	}
	template <typename R = void> R GradeUpClick() {
		return ((R (*)(PetTrainerWindow*))(Il2CppBase() + 0x16F0440))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(PetTrainerWindow*))(Il2CppBase() + 0x16F0794))(this);
	}
	template <typename R = bool> R IsNeedToClose() {
		return ((R (*)(PetTrainerWindow*))(Il2CppBase() + 0x16F02C8))(this);
	}
	template <typename R = void> R OnGradeUpSkillResult(GradeUpPetSkillDataResult* data) {
		return ((R (*)(PetTrainerWindow*, GradeUpPetSkillDataResult*))(Il2CppBase() + 0x16F0A38))(this, data);
	}

};

