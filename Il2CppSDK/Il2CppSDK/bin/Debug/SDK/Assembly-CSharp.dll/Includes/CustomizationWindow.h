#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class CustomizationWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomizationWindow"));
	}

	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _resetBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _applyBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _renameBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _genderSwitchBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _maleImage() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _femaleImage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _showArmorToggle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _showHelmetToggle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _showBackpackToggle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _currentSlotNameText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _playerNameText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _puppetRenderer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _slotsContainer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _slotViewPrefab() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _slotViews() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _itemsContainer() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _itemViewPrefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _itemViews() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> T& _availableCosmetics() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _currentSlotView() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _currentItemView() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _currentGender() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CustomizationWindow*))(Il2CppBase() + 0x163BA4C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(CustomizationWindow*))(Il2CppBase() + 0x163BFCC))(this);
	}
	template <typename T = void> T SetupCosmeticsSlots(uintptr_t puppet) {
		return ((T (*)(CustomizationWindow*, uintptr_t))(Il2CppBase() + 0x163C6EC))(this, puppet);
	}
	template <typename T = bool> T HasNew(uintptr_t equipmentType) {
		return ((T (*)(CustomizationWindow*, uintptr_t))(Il2CppBase() + 0x163CC68))(this, equipmentType);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(CustomizationWindow*, float))(Il2CppBase() + 0x163D664))(this, deltaTime);
	}
	template <typename T = void> T CosmeticSlot_OnClick(uintptr_t slotView) {
		return ((T (*)(CustomizationWindow*, uintptr_t))(Il2CppBase() + 0x163DB2C))(this, slotView);
	}
	template <typename T = void> T SetCurrentCosmeticSlot(uintptr_t slotView) {
		return ((T (*)(CustomizationWindow*, uintptr_t))(Il2CppBase() + 0x163CE40))(this, slotView);
	}
	template <typename T = void> T CosmeticItem_OnClick(uintptr_t item) {
		return ((T (*)(CustomizationWindow*, uintptr_t))(Il2CppBase() + 0x163DFCC))(this, item);
	}
	template <typename T = void> T SetCurrentCosmeticItem(uintptr_t item) {
		return ((T (*)(CustomizationWindow*, uintptr_t))(Il2CppBase() + 0x163DBC4))(this, item);
	}
	template <typename T = void> T UpdatePuppetArming() {
		return ((T (*)(CustomizationWindow*))(Il2CppBase() + 0x163C2FC))(this);
	}
	template <typename T = void> T OnApplyClick() {
		return ((T (*)(CustomizationWindow*))(Il2CppBase() + 0x163E064))(this);
	}
	template <typename T = void> T OnResetClick() {
		return ((T (*)(CustomizationWindow*))(Il2CppBase() + 0x163E478))(this);
	}
	template <typename T = void> T OnGenderSwitchClick() {
		return ((T (*)(CustomizationWindow*))(Il2CppBase() + 0x163E604))(this);
	}
	template <typename T = void> T SetupGender(uintptr_t gender) {
		return ((T (*)(CustomizationWindow*, uintptr_t))(Il2CppBase() + 0x163C20C))(this, gender);
	}
	template <typename T = void> T OnRenameClick() {
		return ((T (*)(CustomizationWindow*))(Il2CppBase() + 0x163E628))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CustomizationWindow*))(Il2CppBase() + 0x163E7D4))(this);
	}
	template <typename T = void> T Awakeb__24_0(bool value) {
		return ((T (*)(CustomizationWindow*, bool))(Il2CppBase() + 0x163E868))(this, value);
	}
	template <typename T = void> T Awakeb__24_1(bool value) {
		return ((T (*)(CustomizationWindow*, bool))(Il2CppBase() + 0x163E86C))(this, value);
	}
	template <typename T = void> T Awakeb__24_2(bool value) {
		return ((T (*)(CustomizationWindow*, bool))(Il2CppBase() + 0x163E870))(this, value);
	}
	template <typename T = bool> T SetCurrentCosmeticSlotb__30_0(uintptr_t c) {
		return ((T (*)(CustomizationWindow*, uintptr_t))(Il2CppBase() + 0x163E874))(this, c);
	}

};

}
