#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildTabButton"));
	}

	template <typename T = uintptr_t> T& BulletOn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BulletOff() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ActiveCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& CountLabel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TabButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Panel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _onButtonClicked() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _offBackground() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T set_IsSelected(bool value) {
		return ((T (*)(GuildTabButton*, bool))(Il2CppBase() + 0x19453E8))(this, value);
	}
	template <typename T = void> T set_IsCountActive(bool value) {
		return ((T (*)(GuildTabButton*, bool))(Il2CppBase() + 0x19454D8))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(GuildTabButton*))(Il2CppBase() + 0x19454F0))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(GuildTabButton*, int32_t))(Il2CppBase() + 0x19455AC))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t panel, uintptr_t offBackground, void* onClicked) {
		return ((T (*)(GuildTabButton*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x194565C))(this, panel, offBackground, onClicked);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildTabButton*))(Il2CppBase() + 0x19456BC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildTabButton*))(Il2CppBase() + 0x1945758))(this);
	}
	template <typename T = void> T OnButtonClicked() {
		return ((T (*)(GuildTabButton*))(Il2CppBase() + 0x1945780))(this);
	}

};

}
