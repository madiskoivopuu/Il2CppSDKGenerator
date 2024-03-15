#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneItemDragged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItemDragged"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _gradeText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = InventorySlotEntity*> R& SlotEntity() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& IsRuneItem() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = bool> R& IsMaxGrade() {
		return *(R*)((uintptr_t)this + 0x3D);
	}
	template <typename R = bool> R& Permanent() {
		return *(R*)((uintptr_t)this + 0x3E);
	}
	template <typename R = int32_t> R& RuneCount() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _index() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = InventorySlot*> R& _slot() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& _parentId() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& _runeInventoryId() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = Il2CppString*> R& _runeBlueprint() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& _grade() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 IItemEventHandler1<RuneItem*>*& _handler() {
		return *(IItemEventHandler1<RuneItem*>**)((uintptr_t)this + 0x68);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = PlayerClassType> R& _playerClassType() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = RuneItemState> R& RuneItemState() {
		return *(R*)((uintptr_t)this + 0x7C);
	}

	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x135286C))(this);
	}
	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352970))(this);
	}
	template <typename R = void> R set_SlotEntity(InventorySlotEntity* value) {
		return ((R (*)(RuneItemDragged*, InventorySlotEntity*))(Il2CppBase() + 0x1352978))(this, value);
	}
	template <typename R = InventorySlot*> R get_Slot() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352980))(this);
	}
	template <typename R = GameEntity*> R get_ParentEntity() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352988))(this);
	}
	template <typename R = uintptr_t> R get_RectTransform() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352A84))(this);
	}
	template <typename R = void> R set_RectTransform(uintptr_t value) {
		return ((R (*)(RuneItemDragged*, uintptr_t))(Il2CppBase() + 0x1352A8C))(this, value);
	}
	template <typename R = int32_t> R get_Id() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352A94))(this);
	}
	template <typename R = void> R set_Id(int32_t value) {
		return ((R (*)(RuneItemDragged*, int32_t))(Il2CppBase() + 0x1352A9C))(this, value);
	}
	template <typename R = int32_t> R get_Index() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AA4))(this);
	}
	template <typename R = Il2CppString*> R get_RuneBlueprint() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AAC))(this);
	}
	template <typename R = bool> R get_IsRuneItem() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AB4))(this);
	}
	template <typename R = void> R set_IsRuneItem(bool value) {
		return ((R (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1352ABC))(this, value);
	}
	template <typename R = bool> R get_IsMaxGrade() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AC8))(this);
	}
	template <typename R = void> R set_IsMaxGrade(bool value) {
		return ((R (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1352AD0))(this, value);
	}
	template <typename R = bool> R get_Permanent() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352ADC))(this);
	}
	template <typename R = void> R set_Permanent(bool value) {
		return ((R (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1352AE4))(this, value);
	}
	template <typename R = int32_t> R get_RuneCount() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AF0))(this);
	}
	template <typename R = void> R set_RuneCount(int32_t value) {
		return ((R (*)(RuneItemDragged*, int32_t))(Il2CppBase() + 0x1352AF8))(this, value);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352B00))(this);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352B08))(this);
	}
	template <typename R = RuneItemState> R get_RuneItemState() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x1352CD8))(this);
	}
	template <typename R = void> R set_RuneItemState(RuneItemState value) {
		return ((R (*)(RuneItemDragged*, RuneItemState))(Il2CppBase() + 0x1352CE0))(this, value);
	}
	template <typename R = void> R Bind(IRuneInventoryPanel* runePanel, Il2CppString* blueprint, int32_t index, bool isRuneItem) {
		return ((R (*)(RuneItemDragged*, IRuneInventoryPanel*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1352CE8))(this, runePanel, blueprint, index, isRuneItem);
	}
	template <typename R = void> R Close() {
		return ((R (*)(RuneItemDragged*))(Il2CppBase() + 0x135343C))(this);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1353500))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1353504))(this, visual);
	}

};

