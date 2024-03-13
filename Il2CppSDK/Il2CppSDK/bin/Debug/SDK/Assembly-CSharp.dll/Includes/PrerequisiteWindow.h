#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class PrerequisiteWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrerequisiteWindow"));
	}

	template <typename T = PrerequisiteContainer*> T& PrerequisiteContainer() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& DescriptionPanel() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& PassBtn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& DungeonCaption() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& DungeonText() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DungeonGradeButtons() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& DifficultyHolder() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& ConfirmText() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& DifficultyAnimator() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& _difficultyLayoutGroup() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& _cachedPass() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& _locationGrade() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& _isAnyPlayerUnlockedPortal() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Action1ButtonHelper*>*> T& OnDifficultySelected() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Action2int32_t, uintptr_t>*> T& OnConfirm() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& OnOfferingAccepted() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = bool> T get__isGradeSet() {
		return ((T (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E1604))(this);
	}
	template <typename T = bool> T get__needDifficulty() {
		return ((T (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E1614))(this);
	}
	template <typename T = void> T add_OnDifficultySelected(Action1ButtonHelper*>* value) {
		return ((T (*)(PrerequisiteWindow*, Action1ButtonHelper*>*))(Il2CppBase() + 0x16E16A0))(this, value);
	}
	template <typename T = void> T remove_OnDifficultySelected(Action1ButtonHelper*>* value) {
		return ((T (*)(PrerequisiteWindow*, Action1ButtonHelper*>*))(Il2CppBase() + 0x16E1744))(this, value);
	}
	template <typename T = void> T add_OnConfirm(Action2int32_t, uintptr_t>* value) {
		return ((T (*)(PrerequisiteWindow*, Action2int32_t, uintptr_t>*))(Il2CppBase() + 0x16E17E8))(this, value);
	}
	template <typename T = void> T remove_OnConfirm(Action2int32_t, uintptr_t>* value) {
		return ((T (*)(PrerequisiteWindow*, Action2int32_t, uintptr_t>*))(Il2CppBase() + 0x16E188C))(this, value);
	}
	template <typename T = void> T add_OnOfferingAccepted(uintptr_t value) {
		return ((T (*)(PrerequisiteWindow*, uintptr_t))(Il2CppBase() + 0x16E1930))(this, value);
	}
	template <typename T = void> T remove_OnOfferingAccepted(uintptr_t value) {
		return ((T (*)(PrerequisiteWindow*, uintptr_t))(Il2CppBase() + 0x16E19D4))(this, value);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E1A78))(this);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(PrerequisiteWindow*, IInventoryItem*))(Il2CppBase() + 0x16E2004))(this, item);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E24D8))(this);
	}
	template <typename T = void> T ChangeLocationGrade(ButtonHelper* button) {
		return ((T (*)(PrerequisiteWindow*, ButtonHelper*))(Il2CppBase() + 0x16E2740))(this, button);
	}
	template <typename T = void> T Confirm() {
		return ((T (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E27FC))(this);
	}
	template <typename T = void> T OnPassPrerequisiteButtonPressed() {
		return ((T (*)(PrerequisiteWindow*))(Il2CppBase() + 0x16E2A04))(this);
	}
	template <typename T = bool> T CanPass(GameEntity* target) {
		return ((T (*)(PrerequisiteWindow*, GameEntity*))(Il2CppBase() + 0x16E2D2C))(this, target);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(PrerequisiteWindow*, float))(Il2CppBase() + 0x16E2FA0))(this, deltaTime);
	}

};

