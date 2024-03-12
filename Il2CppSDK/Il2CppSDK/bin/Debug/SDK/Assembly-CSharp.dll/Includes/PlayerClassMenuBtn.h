#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassMenuBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassMenuBtn"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _notAvailable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _classIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _classRarityIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _className() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _skill1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _skill1Icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _skill2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _skill2Icon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _passiveSkill() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _passiveSkillIcon() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _onHold() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& SelectedEvent() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& DeselectedEvent() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = uintptr_t> T get_ClassEntity() {
		return ((T (*)(PlayerClassMenuBtn*))(Il2CppBase() + 0x1B678B4))(this);
	}
	template <typename T = void> T add_SelectedEvent(void* value) {
		return ((T (*)(PlayerClassMenuBtn*, void*))(Il2CppBase() + 0x1B679B8))(this, value);
	}
	template <typename T = void> T remove_SelectedEvent(void* value) {
		return ((T (*)(PlayerClassMenuBtn*, void*))(Il2CppBase() + 0x1B67A58))(this, value);
	}
	template <typename T = void> T add_DeselectedEvent(void* value) {
		return ((T (*)(PlayerClassMenuBtn*, void*))(Il2CppBase() + 0x1B67AF8))(this, value);
	}
	template <typename T = void> T remove_DeselectedEvent(void* value) {
		return ((T (*)(PlayerClassMenuBtn*, void*))(Il2CppBase() + 0x1B67B98))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerClassMenuBtn*))(Il2CppBase() + 0x1B67C38))(this);
	}
	template <typename T = void> T Init(uintptr_t classEntity, bool available) {
		return ((T (*)(PlayerClassMenuBtn*, uintptr_t, bool))(Il2CppBase() + 0x1B67EA8))(this, classEntity, available);
	}
	template <typename T = void> T Awakeb__21_1(uintptr_t d) {
		return ((T (*)(PlayerClassMenuBtn*, uintptr_t))(Il2CppBase() + 0x1B682F4))(this, d);
	}
	template <typename T = void> T Awakeb__21_2(uintptr_t d) {
		return ((T (*)(PlayerClassMenuBtn*, uintptr_t))(Il2CppBase() + 0x1B68354))(this, d);
	}
	template <typename T = void> T Awakeb__21_0() {
		return ((T (*)(PlayerClassMenuBtn*))(Il2CppBase() + 0x1B683B4))(this);
	}

};

}
