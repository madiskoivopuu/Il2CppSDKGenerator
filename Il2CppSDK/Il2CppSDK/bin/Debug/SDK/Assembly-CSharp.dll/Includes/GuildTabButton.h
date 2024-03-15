#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildTabButton"));
	}

	template <typename R = uintptr_t> R& BulletOn() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& BulletOff() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& ActiveCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& CountLabel() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& TabButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& Panel() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Action1<GuildTabButton*>*& _onButtonClicked() {
		return *(Action1<GuildTabButton*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _offBackground() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R set_IsSelected(bool value) {
		return ((R (*)(GuildTabButton*, bool))(Il2CppBase() + 0x19453E8))(this, value);
	}
	template <typename R = void> R set_IsCountActive(bool value) {
		return ((R (*)(GuildTabButton*, bool))(Il2CppBase() + 0x19454D8))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(GuildTabButton*))(Il2CppBase() + 0x19454F0))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(GuildTabButton*, int32_t))(Il2CppBase() + 0x19455AC))(this, value);
	}
	template <typename R = void> R Bind(uintptr_t panel, uintptr_t offBackground, Action1<GuildTabButton*>* onClicked) {
		return ((R (*)(GuildTabButton*, uintptr_t, uintptr_t, Action1<GuildTabButton*>*))(Il2CppBase() + 0x194565C))(this, panel, offBackground, onClicked);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildTabButton*))(Il2CppBase() + 0x19456BC))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildTabButton*))(Il2CppBase() + 0x1945758))(this);
	}
	template <typename R = void> R OnButtonClicked() {
		return ((R (*)(GuildTabButton*))(Il2CppBase() + 0x1945780))(this);
	}

};

