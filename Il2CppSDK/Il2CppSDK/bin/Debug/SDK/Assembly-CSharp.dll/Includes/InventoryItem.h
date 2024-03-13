#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour.h" 

class InventoryItem : public TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryItem"));
	}

	template <typename T = bool> T& HideEmpty() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& DontShowBop() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& ColorEmpty() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = TextMonoBehaviour*> T& Grade() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& DurabilityPanel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Durability() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& Cooldown() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& CooldownImage() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& CancelTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& CancelImage() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _isCooldownInited() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _cdMultiplier() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& IsCooldownActive() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& IsCancelActive() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RarityViews() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& checkAnimator() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& checkIcon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BopPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BopPersonal() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BopLock() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& RecoveryPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RecoveryPlus() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RecoveryMinus() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& GrayMaterial() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = GameEntity*> T& _entity() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = ItemEntity*> T& _defaultItem() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Action1InventoryItem*>*> T& ResourceChanged() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Nullable1int32_t>*> T& _count() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& _maxCount() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Nullable1float>*> T& _durability() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& _itemName() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = ItemEntity*> T& Item() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& _showDurability() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& MinCountToShow() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = IUIWindow*> T& Window() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& _locked() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& initializing() {
		return *(T*)((uintptr_t)this + 0x131);
	}

	template <typename T = bool> T get_HideEmpty() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B42C))(this);
	}
	template <typename T = void> T set_HideEmpty(bool value) {
		return ((T (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B434))(this, value);
	}
	template <typename T = bool> T get_DontShowBop() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B440))(this);
	}
	template <typename T = void> T set_DontShowBop(bool value) {
		return ((T (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B448))(this, value);
	}
	template <typename T = bool> T get_IsCooldownActive() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B454))(this);
	}
	template <typename T = void> T set_IsCooldownActive(bool value) {
		return ((T (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B45C))(this, value);
	}
	template <typename T = bool> T get_IsCancelActive() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B468))(this);
	}
	template <typename T = void> T set_IsCancelActive(bool value) {
		return ((T (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B470))(this, value);
	}
	template <typename T = void> T add_ResourceChanged(Action1InventoryItem*>* value) {
		return ((T (*)(InventoryItem*, Action1InventoryItem*>*))(Il2CppBase() + 0x147B47C))(this, value);
	}
	template <typename T = void> T remove_ResourceChanged(Action1InventoryItem*>* value) {
		return ((T (*)(InventoryItem*, Action1InventoryItem*>*))(Il2CppBase() + 0x147B51C))(this, value);
	}
	template <typename T = ItemEntity*> T get_DefaultItem() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B5BC))(this);
	}
	template <typename T = void> T set_DefaultItem(ItemEntity* value) {
		return ((T (*)(InventoryItem*, ItemEntity*))(Il2CppBase() + 0x147B5C4))(this, value);
	}
	template <typename T = ItemEntity*> T get_Item() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B610))(this);
	}
	template <typename T = void> T set_Item(ItemEntity* value) {
		return ((T (*)(InventoryItem*, ItemEntity*))(Il2CppBase() + 0x147B618))(this, value);
	}
	template <typename T = InventorySlotEntity*> T get_SlotEntity() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x1471304))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B628))(this);
	}
	template <typename T = GameEntity*> T get_ParentEntity() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B68C))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B694))(this);
	}
	template <typename T = bool> T get_ShowDurability() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B69C))(this);
	}
	template <typename T = void> T set_ShowDurability(bool value) {
		return ((T (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B6A4))(this, value);
	}
	template <typename T = IUIWindow*> T get_Window() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B6B0))(this);
	}
	template <typename T = void> T set_Window(IUIWindow* value) {
		return ((T (*)(InventoryItem*, IUIWindow*))(Il2CppBase() + 0x147B6B8))(this, value);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147B6C8))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window, GameEntity* entity, int32_t index, ItemEntity* defaultItem) {
		return ((T (*)(InventoryItem*, IUIWindow*, GameEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x147BA38))(this, window, entity, index, defaultItem);
	}
	template <typename T = void> T Bind_1(IUIWindow* window, GameEntity* entity, int32_t index) {
		return ((T (*)(InventoryItem*, IUIWindow*, GameEntity*, int32_t))(Il2CppBase() + 0x147BA74))(this, window, entity, index);
	}
	template <typename T = void> T Unbind(bool toDestroy) {
		return ((T (*)(InventoryItem*, bool))(Il2CppBase() + 0x147BC88))(this, toDestroy);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(InventoryItem*, float))(Il2CppBase() + 0x147BE0C))(this, deltaTime);
	}
	template <typename T = void> T UpdateItem(float deltaTime) {
		return ((T (*)(InventoryItem*, float))(Il2CppBase() + 0x147BE10))(this, deltaTime);
	}
	template <typename T = void> T SetActive(Nullable1bool>* active, bool hard) {
		return ((T (*)(InventoryItem*, Nullable1bool>*, bool))(Il2CppBase() + 0x147CB14))(this, active, hard);
	}
	template <typename T = void> T OnUpdateCooldown(float time, float totalTime) {
		return ((T (*)(InventoryItem*, float, float))(Il2CppBase() + 0x147CBF0))(this, time, totalTime);
	}
	template <typename T = void> T OnUpdateCancel(MagicEntity* activeMagic) {
		return ((T (*)(InventoryItem*, MagicEntity*))(Il2CppBase() + 0x147CE64))(this, activeMagic);
	}
	template <typename T = void> T OnResourceChanged() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147D1D8))(this);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(InventoryItem*))(Il2CppBase() + 0x147DB98))(this);
	}
	template <typename T = void> T set_Locked(bool value) {
		return ((T (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B890))(this, value);
	}
	template <typename T = void> T ChangeCountText(int32_t value, uintptr_t color) {
		return ((T (*)(InventoryItem*, int32_t, uintptr_t))(Il2CppBase() + 0x147DBA0))(this, value, color);
	}

};

