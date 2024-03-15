#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanManagementCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanManagementCell"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> static R& _backgrounds() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _background() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& InviteManagementPanel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ManageInviteButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& InviteButtonAnimator() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& CloseManageInviteButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& InvitablePlayersButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& SearchPlayerButton() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& ManagePlayerButton() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _userCanvasGroup() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _user() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _userName() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _userLevel() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _userImage() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _userImage2() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _clanLeaderCrown() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _inviteTimer() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _ownIcon() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _allyIcon() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _invitedIcon() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _panelManagement() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _lockPanel() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _lockTimeText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _btnKick() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = ClanManagementPanel*> R& _panel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uint8_t> R& _cellIndex() {
		return *(R*)((uintptr_t)this + 0xE0);
	}

	template <typename R = uint8_t> R get_CellIndex() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x158EED4))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x158EEDC))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x158EF20))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x158F2DC))(this);
	}
	template <typename R = ClanEntity*> R get_Clan() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x158F490))(this);
	}
	template <typename R = PlayerEntity*> R get_Player() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x158F56C))(this);
	}
	template <typename R = InviteEntity*> R get_Invite() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x158F6A8))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, ClanManagementPanel* panel, uint8_t cellId) {
		return ((R (*)(ClanManagementCell*, IUIWindow*, ClanManagementPanel*, uint8_t))(Il2CppBase() + 0x158F7E4))(this, window, panel, cellId);
	}
	 ValueTuple2<PlayerEntity*, bool>* GetPlayer() {
		return ((ValueTuple2<PlayerEntity*, bool>* (*)(ClanManagementCell*))(Il2CppBase() + 0x158FA44))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(ClanManagementCell*, float))(Il2CppBase() + 0x158FD44))(this, deltaTime);
	}
	template <typename R = void> R HideUserManagement() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x15907A4))(this);
	}
	template <typename R = void> R OnButtonManagePlayerClicked() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x15907C4))(this);
	}
	template <typename R = void> R OnButtonManageInviteClicked() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x1590C3C))(this);
	}
	template <typename R = void> R OnButtonCloseManageInviteClicked() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x1590F88))(this);
	}
	template <typename R = void> R OnButtonInvitablePlayersClicked() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x15910F8))(this);
	}
	template <typename R = void> R OnButtonSearchPlayerClicked() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x1591328))(this);
	}
	template <typename R = void> R OnButtonKickPlayerClicked() {
		return ((R (*)(ClanManagementCell*))(Il2CppBase() + 0x1591630))(this);
	}

};

