#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "RuneItem.h" 

class ClassRuneItem : public RuneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneItem"));
	}

	template <typename R = uintptr_t> R& _lifeTimePanel() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& _lifeTimeProgress() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = float> R& _lifeTime() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = int64_t> R& _endTime() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	 Nullable1bool>*& _active() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x120);
	}

	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(ClassRuneItem*))(Il2CppBase() + 0x159D150))(this);
	}
	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(ClassRuneItem*))(Il2CppBase() + 0x159D15C))(this);
	}
	template <typename R = bool> R get_NeedShowGrade() {
		return ((R (*)(ClassRuneItem*))(Il2CppBase() + 0x159D164))(this);
	}
	template <typename R = bool> R get_Active() {
		return ((R (*)(ClassRuneItem*))(Il2CppBase() + 0x159CF10))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(ClassRuneItem*, bool))(Il2CppBase() + 0x159D1D8))(this, value);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(ClassRuneItem*, bool))(Il2CppBase() + 0x159D358))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(ClassRuneItem*, bool))(Il2CppBase() + 0x159D464))(this, visual);
	}
	template <typename R = bool> R get_DragEnable() {
		return ((R (*)(ClassRuneItem*))(Il2CppBase() + 0x159D574))(this);
	}
	template <typename R = void> R set_DragEnable(bool value) {
		return ((R (*)(ClassRuneItem*, bool))(Il2CppBase() + 0x159D594))(this, value);
	}
	template <typename R = void> R Bind(IRuneInventoryPanel* runePanel, GameEntity* entity, int32_t index, InventorySlot* slot, Il2CppString* blueprint) {
		return ((R (*)(ClassRuneItem*, IRuneInventoryPanel*, GameEntity*, int32_t, InventorySlot*, Il2CppString*))(Il2CppBase() + 0x159D5A0))(this, runePanel, entity, index, slot, blueprint);
	}
	template <typename R = void> R InitItem() {
		return ((R (*)(ClassRuneItem*))(Il2CppBase() + 0x159D80C))(this);
	}
	template <typename R = void> R UpdateLifeTime() {
		return ((R (*)(ClassRuneItem*))(Il2CppBase() + 0x159DA3C))(this);
	}
	template <typename R = void> R AddListeners() {
		return ((R (*)(ClassRuneItem*))(Il2CppBase() + 0x159DE8C))(this);
	}
	template <typename R = void> R RemoveListeners() {
		return ((R (*)(ClassRuneItem*))(Il2CppBase() + 0x159E15C))(this);
	}
	template <typename R = void> R OnClassRuneChanged(ClassRuneChangedData* data) {
		return ((R (*)(ClassRuneItem*, ClassRuneChangedData*))(Il2CppBase() + 0x159E428))(this, data);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ClassRuneItem*, float))(Il2CppBase() + 0x159E544))(this, deltaTime);
	}

};

