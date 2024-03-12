#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildApplicationPlayerItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildApplicationPlayerItem"));
	}

	template <typename T = uintptr_t> T& PlayerToggle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlayerNameText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& PlayerLevelText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CityLevelText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TimerText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& MessageText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& _inviteId() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_IsSelected() {
		return ((T (*)(GuildApplicationPlayerItem*))(Il2CppBase() + 0x12E3A60))(this);
	}
	template <typename T = void> T set_IsSelected(bool value) {
		return ((T (*)(GuildApplicationPlayerItem*, bool))(Il2CppBase() + 0x12E3A7C))(this, value);
	}
	template <typename T = int64_t> T get_InviteId() {
		return ((T (*)(GuildApplicationPlayerItem*))(Il2CppBase() + 0x12E3A9C))(this);
	}
	template <typename T = void> T Init(int64_t inviteId, void* onToggleChanged) {
		return ((T (*)(GuildApplicationPlayerItem*, int64_t, void*))(Il2CppBase() + 0x12E3AA4))(this, inviteId, onToggleChanged);
	}

};

}
