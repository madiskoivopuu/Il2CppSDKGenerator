#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class CraftWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftWindow"));
	}

	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& DefaultIcon() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& AcidBarrelIcon() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& StableIcon() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& ProductionIcon() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& CraftContainer() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& TakeAllButton() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& ShowRecipesButton() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& RemaneWorkerButton() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& CraftTime() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& CraftProgress() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& FuelProgress() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& FuelTime() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& FuelRequiredWarning() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& SkipButton() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& SkipPricePanel() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& SkipButtonText() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& DeadWorkerNotifObject() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& DeadWorkerNotifText() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& ShareToggle() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& revert1e7() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& _skipPrice() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = void*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& _recipesWindowId() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}

	template <typename T = void*> T GetNeedResources() {
		return ((T (*)(CraftWindow*))(Il2CppBase() + 0x1346204))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(CraftWindow*))(Il2CppBase() + 0x1346A80))(this);
	}
	template <typename T = void> T OnShareValueChanged(bool value) {
		return ((T (*)(CraftWindow*, bool))(Il2CppBase() + 0x13471B4))(this, value);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(CraftWindow*))(Il2CppBase() + 0x13472C8))(this);
	}
	template <typename T = void> T ShowRecipes() {
		return ((T (*)(CraftWindow*))(Il2CppBase() + 0x1347530))(this);
	}
	template <typename T = void> T OnTakeAll() {
		return ((T (*)(CraftWindow*))(Il2CppBase() + 0x1347604))(this);
	}
	template <typename T = void> T OnSkip() {
		return ((T (*)(CraftWindow*))(Il2CppBase() + 0x1347694))(this);
	}
	template <typename T = void> T OnRenameButtonClick() {
		return ((T (*)(CraftWindow*))(Il2CppBase() + 0x13478F8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(CraftWindow*, float))(Il2CppBase() + 0x1347960))(this, deltaTime);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CraftWindow*))(Il2CppBase() + 0x1348DDC))(this);
	}

};

}
