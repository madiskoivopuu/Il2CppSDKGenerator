#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class InventoryWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryWindow"));
	}

	template <typename R = uintptr_t> R& CustomizationBtn() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = HUDActorInfo*> R& AvatarInfo() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = Il2CppArray<InventoryPuppetSlot*>*> R& PuppetSlots() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = PlayerClassSlot*> R& ClassSlot() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& ClassSkillsPanel() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = PlayerMountSlot*> R& MountSlot() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& MountSkillsPanel() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = PlayerPetSlot*> R& PetSlot() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& PetSkillsPanel() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = InventoryItemDraggable*> R& SkillItemPrefab() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = PuppetRendererController*> R& PuppetRenderer() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& PlayerStatsBtn() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& PlayerStateShow() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = uintptr_t> R& PlayerStatsBack() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = PlayerStatsPanel*> R& PlayerStatsPanel() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = uintptr_t> R& HideHeadBtn() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = uintptr_t> R& ShowHeadMark() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& HideHeadMark() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = uintptr_t> R& HidePetBtn() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = uintptr_t> R& ShowPetMark() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = uintptr_t> R& HidePetMark() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = uintptr_t> R& HideBagBtn() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	template <typename R = uintptr_t> R& ShowBagMark() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = uintptr_t> R& HideBagMark() {
		return *(R*)((uintptr_t)this + 0x208);
	}
	template <typename R = TextMonoBehaviour*> R& NewCosmetics() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	template <typename R = int32_t> R& _classesWindowId() {
		return *(R*)((uintptr_t)this + 0x218);
	}
	template <typename R = int32_t> R& _mountsWindowId() {
		return *(R*)((uintptr_t)this + 0x21C);
	}
	template <typename R = int32_t> R& _petsWindowId() {
		return *(R*)((uintptr_t)this + 0x220);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _walletResources() {
		return *(R*)((uintptr_t)this + 0x228);
	}
	 Il2CppDictionary<Il2CppString*, bool>*& _availableCosmetics() {
		return *(Il2CppDictionary<Il2CppString*, bool>**)((uintptr_t)this + 0x230);
	}

	template <typename R = bool> R get__isWindowOverlaped() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x123F410))(this);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R GetWalletResources() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x123F498))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x123F858))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x123FC60))(this);
	}
	template <typename R = void> R SwitchPlayerStatsPanel() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x123FDDC))(this);
	}
	template <typename R = void> R ShowPlayerStatsPanel() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x123FF7C))(this);
	}
	template <typename R = void> R HidePlayerStatsPanel() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x123FE30))(this);
	}
	template <typename R = void> R OnClickClassSlot(PlayerClassSlot* slot) {
		return ((R (*)(InventoryWindow*, PlayerClassSlot*))(Il2CppBase() + 0x1240080))(this, slot);
	}
	template <typename R = void> R OnClickMountSlot(PlayerMountSlot* slot) {
		return ((R (*)(InventoryWindow*, PlayerMountSlot*))(Il2CppBase() + 0x12400CC))(this, slot);
	}
	template <typename R = void> R OnClickPetSlot(PlayerPetSlot* slot) {
		return ((R (*)(InventoryWindow*, PlayerPetSlot*))(Il2CppBase() + 0x1240114))(this, slot);
	}
	template <typename R = void> R OnHideHeadBtnClick() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x124015C))(this);
	}
	template <typename R = void> R OnHidePetBtnClick() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x1240248))(this);
	}
	template <typename R = void> R OnHideBagBtnClick() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x1240334))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x1240420))(this);
	}
	template <typename R = void> R OnCustomizationClick() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x1240DF4))(this);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(InventoryWindow*, float))(Il2CppBase() + 0x1240F2C))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(InventoryWindow*, float))(Il2CppBase() + 0x1240FDC))(this, deltaTime);
	}
	template <typename R = void> R OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(InventoryWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1241854))(this, item, eventData);
	}
	template <typename R = void> R OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(InventoryWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1241B20))(this, item, eventData);
	}
	template <typename R = void> R UpdatePuppetSlots(ItemEntity* item) {
		return ((R (*)(InventoryWindow*, ItemEntity*))(Il2CppBase() + 0x12418FC))(this, item);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(InventoryWindow*))(Il2CppBase() + 0x1241B90))(this);
	}

};

