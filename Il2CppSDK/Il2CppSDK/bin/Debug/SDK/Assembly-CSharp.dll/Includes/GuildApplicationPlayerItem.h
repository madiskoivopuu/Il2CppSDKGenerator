#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildApplicationPlayerItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildApplicationPlayerItem"));
	}

	template <typename R = uintptr_t> R& PlayerToggle() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& PlayerNameText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& PlayerLevelText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& CityLevelText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& TimerText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& MessageText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int64_t> R& _inviteId() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = bool> R get_IsSelected() {
		return ((R (*)(GuildApplicationPlayerItem*))(Il2CppBase() + 0x12E3A60))(this);
	}
	template <typename R = void> R set_IsSelected(bool value) {
		return ((R (*)(GuildApplicationPlayerItem*, bool))(Il2CppBase() + 0x12E3A7C))(this, value);
	}
	template <typename R = int64_t> R get_InviteId() {
		return ((R (*)(GuildApplicationPlayerItem*))(Il2CppBase() + 0x12E3A9C))(this);
	}
	template <typename R = void> R Init(int64_t inviteId, Action2<bool, GuildApplicationPlayerItem*>* onToggleChanged) {
		return ((R (*)(GuildApplicationPlayerItem*, int64_t, Action2<bool, GuildApplicationPlayerItem*>*))(Il2CppBase() + 0x12E3AA4))(this, inviteId, onToggleChanged);
	}

};

