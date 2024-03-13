#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BaseInventoryWindow1 : public UIWindow1<uintptr_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseInventoryWindow`1"));
	}

	template <typename T = JoystickDPad*> T& D_Pad() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = AvatarInventoryContainer*> T& InventoryContainer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InventoryItemDragged*> T& ItemDragged() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& UseButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& UseButtonText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& SplitButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& DeleteButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _defaultTextColor() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& containers() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _splitTextColor() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ButtonWithSliderOnHold*> T& _splitButtonWithSlider() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = IInventoryItem*> T& FromItem() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InventorySlot*> T& _selectedSlot() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InventorySlotEntity*> T& _selectedInventory() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InventoryItemDraggable*> T& _selectedInventoryItem() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InventoryContainer*> T& _targetContainer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InventoryItemSplit*> T& _toSplitingItem() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _splitStartStackCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _currentResource() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _currentStackCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Nullable1bool>*> T& _selectedItemHasCooldown() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Nullable1int32_t>*> T& _messageId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action2IInventoryItem*, uintptr_t>*> T& OnBeginScrolling() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action2IInventoryItem*, uintptr_t>*> T& OnScrolling() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action2IInventoryItem*, uintptr_t>*> T& OnEndScrolling() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = IItem*> T get_DraggedItem() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IInventoryItem*> T get_FromItem() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_FromItem(IInventoryItem* value) {
		return ((T (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = InventorySlotEntity*> T get_SelectedInventory() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsDeleteProcessing() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnBeginScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BaseInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBeginScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BaseInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BaseInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BaseInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEndScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BaseInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEndScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BaseInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BaseInventoryWindow1*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T UpdateCurrentTab(InventorySlotEntity* slot) {
		return ((T (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, slot);
	}
	template <typename T = void> T OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(BaseInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(BaseInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(BaseInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = bool> T HasInRecipes(Il2CppString* craftType, int32_t targetSlotCount, Il2CppString* resource) {
		return ((T (*)(BaseInventoryWindow1*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, craftType, targetSlotCount, resource);
	}
	template <typename T = int32_t> T GetInventoryId(GameEntity* target, int32_t targetSlotCount, Il2CppString* resource) {
		return ((T (*)(BaseInventoryWindow1*, GameEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, target, targetSlotCount, resource);
	}
	template <typename T = void> T OnHold(IInventoryItem* item) {
		return ((T (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnRelease(IInventoryItem* item) {
		return ((T (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T UpdateUseButton(InventorySlotEntity* selectedInventory) {
		return ((T (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, selectedInventory);
	}
	template <typename T = void> T UpdateSplitButton(InventorySlotEntity* selectedInventory) {
		return ((T (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, selectedInventory);
	}
	template <typename T = void> T UpdateDeleteButton(InventorySlotEntity* selectedInventory) {
		return ((T (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, selectedInventory);
	}
	template <typename T = void> T OnSelect(IInventoryItem* item) {
		return ((T (*)(BaseInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnSelect_1(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((T (*)(BaseInventoryWindow1*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x0))(this, selectedInventory, selectedSlot);
	}
	template <typename T = void> T OnSelectedInventoryChanged(InventorySlotEntity* selectedInventory) {
		return ((T (*)(BaseInventoryWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, selectedInventory);
	}
	template <typename T = void> T OnUse() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSlots() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnUseBuildEntity(GameDataEntity* buildEntity) {
		return ((T (*)(BaseInventoryWindow1*, GameDataEntity*))(Il2CppBase() + 0x0))(this, buildEntity);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnSplitProcess(int32_t value) {
		return ((T (*)(BaseInventoryWindow1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T OnSplit(int32_t value) {
		return ((T (*)(BaseInventoryWindow1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T OnSplitByHalf() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDelete() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(BaseInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(BaseInventoryWindow1*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T ShowWarning(Il2CppString* msg) {
		return ((T (*)(BaseInventoryWindow1*, Il2CppString*))(Il2CppBase() + 0x0))(this, msg);
	}

};

