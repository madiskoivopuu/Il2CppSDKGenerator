#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIAlert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAlert"));
	}

	template <typename T = Il2CppString*> T& _key() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _removeOnClick() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _mark() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _isOn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> static T& _alertKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _alertTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Key() {
		return ((T (*)(UIAlert*))(Il2CppBase() + 0x102DAE8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIAlert*))(Il2CppBase() + 0x102DAF0))(this);
	}
	template <typename T = bool> static T KeyAdded(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x102DC14))(0, key);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIAlert*))(Il2CppBase() + 0x102DCA0))(this);
	}
	template <typename T = bool> T get_IsOn() {
		return ((T (*)(UIAlert*))(Il2CppBase() + 0x102DEA4))(this);
	}
	template <typename T = void> T set_IsOn(bool value) {
		return ((T (*)(UIAlert*, bool))(Il2CppBase() + 0x102DEAC))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIAlert*))(Il2CppBase() + 0x102DFFC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIAlert*))(Il2CppBase() + 0x102E0C4))(this);
	}
	template <typename T = void> static T Add(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x102E150))(0, key);
	}
	template <typename T = void> static T Remove(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x102DD04))(0, key);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x102E354))(0);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(UIAlert*, uintptr_t))(Il2CppBase() + 0x102E4C8))(this, eventData);
	}

};

}
