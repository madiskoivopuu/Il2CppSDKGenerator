#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem.h" 

class TraderSkillItem : public MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraderSkillItem"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _mountSkills() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _defaultIndex() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = MountFuser*> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = MountsTraderWindow*> T& _traderWindow() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _skillsCount() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Action3int32_t, int32_t, bool>*> T& OnSkillClick() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = int32_t> T get_SlotIndex() {
		return ((T (*)(TraderSkillItem*))(Il2CppBase() + 0x1510140))(this);
	}
	template <typename T = void> T set_SlotIndex(int32_t value) {
		return ((T (*)(TraderSkillItem*, int32_t))(Il2CppBase() + 0x1510148))(this, value);
	}
	template <typename T = bool> T get_IsRandomItem() {
		return ((T (*)(TraderSkillItem*))(Il2CppBase() + 0x1510150))(this);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(TraderSkillItem*))(Il2CppBase() + 0x1510160))(this);
	}
	template <typename T = void> T add_OnSkillClick(Action3int32_t, int32_t, bool>* value) {
		return ((T (*)(TraderSkillItem*, Action3int32_t, int32_t, bool>*))(Il2CppBase() + 0x151019C))(this, value);
	}
	template <typename T = void> T remove_OnSkillClick(Action3int32_t, int32_t, bool>* value) {
		return ((T (*)(TraderSkillItem*, Action3int32_t, int32_t, bool>*))(Il2CppBase() + 0x151023C))(this, value);
	}
	template <typename T = void> T Bind(MountsTraderWindow* window, GameEntity* entity, int32_t slotIndex, int32_t id, Action3int32_t, int32_t, bool>* onSkillClick) {
		return ((T (*)(TraderSkillItem*, MountsTraderWindow*, GameEntity*, int32_t, int32_t, Action3int32_t, int32_t, bool>*))(Il2CppBase() + 0x15102DC))(this, window, entity, slotIndex, id, onSkillClick);
	}
	template <typename T = void> T Bind_1(IMountsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1IInventoryItem*>* onArming) {
		return ((T (*)(TraderSkillItem*, IMountsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1IInventoryItem*>*))(Il2CppBase() + 0x1510380))(this, window, entity, index, slot, onArming);
	}
	template <typename T = void> T SkillClick(MountTraderSkillInfo* skill) {
		return ((T (*)(TraderSkillItem*, MountTraderSkillInfo*))(Il2CppBase() + 0x1510C20))(this, skill);
	}
	template <typename T = void> T CheckSkillsForLock() {
		return ((T (*)(TraderSkillItem*))(Il2CppBase() + 0x1510D18))(this);
	}
	template <typename T = void> T ShowCustomSkill() {
		return ((T (*)(TraderSkillItem*))(Il2CppBase() + 0x1510DE4))(this);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(TraderSkillItem*, bool))(Il2CppBase() + 0x1510F64))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(TraderSkillItem*, bool))(Il2CppBase() + 0x1510FC0))(this, visual);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TraderSkillItem*))(Il2CppBase() + 0x1511108))(this);
	}

};

