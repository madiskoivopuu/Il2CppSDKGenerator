#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class InventoryWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryWindow"));
	}

	template <typename T = uintptr_t> T& CustomizationBtn() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& AvatarInfo() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PuppetSlots() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& ClassSlot() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& ClassSkillsPanel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& MountSlot() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& MountSkillsPanel() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& PetSlot() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& PetSkillsPanel() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& SkillItemPrefab() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& PuppetRenderer() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& PlayerStatsBtn() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& PlayerStateShow() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& PlayerStatsBack() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& PlayerStatsPanel() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& HideHeadBtn() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& ShowHeadMark() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& HideHeadMark() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& HidePetBtn() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& ShowPetMark() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& HidePetMark() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& HideBagBtn() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& ShowBagMark() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& HideBagMark() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& NewCosmetics() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = int32_t> T& _classesWindowId() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = int32_t> T& _mountsWindowId() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = int32_t> T& _petsWindowId() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _walletResources() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> T& _availableCosmetics() {
		return *(T*)((uintptr_t)this + 0x230);
	}

	template <typename T = bool> T get__isWindowOverlaped() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x123F410))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWalletResources() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x123F498))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x123F858))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x123FC60))(this);
	}
	template <typename T = void> T SwitchPlayerStatsPanel() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x123FDDC))(this);
	}
	template <typename T = void> T ShowPlayerStatsPanel() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x123FF7C))(this);
	}
	template <typename T = void> T HidePlayerStatsPanel() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x123FE30))(this);
	}
	template <typename T = void> T OnClickClassSlot(uintptr_t slot) {
		return ((T (*)(InventoryWindow*, uintptr_t))(Il2CppBase() + 0x1240080))(this, slot);
	}
	template <typename T = void> T OnClickMountSlot(uintptr_t slot) {
		return ((T (*)(InventoryWindow*, uintptr_t))(Il2CppBase() + 0x12400CC))(this, slot);
	}
	template <typename T = void> T OnClickPetSlot(uintptr_t slot) {
		return ((T (*)(InventoryWindow*, uintptr_t))(Il2CppBase() + 0x1240114))(this, slot);
	}
	template <typename T = void> T OnHideHeadBtnClick() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x124015C))(this);
	}
	template <typename T = void> T OnHidePetBtnClick() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x1240248))(this);
	}
	template <typename T = void> T OnHideBagBtnClick() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x1240334))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x1240420))(this);
	}
	template <typename T = void> T OnCustomizationClick() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x1240DF4))(this);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(InventoryWindow*, float))(Il2CppBase() + 0x1240F2C))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(InventoryWindow*, float))(Il2CppBase() + 0x1240FDC))(this, deltaTime);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(InventoryWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1241854))(this, item, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(InventoryWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1241B20))(this, item, eventData);
	}
	template <typename T = void> T UpdatePuppetSlots(uintptr_t item) {
		return ((T (*)(InventoryWindow*, uintptr_t))(Il2CppBase() + 0x12418FC))(this, item);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(InventoryWindow*))(Il2CppBase() + 0x1241B90))(this);
	}

};

}
