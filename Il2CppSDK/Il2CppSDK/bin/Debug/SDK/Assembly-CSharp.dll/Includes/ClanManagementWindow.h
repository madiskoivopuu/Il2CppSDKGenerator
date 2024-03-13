#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanManagementWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanManagementWindow"));
	}

	template <typename T = uintptr_t> T& CellContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& RenameBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ClanName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CellContainers() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = ClanManagementCell*> T& CellPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ShareInviteButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& DisbandButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& DisbandButtonText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ClanManagementWindow*))(Il2CppBase() + 0x1593230))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ClanManagementWindow*))(Il2CppBase() + 0x15933D0))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ClanManagementWindow*, float))(Il2CppBase() + 0x159343C))(this, deltaTime);
	}
	template <typename T = void> T OnRenameClick() {
		return ((T (*)(ClanManagementWindow*))(Il2CppBase() + 0x15934AC))(this);
	}
	template <typename T = void> T OnDisbandButtonClick() {
		return ((T (*)(ClanManagementWindow*))(Il2CppBase() + 0x15936C4))(this);
	}
	template <typename T = void> T OnClanUserClicked(uint8_t cellIndex) {
		return ((T (*)(ClanManagementWindow*, uint8_t))(Il2CppBase() + 0x1594054))(this, cellIndex);
	}
	template <typename T = void> T ShowClanInvitation() {
		return ((T (*)(ClanManagementWindow*))(Il2CppBase() + 0x159410C))(this);
	}
	template <typename T = void> T CancelOngoingInvite(int64_t inviteId) {
		return ((T (*)(ClanManagementWindow*, int64_t))(Il2CppBase() + 0x1594124))(this, inviteId);
	}
	template <typename T = void> T KickPlayer(int64_t playerId) {
		return ((T (*)(ClanManagementWindow*, int64_t))(Il2CppBase() + 0x15937F0))(this, playerId);
	}
	template <typename T = void> T OnShareInviteButtonClicked() {
		return ((T (*)(ClanManagementWindow*))(Il2CppBase() + 0x159420C))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ClanManagementWindow*))(Il2CppBase() + 0x1594554))(this);
	}
	template <typename T = void> static T DestroyActionAndSendCloseWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x1594674))(0);
	}

};

