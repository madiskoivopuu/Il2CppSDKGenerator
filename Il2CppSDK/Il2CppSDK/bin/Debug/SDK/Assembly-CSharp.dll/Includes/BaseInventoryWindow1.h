#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

template <typename T>
class BaseInventoryWindow1 : public UIWindow1<T>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseInventoryWindow`1"));
	}

	template <typename R = JoystickDPad*> R& D_Pad() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = AvatarInventoryContainer*> R& InventoryContainer() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = InventoryItemDragged*> R& ItemDragged() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& UseButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& UseButtonText() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& SplitButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& DeleteButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _defaultTextColor() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<InventoryContainer*>*> R& containers() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _splitTextColor() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = ButtonWithSliderOnHold*> R& _splitButtonWithSlider() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = IInventoryItem*> R& FromItem() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = InventorySlot*> R& _selectedSlot() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = InventorySlotEntity*> R& _selectedInventory() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = InventoryItemDraggable*> R& _selectedInventoryItem() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = InventoryContainer*> R& _targetContainer() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = InventoryItemSplit*> R& _toSplitingItem() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _splitStartStackCount() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _currentResource() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _currentStackCount() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Nullable1<bool>*& _selectedItemHasCooldown() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x0);
	}
	 Nullable1<int32_t>*& _messageId() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x0);
	}
	 Action2<IInventoryItem*, uintptr_t>*& OnBeginScrolling() {
		return *(Action2<IInventoryItem*, uintptr_t>**)((uintptr_t)this + 0x0);
	}
	 Action2<IInventoryItem*, uintptr_t>*& OnScrolling() {
		return *(Action2<IInventoryItem*, uintptr_t>**)((uintptr_t)this + 0x0);
	}
	 Action2<IInventoryItem*, uintptr_t>*& OnEndScrolling() {
		return *(Action2<IInventoryItem*, uintptr_t>**)((uintptr_t)this + 0x0);
	}

	template <typename R = IItem*> R get_DraggedItem() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IInventoryItem*> R get_FromItem() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_FromItem(IInventoryItem* value) {
		return ((R (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = InventorySlotEntity*> R get_SelectedInventory() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsDeleteProcessing() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_OnBeginScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BaseInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBeginScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BaseInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BaseInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BaseInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEndScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BaseInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEndScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BaseInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BaseInventoryWindow1*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename R = void> R UpdateCurrentTab(InventorySlotEntity* slot) {
		return ((R (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, slot);
	}
	template <typename R = void> R OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(BaseInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(BaseInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(BaseInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = bool> R HasInRecipes(Il2CppString* craftType, int32_t targetSlotCount, Il2CppString* resource) {
		return ((R (*)(BaseInventoryWindow1*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, craftType, targetSlotCount, resource);
	}
	template <typename R = int32_t> R GetInventoryId(GameEntity* target, int32_t targetSlotCount, Il2CppString* resource) {
		return ((R (*)(BaseInventoryWindow1*, GameEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, target, targetSlotCount, resource);
	}
	template <typename R = void> R OnHold(IInventoryItem* item) {
		return ((R (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnRelease(IInventoryItem* item) {
		return ((R (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R UpdateUseButton(InventorySlotEntity* selectedInventory) {
		return ((R (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, selectedInventory);
	}
	template <typename R = void> R UpdateSplitButton(InventorySlotEntity* selectedInventory) {
		return ((R (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, selectedInventory);
	}
	template <typename R = void> R UpdateDeleteButton(InventorySlotEntity* selectedInventory) {
		return ((R (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, selectedInventory);
	}
	template <typename R = void> R OnSelect(IInventoryItem* item) {
		return ((R (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnSelect_1(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((R (*)(BaseInventoryWindow1*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x0))(this, selectedInventory, selectedSlot);
	}
	template <typename R = void> R OnSelectedInventoryChanged(InventorySlotEntity* selectedInventory) {
		return ((R (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, selectedInventory);
	}
	template <typename R = void> R OnUse() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSlots() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnUseBuildEntity(GameDataEntity* buildEntity) {
		return ((R (*)(BaseInventoryWindow1*, GameDataEntity*))(Il2CppBase() + 0x0))(this, buildEntity);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnSplitProcess(int32_t value) {
		return ((R (*)(BaseInventoryWindow1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R OnSplit(int32_t value) {
		return ((R (*)(BaseInventoryWindow1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R OnSplitByHalf() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnDelete() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnLeft() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(BaseInventoryWindow1*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename R = void> R ShowWarning(Il2CppString* msg) {
		return ((R (*)(BaseInventoryWindow1*, Il2CppString*))(Il2CppBase() + 0x0))(this, msg);
	}

};

