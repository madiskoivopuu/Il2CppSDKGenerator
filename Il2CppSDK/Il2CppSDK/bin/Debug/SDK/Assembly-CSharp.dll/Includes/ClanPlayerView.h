#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanPlayerView"));
	}

	template <typename R = uintptr_t> R& PlayerNameText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& PlayerLevelText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& CityLevelText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& MessageText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Selected() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ClickButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& RegionSprite() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Action1ClanPlayerView*>*& _onClick() {
		return *(Action1ClanPlayerView*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = int64_t> R& _inviteId() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = InviteEntity*> R get_Invite() {
		return ((R (*)(ClanPlayerView*))(Il2CppBase() + 0x15975E8))(this);
	}
	template <typename R = PlayerEntity*> R get_Player() {
		return ((R (*)(ClanPlayerView*))(Il2CppBase() + 0x158A094))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ClanPlayerView*))(Il2CppBase() + 0x15976E4))(this);
	}
	template <typename R = void> R OnViewClick() {
		return ((R (*)(ClanPlayerView*))(Il2CppBase() + 0x1597780))(this);
	}
	template <typename R = void> R Select() {
		return ((R (*)(ClanPlayerView*))(Il2CppBase() + 0x1589D94))(this);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(ClanPlayerView*))(Il2CppBase() + 0x1589C64))(this);
	}
	template <typename R = void> R Init(int64_t inviteId, Action1ClanPlayerView*>* onClick) {
		return ((R (*)(ClanPlayerView*, int64_t, Action1ClanPlayerView*>*))(Il2CppBase() + 0x15896DC))(this, inviteId, onClick);
	}

};

