#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class PrerequisiteWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrerequisiteWindow"));
	}

	template <typename R = PrerequisiteContainer*> R& PrerequisiteContainer() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& DescriptionPanel() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& PassBtn() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& DungeonCaption() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& DungeonText() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = Il2CppArray<DungeonGradeButton*>*> R& DungeonGradeButtons() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& DifficultyHolder() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& ConfirmText() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& DifficultyAnimator() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& _difficultyLayoutGroup() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = bool> R& _cachedPass() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = int32_t> R& _locationGrade() {
		return *(R*)((uintptr_t)this + 0x1AC);
	}
	template <typename R = bool> R& _isAnyPlayerUnlockedPortal() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	 Action1<ButtonHelper*>*& OnDifficultySelected() {
		return *(Action1<ButtonHelper*>**)((uintptr_t)this + 0x1B8);
	}
	 Action2<int32_t, uintptr_t>*& OnConfirm() {
		return *(Action2<int32_t, uintptr_t>**)((uintptr_t)this + 0x1C0);
	}
	template <typename R = uintptr_t> R& OnOfferingAccepted() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}

	template <typename R = bool> R get__isGradeSet() {
		return ((R (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E1604))(this);
	}
	template <typename R = bool> R get__needDifficulty() {
		return ((R (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E1614))(this);
	}
	template <typename R = void> R add_OnDifficultySelected(Action1<ButtonHelper*>* value) {
		return ((R (*)(PrerequisiteWindow*, Action1<ButtonHelper*>*))(Il2CppBase() + 0x16E16A0))(this, value);
	}
	template <typename R = void> R remove_OnDifficultySelected(Action1<ButtonHelper*>* value) {
		return ((R (*)(PrerequisiteWindow*, Action1<ButtonHelper*>*))(Il2CppBase() + 0x16E1744))(this, value);
	}
	template <typename R = void> R add_OnConfirm(Action2<int32_t, uintptr_t>* value) {
		return ((R (*)(PrerequisiteWindow*, Action2<int32_t, uintptr_t>*))(Il2CppBase() + 0x16E17E8))(this, value);
	}
	template <typename R = void> R remove_OnConfirm(Action2<int32_t, uintptr_t>* value) {
		return ((R (*)(PrerequisiteWindow*, Action2<int32_t, uintptr_t>*))(Il2CppBase() + 0x16E188C))(this, value);
	}
	template <typename R = void> R add_OnOfferingAccepted(uintptr_t value) {
		return ((R (*)(PrerequisiteWindow*, uintptr_t))(Il2CppBase() + 0x16E1930))(this, value);
	}
	template <typename R = void> R remove_OnOfferingAccepted(uintptr_t value) {
		return ((R (*)(PrerequisiteWindow*, uintptr_t))(Il2CppBase() + 0x16E19D4))(this, value);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E1A78))(this);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(PrerequisiteWindow*, IInventoryItem*))(Il2CppBase() + 0x16E2004))(this, item);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E24D8))(this);
	}
	template <typename R = void> R ChangeLocationGrade(ButtonHelper* button) {
		return ((R (*)(PrerequisiteWindow*, ButtonHelper*))(Il2CppBase() + 0x16E2740))(this, button);
	}
	template <typename R = void> R Confirm() {
		return ((R (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E27FC))(this);
	}
	template <typename R = void> R OnPassPrerequisiteButtonPressed() {
		return ((R (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E2A04))(this);
	}
	template <typename R = bool> R CanPass(GameEntity* target) {
		return ((R (*)(PrerequisiteWindow*, GameEntity*))(Il2CppBase() + 0x16E2D2C))(this, target);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(PrerequisiteWindow*, float))(Il2CppBase() + 0x16E2FA0))(this, deltaTime);
	}

};

