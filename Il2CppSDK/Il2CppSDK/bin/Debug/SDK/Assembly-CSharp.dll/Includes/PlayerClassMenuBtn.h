#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassMenuBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassMenuBtn"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _notAvailable() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _classIcon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _classRarityIcon() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _className() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _skill1() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _skill1Icon() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _skill2() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _skill2Icon() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _passiveSkill() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _passiveSkillIcon() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& _onHold() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& _blueprint() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	 Action1<PlayerClassMenuBtn*>*& SelectedEvent() {
		return *(Action1<PlayerClassMenuBtn*>**)((uintptr_t)this + 0x80);
	}
	 Action1<PlayerClassMenuBtn*>*& DeselectedEvent() {
		return *(Action1<PlayerClassMenuBtn*>**)((uintptr_t)this + 0x88);
	}

	template <typename R = ItemEntity*> R get_ClassEntity() {
		return ((R (*)(PlayerClassMenuBtn*))(Il2CppBase() + 0x1B678B4))(this);
	}
	template <typename R = void> R add_SelectedEvent(Action1<PlayerClassMenuBtn*>* value) {
		return ((R (*)(PlayerClassMenuBtn*, Action1<PlayerClassMenuBtn*>*))(Il2CppBase() + 0x1B679B8))(this, value);
	}
	template <typename R = void> R remove_SelectedEvent(Action1<PlayerClassMenuBtn*>* value) {
		return ((R (*)(PlayerClassMenuBtn*, Action1<PlayerClassMenuBtn*>*))(Il2CppBase() + 0x1B67A58))(this, value);
	}
	template <typename R = void> R add_DeselectedEvent(Action1<PlayerClassMenuBtn*>* value) {
		return ((R (*)(PlayerClassMenuBtn*, Action1<PlayerClassMenuBtn*>*))(Il2CppBase() + 0x1B67AF8))(this, value);
	}
	template <typename R = void> R remove_DeselectedEvent(Action1<PlayerClassMenuBtn*>* value) {
		return ((R (*)(PlayerClassMenuBtn*, Action1<PlayerClassMenuBtn*>*))(Il2CppBase() + 0x1B67B98))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerClassMenuBtn*))(Il2CppBase() + 0x1B67C38))(this);
	}
	template <typename R = void> R Init(ItemEntity* classEntity, bool available) {
		return ((R (*)(PlayerClassMenuBtn*, ItemEntity*, bool))(Il2CppBase() + 0x1B67EA8))(this, classEntity, available);
	}
	template <typename R = void> R Awakeb__21_1(uintptr_t d) {
		return ((R (*)(PlayerClassMenuBtn*, uintptr_t))(Il2CppBase() + 0x1B682F4))(this, d);
	}
	template <typename R = void> R Awakeb__21_2(uintptr_t d) {
		return ((R (*)(PlayerClassMenuBtn*, uintptr_t))(Il2CppBase() + 0x1B68354))(this, d);
	}
	template <typename R = void> R Awakeb__21_0() {
		return ((R (*)(PlayerClassMenuBtn*))(Il2CppBase() + 0x1B683B4))(this);
	}

};

