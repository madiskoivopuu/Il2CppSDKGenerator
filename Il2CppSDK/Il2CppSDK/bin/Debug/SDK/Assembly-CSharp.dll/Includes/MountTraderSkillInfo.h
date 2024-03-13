#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountSkillInfo.h" 

class MountTraderSkillInfo : public MountSkillInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountTraderSkillInfo"));
	}

	template <typename T = uintptr_t> T& _diceIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _selectIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _defaultColor() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _lockedColor() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _diceImage() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _lockImage() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& _canBeSelected() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& _tempErrorString() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Action1MountTraderSkillInfo*>*> T& OnSkillClick() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = bool> T get_Selected() {
		return ((T (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x15498EC))(this);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(MountTraderSkillInfo*, bool))(Il2CppBase() + 0x1549980))(this, value);
	}
	template <typename T = bool> T get_IsRandomSkill() {
		return ((T (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x1549AE8))(this);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x1549A54))(this);
	}
	template <typename T = void> T add_OnSkillClick(Action1MountTraderSkillInfo*>* value) {
		return ((T (*)(MountTraderSkillInfo*, Action1MountTraderSkillInfo*>*))(Il2CppBase() + 0x1549B7C))(this, value);
	}
	template <typename T = void> T remove_OnSkillClick(Action1MountTraderSkillInfo*>* value) {
		return ((T (*)(MountTraderSkillInfo*, Action1MountTraderSkillInfo*>*))(Il2CppBase() + 0x1549C1C))(this, value);
	}
	template <typename T = void> T Bind(IToolTipSource* source, Il2CppString* blueprint, Il2CppString* errorString, bool canBeSelected) {
		return ((T (*)(MountTraderSkillInfo*, IToolTipSource*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1549CBC))(this, source, blueprint, errorString, canBeSelected);
	}
	template <typename T = void> T Show(ItemEntity* item, int32_t index, bool isRandom, bool isNew) {
		return ((T (*)(MountTraderSkillInfo*, ItemEntity*, int32_t, bool, bool))(Il2CppBase() + 0x1549D10))(this, item, index, isRandom, isNew);
	}
	template <typename T = void> T Show_1(ItemEntity* item, int32_t index) {
		return ((T (*)(MountTraderSkillInfo*, ItemEntity*, int32_t))(Il2CppBase() + 0x154A188))(this, item, index);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x1549F5C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x154A1EC))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(MountTraderSkillInfo*, uintptr_t))(Il2CppBase() + 0x154A214))(this, eventData);
	}
	template <typename T = void> T Lock() {
		return ((T (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x154A284))(this);
	}
	template <typename T = void> T Unlock() {
		return ((T (*)(MountTraderSkillInfo*))(Il2CppBase() + 0x154A380))(this);
	}

};

