#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanManagementPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanManagementPanel"));
	}

	template <typename R = uintptr_t> R& CellContainer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& RenameBtn() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ClanName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& CellContainers() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ClanManagementCell*> R& CellPrefab() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ShareInviteButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& DisbandButton() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& DisbandButtonText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R Bind(GuildWindow* window) {
		return ((R (*)(ClanManagementPanel*, GuildWindow*))(Il2CppBase() + 0x1592278))(this, window);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ClanManagementPanel*))(Il2CppBase() + 0x15924C4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ClanManagementPanel*))(Il2CppBase() + 0x1592614))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(ClanManagementPanel*, float))(Il2CppBase() + 0x159268C))(this, deltaTime);
	}
	template <typename R = void> R OnRenameClick() {
		return ((R (*)(ClanManagementPanel*))(Il2CppBase() + 0x1592A5C))(this);
	}
	template <typename R = void> R OnDisbandButtonClick() {
		return ((R (*)(ClanManagementPanel*))(Il2CppBase() + 0x1592C7C))(this);
	}
	template <typename R = void> R KickPlayer(int64_t playerId) {
		return ((R (*)(ClanManagementPanel*, int64_t))(Il2CppBase() + 0x1591820))(this, playerId);
	}
	template <typename R = void> R OnShareInviteButtonClicked() {
		return ((R (*)(ClanManagementPanel*))(Il2CppBase() + 0x1592DA8))(this);
	}
	template <typename R = void> R OnClanUserClicked(uint8_t cellIndex) {
		return ((R (*)(ClanManagementPanel*, uint8_t))(Il2CppBase() + 0x1590B84))(this, cellIndex);
	}
	template <typename R = void> R ShowClanInvitation() {
		return ((R (*)(ClanManagementPanel*))(Il2CppBase() + 0x15930F4))(this);
	}
	template <typename R = void> R CancelOngoingInvite(int64_t inviteId) {
		return ((R (*)(ClanManagementPanel*, int64_t))(Il2CppBase() + 0x1591738))(this, inviteId);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(ClanManagementPanel*))(Il2CppBase() + 0x1593118))(this);
	}

};

