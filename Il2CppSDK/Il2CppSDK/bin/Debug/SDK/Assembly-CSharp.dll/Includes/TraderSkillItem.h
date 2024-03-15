#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem.h" 

class TraderSkillItem : public MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraderSkillItem"));
	}

	template <typename R = Il2CppArray<MountTraderSkillInfo*>*> R& _mountSkills() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> R& SlotIndex() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> R& _defaultIndex() {
		return *(R*)((uintptr_t)this + 0xBC);
	}
	template <typename R = MountFuser*> R& _mountFuser() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = MountsTraderWindow*> R& _traderWindow() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int32_t> R& _skillsCount() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	 Action3int32_t, int32_t, bool>*& OnSkillClick() {
		return *(Action3int32_t, int32_t, bool>**)((uintptr_t)this + 0xD8);
	}

	template <typename R = int32_t> R get_SlotIndex() {
		return ((R (*)(TraderSkillItem*))(Il2CppBase() + 0x1510140))(this);
	}
	template <typename R = void> R set_SlotIndex(int32_t value) {
		return ((R (*)(TraderSkillItem*, int32_t))(Il2CppBase() + 0x1510148))(this, value);
	}
	template <typename R = bool> R get_IsRandomItem() {
		return ((R (*)(TraderSkillItem*))(Il2CppBase() + 0x1510150))(this);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(TraderSkillItem*))(Il2CppBase() + 0x1510160))(this);
	}
	template <typename R = void> R add_OnSkillClick(Action3int32_t, int32_t, bool>* value) {
		return ((R (*)(TraderSkillItem*, Action3int32_t, int32_t, bool>*))(Il2CppBase() + 0x151019C))(this, value);
	}
	template <typename R = void> R remove_OnSkillClick(Action3int32_t, int32_t, bool>* value) {
		return ((R (*)(TraderSkillItem*, Action3int32_t, int32_t, bool>*))(Il2CppBase() + 0x151023C))(this, value);
	}
	template <typename R = void> R Bind(MountsTraderWindow* window, GameEntity* entity, int32_t slotIndex, int32_t id, Action3int32_t, int32_t, bool>* onSkillClick) {
		return ((R (*)(TraderSkillItem*, MountsTraderWindow*, GameEntity*, int32_t, int32_t, Action3int32_t, int32_t, bool>*))(Il2CppBase() + 0x15102DC))(this, window, entity, slotIndex, id, onSkillClick);
	}
	template <typename R = void> R Bind_1(IMountsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1IInventoryItem*>* onArming) {
		return ((R (*)(TraderSkillItem*, IMountsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1IInventoryItem*>*))(Il2CppBase() + 0x1510380))(this, window, entity, index, slot, onArming);
	}
	template <typename R = void> R SkillClick(MountTraderSkillInfo* skill) {
		return ((R (*)(TraderSkillItem*, MountTraderSkillInfo*))(Il2CppBase() + 0x1510C20))(this, skill);
	}
	template <typename R = void> R CheckSkillsForLock() {
		return ((R (*)(TraderSkillItem*))(Il2CppBase() + 0x1510D18))(this);
	}
	template <typename R = void> R ShowCustomSkill() {
		return ((R (*)(TraderSkillItem*))(Il2CppBase() + 0x1510DE4))(this);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(TraderSkillItem*, bool))(Il2CppBase() + 0x1510F64))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(TraderSkillItem*, bool))(Il2CppBase() + 0x1510FC0))(this, visual);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(TraderSkillItem*))(Il2CppBase() + 0x1511108))(this);
	}

};

