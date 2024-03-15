#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanManagementWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanManagementWindow"));
	}

	template <typename R = uintptr_t> R& CellContainer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& RenameBtn() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& ClanName() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& CellContainers() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = ClanManagementCell*> R& CellPrefab() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& ShareInviteButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& DisbandButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& DisbandButtonText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ClanManagementWindow*))(Il2CppBase() + 0x1593230))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ClanManagementWindow*))(Il2CppBase() + 0x15933D0))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ClanManagementWindow*, float))(Il2CppBase() + 0x159343C))(this, deltaTime);
	}
	template <typename R = void> R OnRenameClick() {
		return ((R (*)(ClanManagementWindow*))(Il2CppBase() + 0x15934AC))(this);
	}
	template <typename R = void> R OnDisbandButtonClick() {
		return ((R (*)(ClanManagementWindow*))(Il2CppBase() + 0x15936C4))(this);
	}
	template <typename R = void> R OnClanUserClicked(uint8_t cellIndex) {
		return ((R (*)(ClanManagementWindow*, uint8_t))(Il2CppBase() + 0x1594054))(this, cellIndex);
	}
	template <typename R = void> R ShowClanInvitation() {
		return ((R (*)(ClanManagementWindow*))(Il2CppBase() + 0x159410C))(this);
	}
	template <typename R = void> R CancelOngoingInvite(int64_t inviteId) {
		return ((R (*)(ClanManagementWindow*, int64_t))(Il2CppBase() + 0x1594124))(this, inviteId);
	}
	template <typename R = void> R KickPlayer(int64_t playerId) {
		return ((R (*)(ClanManagementWindow*, int64_t))(Il2CppBase() + 0x15937F0))(this, playerId);
	}
	template <typename R = void> R OnShareInviteButtonClicked() {
		return ((R (*)(ClanManagementWindow*))(Il2CppBase() + 0x159420C))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ClanManagementWindow*))(Il2CppBase() + 0x1594554))(this);
	}
	template <typename R = void> static R DestroyActionAndSendCloseWindow() {
		return ((R (*)(void *))(Il2CppBase() + 0x1594674))(0);
	}

};

