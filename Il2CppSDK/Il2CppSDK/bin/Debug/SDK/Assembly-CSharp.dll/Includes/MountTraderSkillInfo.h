#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountSkillInfo.h" 

class MountTraderSkillInfo : public MountSkillInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountTraderSkillInfo"));
	}

	template <typename R = uintptr_t> R& _diceIcon() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _selectIcon() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _defaultColor() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _lockedColor() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _diceImage() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _lockImage() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = bool> R& _canBeSelected() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = Il2CppString*> R& _tempErrorString() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	 Action1MountTraderSkillInfo*>*& OnSkillClick() {
		return *(Action1MountTraderSkillInfo*>**)((uintptr_t)this + 0xF8);
	}

	template <typename R = bool> R get_Selected() {
		return ((R (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x15498EC))(this);
	}
	template <typename R = void> R set_Selected(bool value) {
		return ((R (*)(MountTraderSkillInfo*, bool))(Il2CppBase() + 0x1549980))(this, value);
	}
	template <typename R = bool> R get_IsRandomSkill() {
		return ((R (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x1549AE8))(this);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x1549A54))(this);
	}
	template <typename R = void> R add_OnSkillClick(Action1MountTraderSkillInfo*>* value) {
		return ((R (*)(MountTraderSkillInfo*, Action1MountTraderSkillInfo*>*))(Il2CppBase() + 0x1549B7C))(this, value);
	}
	template <typename R = void> R remove_OnSkillClick(Action1MountTraderSkillInfo*>* value) {
		return ((R (*)(MountTraderSkillInfo*, Action1MountTraderSkillInfo*>*))(Il2CppBase() + 0x1549C1C))(this, value);
	}
	template <typename R = void> R Bind(IToolTipSource* source, Il2CppString* blueprint, Il2CppString* errorString, bool canBeSelected) {
		return ((R (*)(MountTraderSkillInfo*, IToolTipSource*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1549CBC))(this, source, blueprint, errorString, canBeSelected);
	}
	template <typename R = void> R Show(ItemEntity* item, int32_t index, bool isRandom, bool isNew) {
		return ((R (*)(MountTraderSkillInfo*, ItemEntity*, int32_t, bool, bool))(Il2CppBase() + 0x1549D10))(this, item, index, isRandom, isNew);
	}
	template <typename R = void> R Show_1(ItemEntity* item, int32_t index) {
		return ((R (*)(MountTraderSkillInfo*, ItemEntity*, int32_t))(Il2CppBase() + 0x154A188))(this, item, index);
	}
	template <typename R = void> R Reset() {
		return ((R (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x1549F5C))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x154A1EC))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(MountTraderSkillInfo*, uintptr_t))(Il2CppBase() + 0x154A214))(this, eventData);
	}
	template <typename R = void> R Lock() {
		return ((R (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x154A284))(this);
	}
	template <typename R = void> R Unlock() {
		return ((R (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x154A380))(this);
	}

};

