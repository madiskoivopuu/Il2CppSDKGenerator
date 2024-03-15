#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerNameView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerNameView"));
	}

	template <typename R = uintptr_t> R& _background() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _level() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _descriptionContainer() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _selected() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _regionSprite() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _onlineStatus() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = ClanInvitablePlayersWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int64_t> R& _inviteId() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(PlayerNameView*))(Il2CppBase() + 0x156C2F4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(PlayerNameView*))(Il2CppBase() + 0x156C494))(this);
	}
	template <typename R = InviteEntity*> R get_Invite() {
		return ((R (*)(PlayerNameView*))(Il2CppBase() + 0x156C5A8))(this);
	}
	template <typename R = PlayerEntity*> R get_Player() {
		return ((R (*)(PlayerNameView*))(Il2CppBase() + 0x156C6A4))(this);
	}
	template <typename R = void> R Init(ClanInvitablePlayersWindow* window, int64_t inviteId) {
		return ((R (*)(PlayerNameView*, ClanInvitablePlayersWindow*, int64_t))(Il2CppBase() + 0x156C7A8))(this, window, inviteId);
	}
	template <typename R = void> R Init_1(FindPlayerWindow* window, int64_t playerId) {
		return ((R (*)(PlayerNameView*, FindPlayerWindow*, int64_t))(Il2CppBase() + 0x156CC08))(this, window, playerId);
	}
	template <typename R = void> R Fill() {
		return ((R (*)(PlayerNameView*))(Il2CppBase() + 0x156C904))(this);
	}
	template <typename R = void> R OnViewClicked() {
		return ((R (*)(PlayerNameView*))(Il2CppBase() + 0x156CC3C))(this);
	}
	template <typename R = void> R Select() {
		return ((R (*)(PlayerNameView*))(Il2CppBase() + 0x156CC40))(this);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(PlayerNameView*))(Il2CppBase() + 0x156CC84))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(PlayerNameView*, float))(Il2CppBase() + 0x156CCC8))(this, deltaTime);
	}

};

