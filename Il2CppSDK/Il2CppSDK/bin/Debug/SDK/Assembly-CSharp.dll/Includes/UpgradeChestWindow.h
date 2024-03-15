#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class UpgradeChestWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpgradeChestWindow"));
	}

	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = RecipeSlotView*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& UpgradeButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = TextMonoBehaviour*> R& Info() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(UpgradeChestWindow*))(Il2CppBase() + 0x1541B98))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(UpgradeChestWindow*))(Il2CppBase() + 0x1541C74))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(UpgradeChestWindow*, float))(Il2CppBase() + 0x1542428))(this, deltaTime);
	}
	template <typename R = void> R OnUpgrade() {
		return ((R (*)(UpgradeChestWindow*))(Il2CppBase() + 0x15425BC))(this);
	}

};

