#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class CartManagementWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartManagementWindow"));
	}

	template <typename R = uintptr_t> R& DialogText() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& dialogAnimator() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = CartRequirementsContainer*> R& RequirementsContainer() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& ContentPanel() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& FinishPanel() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& CheckMark() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& ConstructImage() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& CartLevelText() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& ConstructNameText() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& ConstructDescriptionText() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = bool> R& isResourcesCollected() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = bool> R& playUnlockSound() {
		return *(R*)((uintptr_t)this + 0x199);
	}
	 HashSet1<Il2CppString*>*& _needResources() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x1A0);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(CartManagementWindow*))(Il2CppBase() + 0x15B71C4))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(CartManagementWindow*))(Il2CppBase() + 0x15B74C0))(this);
	}
	template <typename R = void> R CheckResourcesCollected(InventoryItem* item) {
		return ((R (*)(CartManagementWindow*, InventoryItem*))(Il2CppBase() + 0x15B7F50))(this, item);
	}
	template <typename R = void> R CheckResourcesCollected_1(bool force) {
		return ((R (*)(CartManagementWindow*, bool))(Il2CppBase() + 0x15B7C20))(this, force);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(CartManagementWindow*, IInventoryItem*))(Il2CppBase() + 0x15B7F58))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(CartManagementWindow*, IInventoryItem*))(Il2CppBase() + 0x15B84AC))(this, item);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(CartManagementWindow*))(Il2CppBase() + 0x15B87CC))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(CartManagementWindow*, float))(Il2CppBase() + 0x15B8A18))(this, deltaTime);
	}
	template <typename R = void> R UpdateDialogLocalization(bool isTrophyRoad) {
		return ((R (*)(CartManagementWindow*, bool))(Il2CppBase() + 0x15B8B00))(this, isTrophyRoad);
	}

};

