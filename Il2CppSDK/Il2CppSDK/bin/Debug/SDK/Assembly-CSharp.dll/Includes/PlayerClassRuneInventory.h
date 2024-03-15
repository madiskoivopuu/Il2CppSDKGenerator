#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassRuneInventory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassRuneInventory"));
	}

	template <typename R = bool> R& _isDrageEnabled() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RuneItemDragged*> R& _itemDragged() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = JoystickDPad*> R& D_Pad() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = RuneInventoryContainer*> R& _runeInventoryContainer() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ClassRuneContainer*> R& _classRuneContainer() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ItemForMessage*> R& _runeItemMessagePrefab() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ItemForMessage*> R& _itemMessagePrefab() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = RuneEffectPooler*> R& _effectPooler() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& _showSubmitMergeWindow() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = IUIWindow*> R& ParentWindow() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& IsLocked() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = PlayerClassType*> R& PlayerClassType() {
		return *(R*)((uintptr_t)this + 0x69);
	}
	template <typename R = RuneBuffInfoContainer*> R& _runeBuffInfoContainer() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = IClickableItemsContainer*> R& _targetContainer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = InventorySlot*> R& _selectedSlot() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = InventorySlotEntity*> R& _selectedInventory() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = RuneItem*> R& _selectedItem() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = IInventoryItem*> R& _fromItem() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	 Nullable1int32_t>*& _messageId() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0xA0);
	}
	template <typename R = UIWindowsManager*> R& _manager() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = RuneItemSplit*> R& _toSplitingItem() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = RuneItem*> R& _freeSlotForSplit() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _defaultTextColor() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _splitTextColor() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = int32_t> R& _splitStartStackCount() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = ButtonWithSliderOnHold*> R& _splitButton() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _deleteButton() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _mergeButton() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = Il2CppString*> R& _isMergeRulesNotifiedKey() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	 Action2RuneItem*, uintptr_t>*& OnBeginScrolling() {
		return *(Action2RuneItem*, uintptr_t>**)((uintptr_t)this + 0x110);
	}
	 Action2RuneItem*, uintptr_t>*& OnScrolling() {
		return *(Action2RuneItem*, uintptr_t>**)((uintptr_t)this + 0x118);
	}
	 Action2RuneItem*, uintptr_t>*& OnEndScrolling() {
		return *(Action2RuneItem*, uintptr_t>**)((uintptr_t)this + 0x120);
	}

	template <typename R = IItem*> R get_DraggedItem() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AAF0))(this);
	}
	template <typename R = RuneEffectPooler*> R get_EffectPooler() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AAF8))(this);
	}
	template <typename R = IUIWindow*> R get_ParentWindow() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB00))(this);
	}
	template <typename R = void> R set_ParentWindow(IUIWindow* value) {
		return ((R (*)(PlayerClassRuneInventory*, IUIWindow*))(Il2CppBase() + 0x1B6AB08))(this, value);
	}
	template <typename R = bool> R get_IsLocked() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB10))(this);
	}
	template <typename R = void> R set_IsLocked(bool value) {
		return ((R (*)(PlayerClassRuneInventory*, bool))(Il2CppBase() + 0x1B6AB18))(this, value);
	}
	template <typename R = RuneInventoryContainer*> R get_RuneInventoryContainer() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB24))(this);
	}
	template <typename R = PlayerClassType*> R get_PlayerClassType() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB2C))(this);
	}
	template <typename R = void> R set_PlayerClassType(PlayerClassType* value) {
		return ((R (*)(PlayerClassRuneInventory*, PlayerClassType*))(Il2CppBase() + 0x1B6AB34))(this, value);
	}
	template <typename R = ClassRuneContainer*> R get_ClassRuneContainer() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB3C))(this);
	}
	template <typename R = bool> R get_IsDeleteProcessing() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB44))(this);
	}
	template <typename R = void> R add_OnBeginScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((R (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AC18))(this, value);
	}
	template <typename R = void> R remove_OnBeginScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((R (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6ACBC))(this, value);
	}
	template <typename R = void> R add_OnScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((R (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AD60))(this, value);
	}
	template <typename R = void> R remove_OnScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((R (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AE04))(this, value);
	}
	template <typename R = void> R add_OnEndScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((R (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AEA8))(this, value);
	}
	template <typename R = void> R remove_OnEndScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((R (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AF4C))(this, value);
	}
	template <typename R = void> R OnShow(IUIWindow* window, ItemEntity* classEntity, bool isLocked) {
		return ((R (*)(PlayerClassRuneInventory*, IUIWindow*, ItemEntity*, bool))(Il2CppBase() + 0x1B65B64))(this, window, classEntity, isLocked);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6BC30))(this);
	}
	template <typename R = void> R CheckForShowRuneMergeNotification() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AFF0))(this);
	}
	template <typename R = void> R OnSplitProcess(int32_t value) {
		return ((R (*)(PlayerClassRuneInventory*, int32_t))(Il2CppBase() + 0x1B6C5B0))(this, value);
	}
	template <typename R = void> R OnSplit(int32_t value) {
		return ((R (*)(PlayerClassRuneInventory*, int32_t))(Il2CppBase() + 0x1B6C8A0))(this, value);
	}
	template <typename R = void> R OnSplitByHalf() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6CBB8))(this);
	}
	template <typename R = void> R UpdateSplitButton(RuneItem* selectedItem) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B6CDFC))(this, selectedItem);
	}
	template <typename R = void> R UpdateDeleteButton() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6D184))(this);
	}
	template <typename R = void> R UpdateMergeButton(InventorySlotEntity* selectedInventory) {
		return ((R (*)(PlayerClassRuneInventory*, InventorySlotEntity*))(Il2CppBase() + 0x1B6D428))(this, selectedInventory);
	}
	template <typename R = void> R OnSelect(RuneItem* item) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B6BE68))(this, item);
	}
	template <typename R = void> R OnDelete() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6D7B4))(this);
	}
	template <typename R = void> R OnMerge() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6E570))(this);
	}
	template <typename R = void> R OnMergeStackSubmit(RuneItem* freeSlot, bool hasRemainder, int32_t selectedInventoryId) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*, bool, int32_t))(Il2CppBase() + 0x1B6F244))(this, freeSlot, hasRemainder, selectedInventoryId);
	}
	template <typename R = void> R ChangeRunesDialogue(ItemEntity* rune1, int32_t count1, Nullable1int64_t>* endTime1, ItemEntity* rune2, int32_t count2, Nullable1int64_t>* endTime2, Il2CppString* caption, Il2CppString* description, Il2CppString* buttonCancelText, Il2CppString* buttonSuccessText, uintptr_t onSuccess) {
		return ((R (*)(PlayerClassRuneInventory*, ItemEntity*, int32_t, Nullable1int64_t>*, ItemEntity*, int32_t, Nullable1int64_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B6C190))(this, rune1, count1, endTime1, rune2, count2, endTime2, caption, description, buttonCancelText, buttonSuccessText, onSuccess);
	}
	template <typename R = void> R MergeOnDrop(Il2CppString* blueprint, int32_t slotId, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, RuneItem* itemToMerge, bool toClass) {
		return ((R (*)(PlayerClassRuneInventory*, Il2CppString*, int32_t, int32_t, int32_t, RuneItem*, bool))(Il2CppBase() + 0x1B6F34C))(this, blueprint, slotId, fromClassSlotIndex, toClassSlotIndex, itemToMerge, toClass);
	}
	template <typename R = void> R EraseOnDrop(ItemEntity* rune, ItemEntity* toRune, int32_t slotId, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, RuneItem* itemToReplace, bool toClass) {
		return ((R (*)(PlayerClassRuneInventory*, ItemEntity*, ItemEntity*, int32_t, int32_t, int32_t, RuneItem*, bool))(Il2CppBase() + 0x1B6F9D8))(this, rune, toRune, slotId, fromClassSlotIndex, toClassSlotIndex, itemToReplace, toClass);
	}
	template <typename R = void> R OnClassRuneMergeSubmit(RuneItem* itemToMerge, int32_t slotId, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, bool toClass) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1B6F8D0))(this, itemToMerge, slotId, fromClassSlotIndex, toClassSlotIndex, toClass);
	}
	template <typename R = void> R OnClassRuneEraseSubmit(RuneItem* itemToReplace, int32_t slotId, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, bool toClass) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1B700A8))(this, itemToReplace, slotId, fromClassSlotIndex, toClassSlotIndex, toClass);
	}
	template <typename R = void> R OnHold(RuneItem* item) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B701B0))(this, item);
	}
	template <typename R = void> R OnRelease(RuneItem* item) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B705C4))(this, item);
	}
	template <typename R = void> R OnBeginDrag(RuneItem* item, uintptr_t eventData) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*, uintptr_t))(Il2CppBase() + 0x1B706B0))(this, item, eventData);
	}
	template <typename R = void> R OnDrag(RuneItem* item, uintptr_t eventData) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*, uintptr_t))(Il2CppBase() + 0x1B708EC))(this, item, eventData);
	}
	template <typename R = void> R OnEndDrag(RuneItem* item, uintptr_t eventData) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*, uintptr_t))(Il2CppBase() + 0x1B709D0))(this, item, eventData);
	}
	template <typename R = void> R OnDrop(RuneItem* item) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B70AF0))(this, item);
	}
	template <typename R = void> R OnDoubleClick(RuneItem* item) {
		return ((R (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B71628))(this, item);
	}
	template <typename R = void> R OnLeft() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B719F0))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B71A48))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B71AA0))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B71AF8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(PlayerClassRuneInventory*, float))(Il2CppBase() + 0x1B71B50))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateinput(float deltaTime) {
		return ((R (*)(PlayerClassRuneInventory*, float))(Il2CppBase() + 0x1B71C30))(this, deltaTime);
	}

};

