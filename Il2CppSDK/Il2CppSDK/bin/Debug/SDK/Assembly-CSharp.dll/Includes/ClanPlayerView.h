#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanPlayerView"));
	}

	template <typename T = uintptr_t> T& PlayerNameText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlayerLevelText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CityLevelText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& MessageText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ClickButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& RegionSprite() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _onClick() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int64_t> T& _inviteId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_Invite() {
		return ((T (*)(ClanPlayerView*))(Il2CppBase() + 0x15975E8))(this);
	}
	template <typename T = uintptr_t> T get_Player() {
		return ((T (*)(ClanPlayerView*))(Il2CppBase() + 0x158A094))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ClanPlayerView*))(Il2CppBase() + 0x15976E4))(this);
	}
	template <typename T = void> T OnViewClick() {
		return ((T (*)(ClanPlayerView*))(Il2CppBase() + 0x1597780))(this);
	}
	template <typename T = void> T Select() {
		return ((T (*)(ClanPlayerView*))(Il2CppBase() + 0x1589D94))(this);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(ClanPlayerView*))(Il2CppBase() + 0x1589C64))(this);
	}
	template <typename T = void> T Init(int64_t inviteId, void* onClick) {
		return ((T (*)(ClanPlayerView*, int64_t, void*))(Il2CppBase() + 0x15896DC))(this, inviteId, onClick);
	}

};

}
