#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerNameView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerNameView"));
	}

	template <typename T = uintptr_t> T& _background() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _descriptionContainer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _selected() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _regionSprite() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _onlineStatus() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = ClanInvitablePlayersWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int64_t> T& _inviteId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(PlayerNameView*))(Il2CppBase() + 0x156C2F4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PlayerNameView*))(Il2CppBase() + 0x156C494))(this);
	}
	template <typename T = InviteEntity*> T get_Invite() {
		return ((T (*)(PlayerNameView*))(Il2CppBase() + 0x156C5A8))(this);
	}
	template <typename T = PlayerEntity*> T get_Player() {
		return ((T (*)(PlayerNameView*))(Il2CppBase() + 0x156C6A4))(this);
	}
	template <typename T = void> T Init(ClanInvitablePlayersWindow* window, int64_t inviteId) {
		return ((T (*)(PlayerNameView*, ClanInvitablePlayersWindow*, int64_t))(Il2CppBase() + 0x156C7A8))(this, window, inviteId);
	}
	template <typename T = void> T Init_1(FindPlayerWindow* window, int64_t playerId) {
		return ((T (*)(PlayerNameView*, FindPlayerWindow*, int64_t))(Il2CppBase() + 0x156CC08))(this, window, playerId);
	}
	template <typename T = void> T Fill() {
		return ((T (*)(PlayerNameView*))(Il2CppBase() + 0x156C904))(this);
	}
	template <typename T = void> T OnViewClicked() {
		return ((T (*)(PlayerNameView*))(Il2CppBase() + 0x156CC3C))(this);
	}
	template <typename T = void> T Select() {
		return ((T (*)(PlayerNameView*))(Il2CppBase() + 0x156CC40))(this);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(PlayerNameView*))(Il2CppBase() + 0x156CC84))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(PlayerNameView*, float))(Il2CppBase() + 0x156CCC8))(this, deltaTime);
	}

};

