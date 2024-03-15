#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour.h" 

class InventoryItem : public TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryItem"));
	}

	template <typename R = bool> R& HideEmpty() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& DontShowBop() {
		return *(R*)((uintptr_t)this + 0x29);
	}
	template <typename R = uintptr_t> R& ColorEmpty() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = TextMonoBehaviour*> R& Grade() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& DurabilityPanel() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& Durability() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& Cooldown() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& CooldownImage() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& CancelTime() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& CancelImage() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& _isCooldownInited() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = float> R& _cdMultiplier() {
		return *(R*)((uintptr_t)this + 0x7C);
	}
	template <typename R = bool> R& IsCooldownActive() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& IsCancelActive() {
		return *(R*)((uintptr_t)this + 0x81);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& RarityViews() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& checkAnimator() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& checkIcon() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& BopPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& BopPersonal() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& BopLock() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& RecoveryPanel() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& RecoveryPlus() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& RecoveryMinus() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& GrayMaterial() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = GameEntity*> R& _entity() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = int32_t> R& _index() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = ItemEntity*> R& _defaultItem() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	 Action1<InventoryItem*>*& ResourceChanged() {
		return *(Action1<InventoryItem*>**)((uintptr_t)this + 0xF0);
	}
	 Nullable1<int32_t>*& _count() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0xF8);
	}
	template <typename R = int32_t> R& _maxCount() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	 Nullable1<float>*& _durability() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x104);
	}
	template <typename R = Il2CppString*> R& _itemName() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = ItemEntity*> R& Item() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = bool> R& _showDurability() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = int32_t> R& MinCountToShow() {
		return *(R*)((uintptr_t)this + 0x124);
	}
	template <typename R = IUIWindow*> R& Window() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = bool> R& _locked() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = bool> R& initializing() {
		return *(R*)((uintptr_t)this + 0x131);
	}

	template <typename R = bool> R get_HideEmpty() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B42C))(this);
	}
	template <typename R = void> R set_HideEmpty(bool value) {
		return ((R (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B434))(this, value);
	}
	template <typename R = bool> R get_DontShowBop() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B440))(this);
	}
	template <typename R = void> R set_DontShowBop(bool value) {
		return ((R (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B448))(this, value);
	}
	template <typename R = bool> R get_IsCooldownActive() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B454))(this);
	}
	template <typename R = void> R set_IsCooldownActive(bool value) {
		return ((R (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B45C))(this, value);
	}
	template <typename R = bool> R get_IsCancelActive() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B468))(this);
	}
	template <typename R = void> R set_IsCancelActive(bool value) {
		return ((R (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B470))(this, value);
	}
	template <typename R = void> R add_ResourceChanged(Action1<InventoryItem*>* value) {
		return ((R (*)(InventoryItem*, Action1<InventoryItem*>*))(Il2CppBase() + 0x147B47C))(this, value);
	}
	template <typename R = void> R remove_ResourceChanged(Action1<InventoryItem*>* value) {
		return ((R (*)(InventoryItem*, Action1<InventoryItem*>*))(Il2CppBase() + 0x147B51C))(this, value);
	}
	template <typename R = ItemEntity*> R get_DefaultItem() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B5BC))(this);
	}
	template <typename R = void> R set_DefaultItem(ItemEntity* value) {
		return ((R (*)(InventoryItem*, ItemEntity*))(Il2CppBase() + 0x147B5C4))(this, value);
	}
	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B610))(this);
	}
	template <typename R = void> R set_Item(ItemEntity* value) {
		return ((R (*)(InventoryItem*, ItemEntity*))(Il2CppBase() + 0x147B618))(this, value);
	}
	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x1471304))(this);
	}
	template <typename R = int32_t> R get_Id() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B628))(this);
	}
	template <typename R = GameEntity*> R get_ParentEntity() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B68C))(this);
	}
	template <typename R = int32_t> R get_Index() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B694))(this);
	}
	template <typename R = bool> R get_ShowDurability() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B69C))(this);
	}
	template <typename R = void> R set_ShowDurability(bool value) {
		return ((R (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B6A4))(this, value);
	}
	template <typename R = IUIWindow*> R get_Window() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B6B0))(this);
	}
	template <typename R = void> R set_Window(IUIWindow* value) {
		return ((R (*)(InventoryItem*, IUIWindow*))(Il2CppBase() + 0x147B6B8))(this, value);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147B6C8))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity, int32_t index, ItemEntity* defaultItem) {
		return ((R (*)(InventoryItem*, IUIWindow*, GameEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x147BA38))(this, window, entity, index, defaultItem);
	}
	template <typename R = void> R Bind_1(IUIWindow* window, GameEntity* entity, int32_t index) {
		return ((R (*)(InventoryItem*, IUIWindow*, GameEntity*, int32_t))(Il2CppBase() + 0x147BA74))(this, window, entity, index);
	}
	template <typename R = void> R Unbind(bool toDestroy) {
		return ((R (*)(InventoryItem*, bool))(Il2CppBase() + 0x147BC88))(this, toDestroy);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(InventoryItem*, float))(Il2CppBase() + 0x147BE0C))(this, deltaTime);
	}
	template <typename R = void> R UpdateItem(float deltaTime) {
		return ((R (*)(InventoryItem*, float))(Il2CppBase() + 0x147BE10))(this, deltaTime);
	}
	template <typename R = void> R SetActive(Nullable1<bool>* active, bool hard) {
		return ((R (*)(InventoryItem*, Nullable1<bool>*, bool))(Il2CppBase() + 0x147CB14))(this, active, hard);
	}
	template <typename R = void> R OnUpdateCooldown(float time, float totalTime) {
		return ((R (*)(InventoryItem*, float, float))(Il2CppBase() + 0x147CBF0))(this, time, totalTime);
	}
	template <typename R = void> R OnUpdateCancel(MagicEntity* activeMagic) {
		return ((R (*)(InventoryItem*, MagicEntity*))(Il2CppBase() + 0x147CE64))(this, activeMagic);
	}
	template <typename R = void> R OnResourceChanged() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147D1D8))(this);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(InventoryItem*))(Il2CppBase() + 0x147DB98))(this);
	}
	template <typename R = void> R set_Locked(bool value) {
		return ((R (*)(InventoryItem*, bool))(Il2CppBase() + 0x147B890))(this, value);
	}
	template <typename R = void> R ChangeCountText(int32_t value, uintptr_t color) {
		return ((R (*)(InventoryItem*, int32_t, uintptr_t))(Il2CppBase() + 0x147DBA0))(this, value, color);
	}

};

