#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScrollButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScrollButton"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ActiveIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& DeactiveIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Trigger() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Pressed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _active() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = bool> T get_Pressed() {
		return ((T (*)(ScrollButton*))(Il2CppBase() + 0x111C618))(this);
	}
	template <typename T = void> T set_Pressed(bool value) {
		return ((T (*)(ScrollButton*, bool))(Il2CppBase() + 0x111C620))(this, value);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(ScrollButton*))(Il2CppBase() + 0x111C62C))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(ScrollButton*, bool))(Il2CppBase() + 0x111C66C))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ScrollButton*))(Il2CppBase() + 0x111C7B0))(this);
	}
	template <typename T = void> T Initb__12_0(uintptr_t b) {
		return ((T (*)(ScrollButton*, uintptr_t))(Il2CppBase() + 0x111CA30))(this, b);
	}
	template <typename T = void> T Initb__12_1(uintptr_t b) {
		return ((T (*)(ScrollButton*, uintptr_t))(Il2CppBase() + 0x111CAC8))(this, b);
	}

};

}
