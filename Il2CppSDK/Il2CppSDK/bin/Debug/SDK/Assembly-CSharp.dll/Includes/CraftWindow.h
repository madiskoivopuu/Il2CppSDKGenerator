#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class CraftWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftWindow"));
	}

	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& DefaultIcon() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& AcidBarrelIcon() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& StableIcon() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& ProductionIcon() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = CraftContainer*> R& CraftContainer() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& TakeAllButton() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& ShowRecipesButton() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& RemaneWorkerButton() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& CraftTime() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& CraftProgress() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& FuelProgress() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& FuelTime() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& FuelRequiredWarning() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = uintptr_t> R& SkipButton() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& SkipPricePanel() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = uintptr_t> R& SkipButtonText() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = uintptr_t> R& DeadWorkerNotifObject() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& DeadWorkerNotifText() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = uintptr_t> R& ShareToggle() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = float> R& revert1e7() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = float> R& _skipPrice() {
		return *(R*)((uintptr_t)this + 0x1EC);
	}
	 HashSet1Il2CppString*>*& _needResources() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x1F0);
	}
	template <typename R = int32_t> R& _recipesWindowId() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}

	 HashSet1Il2CppString*>* GetNeedResources() {
		return ((HashSet1Il2CppString*>* (*)(CraftWindow*))(Il2CppBase() + 0x1346204))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(CraftWindow*))(Il2CppBase() + 0x1346A80))(this);
	}
	template <typename R = void> R OnShareValueChanged(bool value) {
		return ((R (*)(CraftWindow*, bool))(Il2CppBase() + 0x13471B4))(this, value);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(CraftWindow*))(Il2CppBase() + 0x13472C8))(this);
	}
	template <typename R = void> R ShowRecipes() {
		return ((R (*)(CraftWindow*))(Il2CppBase() + 0x1347530))(this);
	}
	template <typename R = void> R OnTakeAll() {
		return ((R (*)(CraftWindow*))(Il2CppBase() + 0x1347604))(this);
	}
	template <typename R = void> R OnSkip() {
		return ((R (*)(CraftWindow*))(Il2CppBase() + 0x1347694))(this);
	}
	template <typename R = void> R OnRenameButtonClick() {
		return ((R (*)(CraftWindow*))(Il2CppBase() + 0x13478F8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(CraftWindow*, float))(Il2CppBase() + 0x1347960))(this, deltaTime);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(CraftWindow*))(Il2CppBase() + 0x1348DDC))(this);
	}

};

