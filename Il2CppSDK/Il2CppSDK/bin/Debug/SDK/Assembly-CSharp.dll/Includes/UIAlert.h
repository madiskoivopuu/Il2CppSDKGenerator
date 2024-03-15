#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIAlert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAlert"));
	}

	template <typename R = Il2CppString*> R& _key() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& _removeOnClick() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _mark() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _isOn() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 static HashSet1Il2CppString*>*& _alertKeys() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static HashSet1UIAlert*>*& _alertTargets() {
		return *(HashSet1UIAlert*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = Il2CppString*> R get_Key() {
		return ((R (*)(UIAlert*))(Il2CppBase() + 0x102DAE8))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(UIAlert*))(Il2CppBase() + 0x102DAF0))(this);
	}
	template <typename R = bool> static R KeyAdded(Il2CppString* key) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x102DC14))(0, key);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(UIAlert*))(Il2CppBase() + 0x102DCA0))(this);
	}
	template <typename R = bool> R get_IsOn() {
		return ((R (*)(UIAlert*))(Il2CppBase() + 0x102DEA4))(this);
	}
	template <typename R = void> R set_IsOn(bool value) {
		return ((R (*)(UIAlert*, bool))(Il2CppBase() + 0x102DEAC))(this, value);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(UIAlert*))(Il2CppBase() + 0x102DFFC))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(UIAlert*))(Il2CppBase() + 0x102E0C4))(this);
	}
	template <typename R = void> static R Add(Il2CppString* key) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x102E150))(0, key);
	}
	template <typename R = void> static R Remove(Il2CppString* key) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x102DD04))(0, key);
	}
	template <typename R = void> static R Clear() {
		return ((R (*)(void *))(Il2CppBase() + 0x102E354))(0);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(UIAlert*, uintptr_t))(Il2CppBase() + 0x102E4C8))(this, eventData);
	}

};

