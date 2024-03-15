#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestsTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestsTabButton"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _active() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _unactive() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _notificator() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& OnClick() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R set_IsSelected(bool value) {
		return ((R (*)(GuildQuestsTabButton*, bool))(Il2CppBase() + 0x193CDFC))(this, value);
	}
	template <typename R = void> R set_IsNotify(bool value) {
		return ((R (*)(GuildQuestsTabButton*, bool))(Il2CppBase() + 0x193C674))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(GuildQuestsTabButton*))(Il2CppBase() + 0x193D334))(this);
	}
	template <typename R = void> R add_OnClick(uintptr_t value) {
		return ((R (*)(GuildQuestsTabButton*, uintptr_t))(Il2CppBase() + 0x193AB94))(this, value);
	}
	template <typename R = void> R remove_OnClick(uintptr_t value) {
		return ((R (*)(GuildQuestsTabButton*, uintptr_t))(Il2CppBase() + 0x193D3D0))(this, value);
	}
	template <typename R = void> R Awakeb__8_0() {
		return ((R (*)(GuildQuestsTabButton*))(Il2CppBase() + 0x193D478))(this);
	}

};

