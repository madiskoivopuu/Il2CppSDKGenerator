#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetItem"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _nameText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _gradeText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _armingPetCheckmark() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _selectPetCheckmark() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _lockedPetCheckmark() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& GrayMaterial() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _expPanel() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _expProgress() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _canUpgrade() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _newMark() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _temporaryMark() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& ScrollEnable() {
		return *(R*)((uintptr_t)this + 0x84);
	}
	template <typename R = bool> R& IsScrolling() {
		return *(R*)((uintptr_t)this + 0x85);
	}
	template <typename R = bool> R& Locked() {
		return *(R*)((uintptr_t)this + 0x86);
	}
	template <typename R = Il2CppString*> R& PetType() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = bool> R& IsTemporary() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _stackCount() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = int32_t> R& _index() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> R& _grade() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	template <typename R = InventorySlot*> R& _slot() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> R& _parentId() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> R& _parentPetInventoryId() {
		return *(R*)((uintptr_t)this + 0xAC);
	}
	template <typename R = Il2CppString*> R& _petBlueprint() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	 Nullable1<float>*& _expCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0xB8);
	}
	template <typename R = IItemEventHandler*> R& _handler() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = IPetsInventoryWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _clickStartTime() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = int32_t> R& _clickCount() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0xDC);
	}
	template <typename R = bool> R& _isShowed() {
		return *(R*)((uintptr_t)this + 0xDD);
	}
	template <typename R = bool> R& _forceUpdate() {
		return *(R*)((uintptr_t)this + 0xDE);
	}
	 Action1<IInventoryItem*>*& OnArming() {
		return *(Action1<IInventoryItem*>**)((uintptr_t)this + 0xE0);
	}

	template <typename R = bool> R get_IsArimng() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE410))(this);
	}
	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE5B8))(this);
	}
	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE6BC))(this);
	}
	template <typename R = InventorySlot*> R get_Slot() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE7C0))(this);
	}
	template <typename R = GameEntity*> R get_ParentEntity() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE7C8))(this);
	}
	template <typename R = int32_t> R get_Id() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE8C4))(this);
	}
	template <typename R = void> R set_Id(int32_t value) {
		return ((R (*)(PetItem*, int32_t))(Il2CppBase() + 0x11EE8CC))(this, value);
	}
	template <typename R = int32_t> R get_Index() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE8D4))(this);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE8DC))(this);
	}
	template <typename R = bool> R get_DragEnable() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE968))(this);
	}
	template <typename R = void> R set_DragEnable(bool value) {
		return ((R (*)(PetItem*, bool))(Il2CppBase() + 0x11EE970))(this, value);
	}
	template <typename R = bool> R get_ScrollEnable() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE974))(this);
	}
	template <typename R = void> R set_ScrollEnable(bool value) {
		return ((R (*)(PetItem*, bool))(Il2CppBase() + 0x11EE97C))(this, value);
	}
	template <typename R = bool> R get_IsScrolling() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE988))(this);
	}
	template <typename R = void> R set_IsScrolling(bool value) {
		return ((R (*)(PetItem*, bool))(Il2CppBase() + 0x11EE990))(this, value);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE99C))(this);
	}
	template <typename R = void> R set_Locked(bool value) {
		return ((R (*)(PetItem*, bool))(Il2CppBase() + 0x11EE9A4))(this, value);
	}
	template <typename R = bool> R get_IsChecked() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE9B0))(this);
	}
	template <typename R = Il2CppString*> R get_PetBlueprint() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE9CC))(this);
	}
	template <typename R = Il2CppString*> R get_PetType() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE9D4))(this);
	}
	template <typename R = void> R set_PetType(Il2CppString* value) {
		return ((R (*)(PetItem*, Il2CppString*))(Il2CppBase() + 0x11EE9DC))(this, value);
	}
	template <typename R = bool> R get_IsTemporary() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE9E4))(this);
	}
	template <typename R = void> R set_IsTemporary(bool value) {
		return ((R (*)(PetItem*, bool))(Il2CppBase() + 0x11EE9EC))(this, value);
	}
	template <typename R = bool> R get_IsNew() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EE9F8))(this);
	}
	template <typename R = void> R set_IsNew(bool value) {
		return ((R (*)(PetItem*, bool))(Il2CppBase() + 0x11EEA8C))(this, value);
	}
	template <typename R = void> R add_OnArming(Action1<IInventoryItem*>* value) {
		return ((R (*)(PetItem*, Action1<IInventoryItem*>*))(Il2CppBase() + 0x11EEB48))(this, value);
	}
	template <typename R = void> R remove_OnArming(Action1<IInventoryItem*>* value) {
		return ((R (*)(PetItem*, Action1<IInventoryItem*>*))(Il2CppBase() + 0x11EEBE8))(this, value);
	}
	template <typename R = void> R Bind(IPetsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1<IInventoryItem*>* onArming) {
		return ((R (*)(PetItem*, IPetsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1<IInventoryItem*>*))(Il2CppBase() + 0x11EEC88))(this, window, entity, index, slot, onArming);
	}
	template <typename R = void> R InitItem() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EF014))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EF6F0))(this);
	}
	template <typename R = void> R Show() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EF570))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(PetItem*))(Il2CppBase() + 0x11EF8EC))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EF930))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFB14))(this, eventData);
	}
	template <typename R = void> R OnBeginDrag(uintptr_t eventData) {
		return ((R (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFBD4))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFC0C))(this, eventData);
	}
	template <typename R = void> R OnEndDrag(uintptr_t eventData) {
		return ((R (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFCDC))(this, eventData);
	}
	template <typename R = void> R OnDrop(uintptr_t eventData) {
		return ((R (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFDD8))(this, eventData);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(PetItem*, bool))(Il2CppBase() + 0x11EFE94))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(PetItem*, bool))(Il2CppBase() + 0x11EFF60))(this, visual);
	}
	template <typename R = void> R ChangeSlot(InventorySlot* slot) {
		return ((R (*)(PetItem*, InventorySlot*))(Il2CppBase() + 0x11F0028))(this, slot);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(PetItem*, float))(Il2CppBase() + 0x11F0074))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(PetItem*, float))(Il2CppBase() + 0x11F023C))(this, deltaTime);
	}
	template <typename R = void> R Check(bool isOn) {
		return ((R (*)(PetItem*, bool))(Il2CppBase() + 0x11F07A4))(this, isOn);
	}

};

