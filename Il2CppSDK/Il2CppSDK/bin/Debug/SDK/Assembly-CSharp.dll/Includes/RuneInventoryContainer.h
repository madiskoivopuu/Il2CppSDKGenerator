#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseRuneContainer.h" 

class RuneInventoryContainer : public BaseRuneContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneInventoryContainer"));
	}

	 Il2CppList<InventorySlot*>*& _inventorySlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x70);
	}
	template <typename R = InventorySlot*> R& _inventorySlotsPrefab() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _contentTransform() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = RuneItem*> R& _runeItemPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _addSlotsButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _addSlotsOnCounterButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = ButtonWithSliderOnHold*> R& _splitButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _mergeButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _deleteButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _deleteButtonAnimator() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _deleteButtonErrorText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _inventoryScroll() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _slotsCountText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = RuneItemSplit*> R& _toSplitingItem() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _splitTextColor() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = int32_t> R& _minSlotsCount() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	 Il2CppList<IInventoryItem*>*& toSort() {
		return *(Il2CppList<IInventoryItem*>**)((uintptr_t)this + 0xF8);
	}
	 Il2CppList<IInventoryItem*>*& sorted() {
		return *(Il2CppList<IInventoryItem*>**)((uintptr_t)this + 0x100);
	}
	template <typename R = bool> R& _isSlotsAdding() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = int32_t> R& _currentGrade() {
		return *(R*)((uintptr_t)this + 0x10C);
	}
	template <typename R = int32_t> R& _newSlotCount() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = int32_t> R& _emptySlotsCount() {
		return *(R*)((uintptr_t)this + 0x114);
	}
	template <typename R = int32_t> R& _totalSlotsCount() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = PlayerClassType> R& _playerClassType() {
		return *(R*)((uintptr_t)this + 0x11C);
	}
	template <typename R = bool> R& _isListenerAdded() {
		return *(R*)((uintptr_t)this + 0x11D);
	}
	 Il2CppList<InventorySlotEntity*>*& _sortedList() {
		return *(Il2CppList<InventorySlotEntity*>**)((uintptr_t)this + 0x120);
	}
	 Il2CppDictionary<int32_t, RuneItem*>*& _items() {
		return *(Il2CppDictionary<int32_t, RuneItem*>**)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& OnDeleteButtonClick() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& OnMergeButtonClick() {
		return *(R*)((uintptr_t)this + 0x138);
	}

	template <typename R = int32_t> R get__sortedSlotsCount() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11ABFD8))(this);
	}
	 Il2CppDictionary<int32_t, RuneItem*>* get_Items() {
		return ((Il2CppDictionary<int32_t, RuneItem*>* (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC028))(this);
	}
	template <typename R = ButtonWithSliderOnHold*> R get_SplitButton() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC030))(this);
	}
	template <typename R = uintptr_t> R get_MergeButton() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC038))(this);
	}
	template <typename R = uintptr_t> R get_DeleteButton() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC040))(this);
	}
	template <typename R = uintptr_t> R get_SplitTextColor() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC048))(this);
	}
	template <typename R = RuneItemSplit*> R get_ToSplitingItem() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC054))(this);
	}
	template <typename R = void> R add_OnDeleteButtonClick(uintptr_t value) {
		return ((R (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AC05C))(this, value);
	}
	template <typename R = void> R remove_OnDeleteButtonClick(uintptr_t value) {
		return ((R (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AC100))(this, value);
	}
	template <typename R = void> R add_OnMergeButtonClick(uintptr_t value) {
		return ((R (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AC1A4))(this, value);
	}
	template <typename R = void> R remove_OnMergeButtonClick(uintptr_t value) {
		return ((R (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AC248))(this, value);
	}
	template <typename R = void> R Bind(IRuneInventoryPanel* runePanel, uintptr_t onDelete, uintptr_t onMerge) {
		return ((R (*)(RuneInventoryContainer*, IRuneInventoryPanel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11AC2EC))(this, runePanel, onDelete, onMerge);
	}
	template <typename R = void> R OnItemAdded(RuneItem* item) {
		return ((R (*)(RuneInventoryContainer*, RuneItem*))(Il2CppBase() + 0x11AE3A0))(this, item);
	}
	template <typename R = void> R OnItemRemove(RuneItem* item) {
		return ((R (*)(RuneInventoryContainer*, RuneItem*))(Il2CppBase() + 0x11AE474))(this, item);
	}
	template <typename R = void> R ResetContainer() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE534))(this);
	}
	template <typename R = void> R UpdateCounter() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE130))(this);
	}
	 Il2CppList<InventorySlotEntity*>* Sort(uintptr_t collection) {
		return ((Il2CppList<InventorySlotEntity*>* (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x0))(this, collection);
	}
	 ValueTuple3<int32_t, int32_t, int32_t>* AddSlotsItemIfNeed(int32_t notEmptySlotsCount, bool extend) {
		return ((ValueTuple3<int32_t, int32_t, int32_t>* (*)(RuneInventoryContainer*, int32_t, bool))(Il2CppBase() + 0x11AD420))(this, notEmptySlotsCount, extend);
	}
	template <typename R = void> R SetItem(GameEntity* parentEntity, InventorySlot* slot, int32_t itemIndex, int32_t index) {
		return ((R (*)(RuneInventoryContainer*, GameEntity*, InventorySlot*, int32_t, int32_t))(Il2CppBase() + 0x11ADDD0))(this, parentEntity, slot, itemIndex, index);
	}
	template <typename R = void> R Delete() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE570))(this);
	}
	template <typename R = void> R Merge() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE584))(this);
	}
	template <typename R = void> R AddSlots() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE598))(this);
	}
	template <typename R = IInventoryItem*> R GetItemById(int32_t id) {
		return ((R (*)(RuneInventoryContainer*, int32_t))(Il2CppBase() + 0x11AECCC))(this, id);
	}
	 ValueTuple2<bool, IInventoryItem*>* IsInventoryEmpty() {
		return ((ValueTuple2<bool, IInventoryItem*>* (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AED70))(this);
	}
	template <typename R = void> R OnBeginScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(RuneInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x11AEF64))(this, item, eventData);
	}
	template <typename R = void> R OnScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(RuneInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x11AEF8C))(this, item, eventData);
	}
	template <typename R = void> R OnEndScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(RuneInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x11AEFB4))(this, item, eventData);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RuneInventoryContainer*, float))(Il2CppBase() + 0x11AEFDC))(this, deltaTime);
	}
	template <typename R = RuneItem*> R GetFirstEmptySlot() {
		return ((R (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AF260))(this);
	}
	template <typename R = RuneItem*> R GetFirstNotEmptySlot(Il2CppString* runeBluprint) {
		return ((R (*)(RuneInventoryContainer*, Il2CppString*))(Il2CppBase() + 0x11AF46C))(this, runeBluprint);
	}
	template <typename R = void> R ShowDeleteButtonErrorText(Il2CppString* errorString) {
		return ((R (*)(RuneInventoryContainer*, Il2CppString*))(Il2CppBase() + 0x11AF830))(this, errorString);
	}

};

