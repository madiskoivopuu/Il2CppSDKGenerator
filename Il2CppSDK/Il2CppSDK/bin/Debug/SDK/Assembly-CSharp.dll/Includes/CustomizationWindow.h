#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CustomizationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomizationWindow"));
	}

	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _resetBtn() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _applyBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _renameBtn() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _genderSwitchBtn() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _maleImage() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _femaleImage() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _showArmorToggle() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _showHelmetToggle() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _showBackpackToggle() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _currentSlotNameText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _playerNameText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = PuppetRendererController*> R& _puppetRenderer() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _slotsContainer() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = CosmeticItemView*> R& _slotViewPrefab() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	 Il2CppList<CosmeticItemView*>*& _slotViews() {
		return *(Il2CppList<CosmeticItemView*>**)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _itemsContainer() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = CosmeticItemView*> R& _itemViewPrefab() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	 Il2CppList<CosmeticItemView*>*& _itemViews() {
		return *(Il2CppList<CosmeticItemView*>**)((uintptr_t)this + 0x108);
	}
	 Il2CppDictionary<Il2CppString*, bool>*& _availableCosmetics() {
		return *(Il2CppDictionary<Il2CppString*, bool>**)((uintptr_t)this + 0x110);
	}
	template <typename R = CosmeticItemView*> R& _currentSlotView() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = CosmeticItemView*> R& _currentItemView() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = Gender> R& _currentGender() {
		return *(R*)((uintptr_t)this + 0x128);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(CustomizationWindow*))(Il2CppBase() + 0x163BA4C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(CustomizationWindow*))(Il2CppBase() + 0x163BFCC))(this);
	}
	template <typename R = void> R SetupCosmeticsSlots(GameEntity* puppet) {
		return ((R (*)(CustomizationWindow*, GameEntity*))(Il2CppBase() + 0x163C6EC))(this, puppet);
	}
	template <typename R = bool> R HasNew(EquipmentType equipmentType) {
		return ((R (*)(CustomizationWindow*, EquipmentType))(Il2CppBase() + 0x163CC68))(this, equipmentType);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(CustomizationWindow*, float))(Il2CppBase() + 0x163D664))(this, deltaTime);
	}
	template <typename R = void> R CosmeticSlot_OnClick(CosmeticItemView* slotView) {
		return ((R (*)(CustomizationWindow*, CosmeticItemView*))(Il2CppBase() + 0x163DB2C))(this, slotView);
	}
	template <typename R = void> R SetCurrentCosmeticSlot(CosmeticItemView* slotView) {
		return ((R (*)(CustomizationWindow*, CosmeticItemView*))(Il2CppBase() + 0x163CE40))(this, slotView);
	}
	template <typename R = void> R CosmeticItem_OnClick(CosmeticItemView* item) {
		return ((R (*)(CustomizationWindow*, CosmeticItemView*))(Il2CppBase() + 0x163DFCC))(this, item);
	}
	template <typename R = void> R SetCurrentCosmeticItem(CosmeticItemView* item) {
		return ((R (*)(CustomizationWindow*, CosmeticItemView*))(Il2CppBase() + 0x163DBC4))(this, item);
	}
	template <typename R = void> R UpdatePuppetArming() {
		return ((R (*)(CustomizationWindow*))(Il2CppBase() + 0x163C2FC))(this);
	}
	template <typename R = void> R OnApplyClick() {
		return ((R (*)(CustomizationWindow*))(Il2CppBase() + 0x163E064))(this);
	}
	template <typename R = void> R OnResetClick() {
		return ((R (*)(CustomizationWindow*))(Il2CppBase() + 0x163E478))(this);
	}
	template <typename R = void> R OnGenderSwitchClick() {
		return ((R (*)(CustomizationWindow*))(Il2CppBase() + 0x163E604))(this);
	}
	template <typename R = void> R SetupGender(Gender gender) {
		return ((R (*)(CustomizationWindow*, Gender))(Il2CppBase() + 0x163C20C))(this, gender);
	}
	template <typename R = void> R OnRenameClick() {
		return ((R (*)(CustomizationWindow*))(Il2CppBase() + 0x163E628))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(CustomizationWindow*))(Il2CppBase() + 0x163E7D4))(this);
	}
	template <typename R = void> R Awakeb__24_0(bool value) {
		return ((R (*)(CustomizationWindow*, bool))(Il2CppBase() + 0x163E868))(this, value);
	}
	template <typename R = void> R Awakeb__24_1(bool value) {
		return ((R (*)(CustomizationWindow*, bool))(Il2CppBase() + 0x163E86C))(this, value);
	}
	template <typename R = void> R Awakeb__24_2(bool value) {
		return ((R (*)(CustomizationWindow*, bool))(Il2CppBase() + 0x163E870))(this, value);
	}
	template <typename R = bool> R SetCurrentCosmeticSlotb__30_0(ItemEntity* c) {
		return ((R (*)(CustomizationWindow*, ItemEntity*))(Il2CppBase() + 0x163E874))(this, c);
	}

};

