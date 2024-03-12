#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetItem"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _nameText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _gradeText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _armingPetCheckmark() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _selectPetCheckmark() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _lockedPetCheckmark() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& GrayMaterial() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _expPanel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _expProgress() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _canUpgrade() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _newMark() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _temporaryMark() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& ScrollEnable() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& IsScrolling() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = bool> T& Locked() {
		return *(T*)((uintptr_t)this + 0x86);
	}
	template <typename T = Il2CppString*> T& PetType() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsTemporary() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _stackCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& _grade() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& _slot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _parentId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _parentPetInventoryId() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& _petBlueprint() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = void*> T& _expCoef() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _handler() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _clickStartTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& _clickCount() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& _isShowed() {
		return *(T*)((uintptr_t)this + 0xDD);
	}
	template <typename T = bool> T& _forceUpdate() {
		return *(T*)((uintptr_t)this + 0xDE);
	}
	template <typename T = void*> T& OnArming() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = bool> T get_IsArimng() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE410))(this);
	}
	template <typename T = uintptr_t> T get_Item() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE5B8))(this);
	}
	template <typename T = uintptr_t> T get_SlotEntity() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE6BC))(this);
	}
	template <typename T = uintptr_t> T get_Slot() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE7C0))(this);
	}
	template <typename T = uintptr_t> T get_ParentEntity() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE7C8))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE8C4))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(PetItem*, int32_t))(Il2CppBase() + 0x11EE8CC))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE8D4))(this);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE8DC))(this);
	}
	template <typename T = bool> T get_DragEnable() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE968))(this);
	}
	template <typename T = void> T set_DragEnable(bool value) {
		return ((T (*)(PetItem*, bool))(Il2CppBase() + 0x11EE970))(this, value);
	}
	template <typename T = bool> T get_ScrollEnable() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE974))(this);
	}
	template <typename T = void> T set_ScrollEnable(bool value) {
		return ((T (*)(PetItem*, bool))(Il2CppBase() + 0x11EE97C))(this, value);
	}
	template <typename T = bool> T get_IsScrolling() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE988))(this);
	}
	template <typename T = void> T set_IsScrolling(bool value) {
		return ((T (*)(PetItem*, bool))(Il2CppBase() + 0x11EE990))(this, value);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE99C))(this);
	}
	template <typename T = void> T set_Locked(bool value) {
		return ((T (*)(PetItem*, bool))(Il2CppBase() + 0x11EE9A4))(this, value);
	}
	template <typename T = bool> T get_IsChecked() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE9B0))(this);
	}
	template <typename T = Il2CppString*> T get_PetBlueprint() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE9CC))(this);
	}
	template <typename T = Il2CppString*> T get_PetType() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE9D4))(this);
	}
	template <typename T = void> T set_PetType(Il2CppString* value) {
		return ((T (*)(PetItem*, Il2CppString*))(Il2CppBase() + 0x11EE9DC))(this, value);
	}
	template <typename T = bool> T get_IsTemporary() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE9E4))(this);
	}
	template <typename T = void> T set_IsTemporary(bool value) {
		return ((T (*)(PetItem*, bool))(Il2CppBase() + 0x11EE9EC))(this, value);
	}
	template <typename T = bool> T get_IsNew() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EE9F8))(this);
	}
	template <typename T = void> T set_IsNew(bool value) {
		return ((T (*)(PetItem*, bool))(Il2CppBase() + 0x11EEA8C))(this, value);
	}
	template <typename T = void> T add_OnArming(void* value) {
		return ((T (*)(PetItem*, void*))(Il2CppBase() + 0x11EEB48))(this, value);
	}
	template <typename T = void> T remove_OnArming(void* value) {
		return ((T (*)(PetItem*, void*))(Il2CppBase() + 0x11EEBE8))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity, int32_t index, uintptr_t slot, void* onArming) {
		return ((T (*)(PetItem*, uintptr_t, uintptr_t, int32_t, uintptr_t, void*))(Il2CppBase() + 0x11EEC88))(this, window, entity, index, slot, onArming);
	}
	template <typename T = void> T InitItem() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EF014))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EF6F0))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EF570))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(PetItem*))(Il2CppBase() + 0x11EF8EC))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EF930))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFB14))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFBD4))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFC0C))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFCDC))(this, eventData);
	}
	template <typename T = void> T OnDrop(uintptr_t eventData) {
		return ((T (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11EFDD8))(this, eventData);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(PetItem*, bool))(Il2CppBase() + 0x11EFE94))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(PetItem*, bool))(Il2CppBase() + 0x11EFF60))(this, visual);
	}
	template <typename T = void> T ChangeSlot(uintptr_t slot) {
		return ((T (*)(PetItem*, uintptr_t))(Il2CppBase() + 0x11F0028))(this, slot);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(PetItem*, float))(Il2CppBase() + 0x11F0074))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(PetItem*, float))(Il2CppBase() + 0x11F023C))(this, deltaTime);
	}
	template <typename T = void> T Check(bool isOn) {
		return ((T (*)(PetItem*, bool))(Il2CppBase() + 0x11F07A4))(this, isOn);
	}

};

}
