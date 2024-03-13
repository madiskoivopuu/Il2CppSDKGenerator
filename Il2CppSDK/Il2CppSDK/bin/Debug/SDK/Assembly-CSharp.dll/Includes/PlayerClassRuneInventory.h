#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassRuneInventory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassRuneInventory"));
	}

	template <typename T = bool> T& _isDrageEnabled() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = RuneItemDragged*> T& _itemDragged() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = JoystickDPad*> T& D_Pad() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = RuneInventoryContainer*> T& _runeInventoryContainer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ClassRuneContainer*> T& _classRuneContainer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = ItemForMessage*> T& _runeItemMessagePrefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ItemForMessage*> T& _itemMessagePrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = RuneEffectPooler*> T& _effectPooler() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _showSubmitMergeWindow() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = IUIWindow*> T& ParentWindow() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& IsLocked() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = PlayerClassType*> T& PlayerClassType() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = RuneBuffInfoContainer*> T& _runeBuffInfoContainer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = IClickableItemsContainer*> T& _targetContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = InventorySlot*> T& _selectedSlot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = InventorySlotEntity*> T& _selectedInventory() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = RuneItem*> T& _selectedItem() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = IInventoryItem*> T& _fromItem() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Nullable1int32_t>*> T& _messageId() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = UIWindowsManager*> T& _manager() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = RuneItemSplit*> T& _toSplitingItem() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = RuneItem*> T& _freeSlotForSplit() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _defaultTextColor() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _splitTextColor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& _splitStartStackCount() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = ButtonWithSliderOnHold*> T& _splitButton() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _deleteButton() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _mergeButton() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = TooltipView*> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& _isMergeRulesNotifiedKey() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Action2RuneItem*, uintptr_t>*> T& OnBeginScrolling() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Action2RuneItem*, uintptr_t>*> T& OnScrolling() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Action2RuneItem*, uintptr_t>*> T& OnEndScrolling() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = IItem*> T get_DraggedItem() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AAF0))(this);
	}
	template <typename T = RuneEffectPooler*> T get_EffectPooler() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AAF8))(this);
	}
	template <typename T = IUIWindow*> T get_ParentWindow() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB00))(this);
	}
	template <typename T = void> T set_ParentWindow(IUIWindow* value) {
		return ((T (*)(PlayerClassRuneInventory*, IUIWindow*))(Il2CppBase() + 0x1B6AB08))(this, value);
	}
	template <typename T = bool> T get_IsLocked() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB10))(this);
	}
	template <typename T = void> T set_IsLocked(bool value) {
		return ((T (*)(PlayerClassRuneInventory*, bool))(Il2CppBase() + 0x1B6AB18))(this, value);
	}
	template <typename T = RuneInventoryContainer*> T get_RuneInventoryContainer() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB24))(this);
	}
	template <typename T = PlayerClassType*> T get_PlayerClassType() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB2C))(this);
	}
	template <typename T = void> T set_PlayerClassType(PlayerClassType* value) {
		return ((T (*)(PlayerClassRuneInventory*, PlayerClassType*))(Il2CppBase() + 0x1B6AB34))(this, value);
	}
	template <typename T = ClassRuneContainer*> T get_ClassRuneContainer() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB3C))(this);
	}
	template <typename T = bool> T get_IsDeleteProcessing() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AB44))(this);
	}
	template <typename T = void> T add_OnBeginScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AC18))(this, value);
	}
	template <typename T = void> T remove_OnBeginScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6ACBC))(this, value);
	}
	template <typename T = void> T add_OnScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AD60))(this, value);
	}
	template <typename T = void> T remove_OnScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AE04))(this, value);
	}
	template <typename T = void> T add_OnEndScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AEA8))(this, value);
	}
	template <typename T = void> T remove_OnEndScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(PlayerClassRuneInventory*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x1B6AF4C))(this, value);
	}
	template <typename T = void> T OnShow(IUIWindow* window, ItemEntity* classEntity, bool isLocked) {
		return ((T (*)(PlayerClassRuneInventory*, IUIWindow*, ItemEntity*, bool))(Il2CppBase() + 0x1B65B64))(this, window, classEntity, isLocked);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6BC30))(this);
	}
	template <typename T = void> T CheckForShowRuneMergeNotification() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6AFF0))(this);
	}
	template <typename T = void> T OnSplitProcess(int32_t value) {
		return ((T (*)(PlayerClassRuneInventory*, int32_t))(Il2CppBase() + 0x1B6C5B0))(this, value);
	}
	template <typename T = void> T OnSplit(int32_t value) {
		return ((T (*)(PlayerClassRuneInventory*, int32_t))(Il2CppBase() + 0x1B6C8A0))(this, value);
	}
	template <typename T = void> T OnSplitByHalf() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6CBB8))(this);
	}
	template <typename T = void> T UpdateSplitButton(RuneItem* selectedItem) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B6CDFC))(this, selectedItem);
	}
	template <typename T = void> T UpdateDeleteButton() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6D184))(this);
	}
	template <typename T = void> T UpdateMergeButton(InventorySlotEntity* selectedInventory) {
		return ((T (*)(PlayerClassRuneInventory*, InventorySlotEntity*))(Il2CppBase() + 0x1B6D428))(this, selectedInventory);
	}
	template <typename T = void> T OnSelect(RuneItem* item) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B6BE68))(this, item);
	}
	template <typename T = void> T OnDelete() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6D7B4))(this);
	}
	template <typename T = void> T OnMerge() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B6E570))(this);
	}
	template <typename T = void> T OnMergeStackSubmit(RuneItem* freeSlot, bool hasRemainder, int32_t selectedInventoryId) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*, bool, int32_t))(Il2CppBase() + 0x1B6F244))(this, freeSlot, hasRemainder, selectedInventoryId);
	}
	template <typename T = void> T ChangeRunesDialogue(ItemEntity* rune1, int32_t count1, Nullable1int64_t>* endTime1, ItemEntity* rune2, int32_t count2, Nullable1int64_t>* endTime2, Il2CppString* caption, Il2CppString* description, Il2CppString* buttonCancelText, Il2CppString* buttonSuccessText, uintptr_t onSuccess) {
		return ((T (*)(PlayerClassRuneInventory*, ItemEntity*, int32_t, Nullable1int64_t>*, ItemEntity*, int32_t, Nullable1int64_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B6C190))(this, rune1, count1, endTime1, rune2, count2, endTime2, caption, description, buttonCancelText, buttonSuccessText, onSuccess);
	}
	template <typename T = void> T MergeOnDrop(Il2CppString* blueprint, int32_t slotId, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, RuneItem* itemToMerge, bool toClass) {
		return ((T (*)(PlayerClassRuneInventory*, Il2CppString*, int32_t, int32_t, int32_t, RuneItem*, bool))(Il2CppBase() + 0x1B6F34C))(this, blueprint, slotId, fromClassSlotIndex, toClassSlotIndex, itemToMerge, toClass);
	}
	template <typename T = void> T EraseOnDrop(ItemEntity* rune, ItemEntity* toRune, int32_t slotId, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, RuneItem* itemToReplace, bool toClass) {
		return ((T (*)(PlayerClassRuneInventory*, ItemEntity*, ItemEntity*, int32_t, int32_t, int32_t, RuneItem*, bool))(Il2CppBase() + 0x1B6F9D8))(this, rune, toRune, slotId, fromClassSlotIndex, toClassSlotIndex, itemToReplace, toClass);
	}
	template <typename T = void> T OnClassRuneMergeSubmit(RuneItem* itemToMerge, int32_t slotId, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, bool toClass) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1B6F8D0))(this, itemToMerge, slotId, fromClassSlotIndex, toClassSlotIndex, toClass);
	}
	template <typename T = void> T OnClassRuneEraseSubmit(RuneItem* itemToReplace, int32_t slotId, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, bool toClass) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1B700A8))(this, itemToReplace, slotId, fromClassSlotIndex, toClassSlotIndex, toClass);
	}
	template <typename T = void> T OnHold(RuneItem* item) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B701B0))(this, item);
	}
	template <typename T = void> T OnRelease(RuneItem* item) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B705C4))(this, item);
	}
	template <typename T = void> T OnBeginDrag(RuneItem* item, uintptr_t eventData) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*, uintptr_t))(Il2CppBase() + 0x1B706B0))(this, item, eventData);
	}
	template <typename T = void> T OnDrag(RuneItem* item, uintptr_t eventData) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*, uintptr_t))(Il2CppBase() + 0x1B708EC))(this, item, eventData);
	}
	template <typename T = void> T OnEndDrag(RuneItem* item, uintptr_t eventData) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*, uintptr_t))(Il2CppBase() + 0x1B709D0))(this, item, eventData);
	}
	template <typename T = void> T OnDrop(RuneItem* item) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B70AF0))(this, item);
	}
	template <typename T = void> T OnDoubleClick(RuneItem* item) {
		return ((T (*)(PlayerClassRuneInventory*, RuneItem*))(Il2CppBase() + 0x1B71628))(this, item);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B719F0))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B71A48))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B71AA0))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(PlayerClassRuneInventory*))(Il2CppBase() + 0x1B71AF8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(PlayerClassRuneInventory*, float))(Il2CppBase() + 0x1B71B50))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateinput(float deltaTime) {
		return ((T (*)(PlayerClassRuneInventory*, float))(Il2CppBase() + 0x1B71C30))(this, deltaTime);
	}

};

