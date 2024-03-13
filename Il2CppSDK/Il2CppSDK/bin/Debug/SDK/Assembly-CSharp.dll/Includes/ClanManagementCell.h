#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanManagementCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanManagementCell"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _backgrounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _background() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& InviteManagementPanel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ManageInviteButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& InviteButtonAnimator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& CloseManageInviteButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& InvitablePlayersButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SearchPlayerButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ManagePlayerButton() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _userCanvasGroup() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _user() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _userName() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _userLevel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _userImage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _userImage2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _clanLeaderCrown() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _inviteTimer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _ownIcon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _allyIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _invitedIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _panelManagement() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _lockPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _lockTimeText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _btnKick() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = ClanManagementPanel*> T& _panel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint8_t> T& _cellIndex() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = uint8_t> T get_CellIndex() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x158EED4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x158EEDC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x158EF20))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x158F2DC))(this);
	}
	template <typename T = ClanEntity*> T get_Clan() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x158F490))(this);
	}
	template <typename T = PlayerEntity*> T get_Player() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x158F56C))(this);
	}
	template <typename T = InviteEntity*> T get_Invite() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x158F6A8))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window, ClanManagementPanel* panel, uint8_t cellId) {
		return ((T (*)(ClanManagementCell*, IUIWindow*, ClanManagementPanel*, uint8_t))(Il2CppBase() + 0x158F7E4))(this, window, panel, cellId);
	}
	template <typename T = ValueTuple2PlayerEntity*, bool>*> T GetPlayer() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x158FA44))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(ClanManagementCell*, float))(Il2CppBase() + 0x158FD44))(this, deltaTime);
	}
	template <typename T = void> T HideUserManagement() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x15907A4))(this);
	}
	template <typename T = void> T OnButtonManagePlayerClicked() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x15907C4))(this);
	}
	template <typename T = void> T OnButtonManageInviteClicked() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x1590C3C))(this);
	}
	template <typename T = void> T OnButtonCloseManageInviteClicked() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x1590F88))(this);
	}
	template <typename T = void> T OnButtonInvitablePlayersClicked() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x15910F8))(this);
	}
	template <typename T = void> T OnButtonSearchPlayerClicked() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x1591328))(this);
	}
	template <typename T = void> T OnButtonKickPlayerClicked() {
		return ((T (*)(ClanManagementCell*))(Il2CppBase() + 0x1591630))(this);
	}

};

