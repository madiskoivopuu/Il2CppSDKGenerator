#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScrollButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScrollButton"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& ActiveIcon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& DeactiveIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Trigger() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& Pressed() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Nullable1<bool>*& _active() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x31);
	}

	template <typename R = bool> R get_Pressed() {
		return ((R (*)(ScrollButton*))(Il2CppBase() + 0x111C618))(this);
	}
	template <typename R = void> R set_Pressed(bool value) {
		return ((R (*)(ScrollButton*, bool))(Il2CppBase() + 0x111C620))(this, value);
	}
	template <typename R = bool> R get_Active() {
		return ((R (*)(ScrollButton*))(Il2CppBase() + 0x111C62C))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(ScrollButton*, bool))(Il2CppBase() + 0x111C66C))(this, value);
	}
	template <typename R = void> R Init() {
		return ((R (*)(ScrollButton*))(Il2CppBase() + 0x111C7B0))(this);
	}
	template <typename R = void> R Initb__12_0(uintptr_t b) {
		return ((R (*)(ScrollButton*, uintptr_t))(Il2CppBase() + 0x111CA30))(this, b);
	}
	template <typename R = void> R Initb__12_1(uintptr_t b) {
		return ((R (*)(ScrollButton*, uintptr_t))(Il2CppBase() + 0x111CAC8))(this, b);
	}

};

