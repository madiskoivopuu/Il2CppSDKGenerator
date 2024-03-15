#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem.h" 

class TraderResultItem : public MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraderResultItem"));
	}

	template <typename R = uintptr_t> R& _randomWithDiceIcon() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppArray<MountTraderSkillInfo*>*> R& _mountSkills() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = int32_t> R& SlotIndex() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int32_t> R& _defaultIndex() {
		return *(R*)((uintptr_t)this + 0xCC);
	}
	template <typename R = MountFuser*> R& _mountFuser() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = MountsTraderWindow*> R& _traderWindow() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = int32_t> R& _skillsCount() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = bool> R& _isRandomType() {
		return *(R*)((uintptr_t)this + 0xE4);
	}
	template <typename R = bool> R& _isRandomSkills() {
		return *(R*)((uintptr_t)this + 0xE5);
	}

	template <typename R = int32_t> R get_SlotIndex() {
		return ((R (*)(TraderResultItem*))(Il2CppBase() + 0x150F490))(this);
	}
	template <typename R = void> R set_SlotIndex(int32_t value) {
		return ((R (*)(TraderResultItem*, int32_t))(Il2CppBase() + 0x150F498))(this, value);
	}
	template <typename R = bool> R get_IsRandomItem() {
		return ((R (*)(TraderResultItem*))(Il2CppBase() + 0x150F4A0))(this);
	}
	template <typename R = void> R Bind(MountsTraderWindow* window, GameEntity* entity, int32_t slotIndex, int32_t id) {
		return ((R (*)(TraderResultItem*, MountsTraderWindow*, GameEntity*, int32_t, int32_t))(Il2CppBase() + 0x150F4B0))(this, window, entity, slotIndex, id);
	}
	template <typename R = void> R Bind_1(IMountsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1<IInventoryItem*>* onArming) {
		return ((R (*)(TraderResultItem*, IMountsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1<IInventoryItem*>*))(Il2CppBase() + 0x150F53C))(this, window, entity, index, slot, onArming);
	}
	template <typename R = void> R ShowFuseResult(IInventoryItem* result) {
		return ((R (*)(TraderResultItem*, IInventoryItem*))(Il2CppBase() + 0x150FB74))(this, result);
	}

};

