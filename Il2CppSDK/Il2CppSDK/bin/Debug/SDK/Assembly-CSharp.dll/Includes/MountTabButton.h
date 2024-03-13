#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountTabButton"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = View*> T& ActiveView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = View*> T& UnactiveView() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _locked() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = ItemEntity*> T& MountData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Action1MountTabButton*>*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int32_t> T get_Index() {
		return ((T (*)(MountTabButton*))(Il2CppBase() + 0x154936C))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(MountTabButton*, int32_t))(Il2CppBase() + 0x1549374))(this, value);
	}
	template <typename T = ItemEntity*> T get_MountData() {
		return ((T (*)(MountTabButton*))(Il2CppBase() + 0x154937C))(this);
	}
	template <typename T = void> T set_MountData(ItemEntity* value) {
		return ((T (*)(MountTabButton*, ItemEntity*))(Il2CppBase() + 0x1549384))(this, value);
	}
	template <typename T = void> T add_ClickEvent(Action1MountTabButton*>* value) {
		return ((T (*)(MountTabButton*, Action1MountTabButton*>*))(Il2CppBase() + 0x154938C))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(Action1MountTabButton*>* value) {
		return ((T (*)(MountTabButton*, Action1MountTabButton*>*))(Il2CppBase() + 0x154942C))(this, value);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(MountTabButton*))(Il2CppBase() + 0x15494CC))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(MountTabButton*, bool))(Il2CppBase() + 0x15494D4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MountTabButton*))(Il2CppBase() + 0x1549554))(this);
	}
	template <typename T = void> T RaiseClickEvent() {
		return ((T (*)(MountTabButton*))(Il2CppBase() + 0x15495FC))(this);
	}
	template <typename T = void> T Init(ItemEntity* mountData, int32_t index) {
		return ((T (*)(MountTabButton*, ItemEntity*, int32_t))(Il2CppBase() + 0x154965C))(this, mountData, index);
	}
	template <typename T = void> T SetActive(bool active) {
		return ((T (*)(MountTabButton*, bool))(Il2CppBase() + 0x15494F8))(this, active);
	}

};

