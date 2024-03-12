#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseRuneContainer" 

class RuneInventoryContainer: BaseRuneContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneInventoryContainer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _inventorySlots() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _inventorySlotsPrefab() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _contentTransform() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _runeItemPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _addSlotsButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _addSlotsOnCounterButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _splitButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _mergeButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _deleteButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _deleteButtonAnimator() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _deleteButtonErrorText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _inventoryScroll() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _slotsCountText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _toSplitingItem() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _splitTextColor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& _minSlotsCount() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& toSort() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& sorted() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& _isSlotsAdding() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& _currentGrade() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& _newSlotCount() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& _emptySlotsCount() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& _totalSlotsCount() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _playerClassType() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& _isListenerAdded() {
		return *(T*)((uintptr_t)this + 0x11D);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sortedList() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& OnDeleteButtonClick() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& OnMergeButtonClick() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = int32_t> T get__sortedSlotsCount() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11ABFD8))(this);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T get_Items() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC028))(this);
	}
	template <typename T = uintptr_t> T get_SplitButton() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC030))(this);
	}
	template <typename T = uintptr_t> T get_MergeButton() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC038))(this);
	}
	template <typename T = uintptr_t> T get_DeleteButton() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC040))(this);
	}
	template <typename T = uintptr_t> T get_SplitTextColor() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC048))(this);
	}
	template <typename T = uintptr_t> T get_ToSplitingItem() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AC054))(this);
	}
	template <typename T = void> T add_OnDeleteButtonClick(uintptr_t value) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AC05C))(this, value);
	}
	template <typename T = void> T remove_OnDeleteButtonClick(uintptr_t value) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AC100))(this, value);
	}
	template <typename T = void> T add_OnMergeButtonClick(uintptr_t value) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AC1A4))(this, value);
	}
	template <typename T = void> T remove_OnMergeButtonClick(uintptr_t value) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AC248))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t runePanel, uintptr_t onDelete, uintptr_t onMerge) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11AC2EC))(this, runePanel, onDelete, onMerge);
	}
	template <typename T = void> T OnItemAdded(uintptr_t item) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AE3A0))(this, item);
	}
	template <typename T = void> T OnItemRemove(uintptr_t item) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x11AE474))(this, item);
	}
	template <typename T = void> T ResetContainer() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE534))(this);
	}
	template <typename T = void> T UpdateCounter() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE130))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T Sort(uintptr_t collection) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t))(Il2CppBase() + 0x0))(this, collection);
	}
	template <typename T = void*> T AddSlotsItemIfNeed(int32_t notEmptySlotsCount, bool extend) {
		return ((T (*)(RuneInventoryContainer*, int32_t, bool))(Il2CppBase() + 0x11AD420))(this, notEmptySlotsCount, extend);
	}
	template <typename T = void> T SetItem(uintptr_t parentEntity, uintptr_t slot, int32_t itemIndex, int32_t index) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x11ADDD0))(this, parentEntity, slot, itemIndex, index);
	}
	template <typename T = void> T Delete() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE570))(this);
	}
	template <typename T = void> T Merge() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE584))(this);
	}
	template <typename T = void> T AddSlots() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AE598))(this);
	}
	template <typename T = uintptr_t> T GetItemById(int32_t id) {
		return ((T (*)(RuneInventoryContainer*, int32_t))(Il2CppBase() + 0x11AECCC))(this, id);
	}
	template <typename T = void*> T IsInventoryEmpty() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AED70))(this);
	}
	template <typename T = void> T OnBeginScrollingEvent(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11AEF64))(this, item, eventData);
	}
	template <typename T = void> T OnScrollingEvent(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11AEF8C))(this, item, eventData);
	}
	template <typename T = void> T OnEndScrollingEvent(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(RuneInventoryContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11AEFB4))(this, item, eventData);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RuneInventoryContainer*, float))(Il2CppBase() + 0x11AEFDC))(this, deltaTime);
	}
	template <typename T = uintptr_t> T GetFirstEmptySlot() {
		return ((T (*)(RuneInventoryContainer*))(Il2CppBase() + 0x11AF260))(this);
	}
	template <typename T = uintptr_t> T GetFirstNotEmptySlot(Il2CppString* runeBluprint) {
		return ((T (*)(RuneInventoryContainer*, Il2CppString*))(Il2CppBase() + 0x11AF46C))(this, runeBluprint);
	}
	template <typename T = void> T ShowDeleteButtonErrorText(Il2CppString* errorString) {
		return ((T (*)(RuneInventoryContainer*, Il2CppString*))(Il2CppBase() + 0x11AF830))(this, errorString);
	}

};

}
