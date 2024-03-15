#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountTabButton"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = View*> R& ActiveView() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = View*> R& UnactiveView() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _active() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _locked() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = ItemEntity*> R& MountData() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Action1<MountTabButton*>*& ClickEvent() {
		return *(Action1<MountTabButton*>**)((uintptr_t)this + 0x40);
	}

	template <typename R = int32_t> R get_Index() {
		return ((R (*)(MountTabButton*))(Il2CppBase() + 0x154936C))(this);
	}
	template <typename R = void> R set_Index(int32_t value) {
		return ((R (*)(MountTabButton*, int32_t))(Il2CppBase() + 0x1549374))(this, value);
	}
	template <typename R = ItemEntity*> R get_MountData() {
		return ((R (*)(MountTabButton*))(Il2CppBase() + 0x154937C))(this);
	}
	template <typename R = void> R set_MountData(ItemEntity* value) {
		return ((R (*)(MountTabButton*, ItemEntity*))(Il2CppBase() + 0x1549384))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1<MountTabButton*>* value) {
		return ((R (*)(MountTabButton*, Action1<MountTabButton*>*))(Il2CppBase() + 0x154938C))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1<MountTabButton*>* value) {
		return ((R (*)(MountTabButton*, Action1<MountTabButton*>*))(Il2CppBase() + 0x154942C))(this, value);
	}
	template <typename R = bool> R get_Active() {
		return ((R (*)(MountTabButton*))(Il2CppBase() + 0x15494CC))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(MountTabButton*, bool))(Il2CppBase() + 0x15494D4))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(MountTabButton*))(Il2CppBase() + 0x1549554))(this);
	}
	template <typename R = void> R RaiseClickEvent() {
		return ((R (*)(MountTabButton*))(Il2CppBase() + 0x15495FC))(this);
	}
	template <typename R = void> R Init(ItemEntity* mountData, int32_t index) {
		return ((R (*)(MountTabButton*, ItemEntity*, int32_t))(Il2CppBase() + 0x154965C))(this, mountData, index);
	}
	template <typename R = void> R SetActive(bool active) {
		return ((R (*)(MountTabButton*, bool))(Il2CppBase() + 0x15494F8))(this, active);
	}

};

