#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestsTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestsTabButton"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _active() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _unactive() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _notificator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T set_IsSelected(bool value) {
		return ((T (*)(GuildQuestsTabButton*, bool))(Il2CppBase() + 0x193CDFC))(this, value);
	}
	template <typename T = void> T set_IsNotify(bool value) {
		return ((T (*)(GuildQuestsTabButton*, bool))(Il2CppBase() + 0x193C674))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildQuestsTabButton*))(Il2CppBase() + 0x193D334))(this);
	}
	template <typename T = void> T add_OnClick(uintptr_t value) {
		return ((T (*)(GuildQuestsTabButton*, uintptr_t))(Il2CppBase() + 0x193AB94))(this, value);
	}
	template <typename T = void> T remove_OnClick(uintptr_t value) {
		return ((T (*)(GuildQuestsTabButton*, uintptr_t))(Il2CppBase() + 0x193D3D0))(this, value);
	}
	template <typename T = void> T Awakeb__8_0() {
		return ((T (*)(GuildQuestsTabButton*))(Il2CppBase() + 0x193D478))(this);
	}

};

