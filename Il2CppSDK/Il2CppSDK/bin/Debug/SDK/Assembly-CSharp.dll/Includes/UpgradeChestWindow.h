#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class UpgradeChestWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpgradeChestWindow"));
	}

	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = RecipeSlotView*> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& UpgradeButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = TextMonoBehaviour*> T& Info() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UpgradeChestWindow*))(Il2CppBase() + 0x1541B98))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(UpgradeChestWindow*))(Il2CppBase() + 0x1541C74))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(UpgradeChestWindow*, float))(Il2CppBase() + 0x1542428))(this, deltaTime);
	}
	template <typename T = void> T OnUpgrade() {
		return ((T (*)(UpgradeChestWindow*))(Il2CppBase() + 0x15425BC))(this);
	}

};

