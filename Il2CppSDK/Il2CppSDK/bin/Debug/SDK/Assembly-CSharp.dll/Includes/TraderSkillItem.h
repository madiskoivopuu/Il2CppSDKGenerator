#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem" 

class TraderSkillItem: MountItem
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
	template <typename T = uintptr_t> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _traderWindow() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _skillsCount() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = void*> T& OnSkillClick() {
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
	template <typename T = void> T add_OnSkillClick(void* value) {
		return ((T (*)(TraderSkillItem*, void*))(Il2CppBase() + 0x151019C))(this, value);
	}
	template <typename T = void> T remove_OnSkillClick(void* value) {
		return ((T (*)(TraderSkillItem*, void*))(Il2CppBase() + 0x151023C))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity, int32_t slotIndex, int32_t id, void* onSkillClick) {
		return ((T (*)(TraderSkillItem*, uintptr_t, uintptr_t, int32_t, int32_t, void*))(Il2CppBase() + 0x15102DC))(this, window, entity, slotIndex, id, onSkillClick);
	}
	template <typename T = void> T Bind_1(uintptr_t window, uintptr_t entity, int32_t index, uintptr_t slot, void* onArming) {
		return ((T (*)(TraderSkillItem*, uintptr_t, uintptr_t, int32_t, uintptr_t, void*))(Il2CppBase() + 0x1510380))(this, window, entity, index, slot, onArming);
	}
	template <typename T = void> T SkillClick(uintptr_t skill) {
		return ((T (*)(TraderSkillItem*, uintptr_t))(Il2CppBase() + 0x1510C20))(this, skill);
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

}
