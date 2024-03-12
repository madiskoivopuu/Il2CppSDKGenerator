#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class CartManagementWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartManagementWindow"));
	}

	template <typename T = uintptr_t> T& DialogText() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& dialogAnimator() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& RequirementsContainer() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& ContentPanel() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& FinishPanel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& CheckMark() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& ConstructImage() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& CartLevelText() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& ConstructNameText() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& ConstructDescriptionText() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = bool> T& isResourcesCollected() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& playUnlockSound() {
		return *(T*)((uintptr_t)this + 0x199);
	}
	template <typename T = void*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void*> T GetNeedResources() {
		return ((T (*)(CartManagementWindow*))(Il2CppBase() + 0x15B71C4))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(CartManagementWindow*))(Il2CppBase() + 0x15B74C0))(this);
	}
	template <typename T = void> T CheckResourcesCollected(uintptr_t item) {
		return ((T (*)(CartManagementWindow*, uintptr_t))(Il2CppBase() + 0x15B7F50))(this, item);
	}
	template <typename T = void> T CheckResourcesCollected_1(bool force) {
		return ((T (*)(CartManagementWindow*, bool))(Il2CppBase() + 0x15B7C20))(this, force);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(CartManagementWindow*, uintptr_t))(Il2CppBase() + 0x15B7F58))(this, item);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(CartManagementWindow*, uintptr_t))(Il2CppBase() + 0x15B84AC))(this, item);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(CartManagementWindow*))(Il2CppBase() + 0x15B87CC))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(CartManagementWindow*, float))(Il2CppBase() + 0x15B8A18))(this, deltaTime);
	}
	template <typename T = void> T UpdateDialogLocalization(bool isTrophyRoad) {
		return ((T (*)(CartManagementWindow*, bool))(Il2CppBase() + 0x15B8B00))(this, isTrophyRoad);
	}

};

}
