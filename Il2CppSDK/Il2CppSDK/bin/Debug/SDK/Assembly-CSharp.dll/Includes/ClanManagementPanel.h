#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanManagementPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanManagementPanel"));
	}

	template <typename T = uintptr_t> T& CellContainer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RenameBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ClanName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CellContainers() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ClanManagementCell*> T& CellPrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ShareInviteButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& DisbandButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& DisbandButtonText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = GuildWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Bind(GuildWindow* window) {
		return ((T (*)(ClanManagementPanel*, GuildWindow*))(Il2CppBase() + 0x1592278))(this, window);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ClanManagementPanel*))(Il2CppBase() + 0x15924C4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ClanManagementPanel*))(Il2CppBase() + 0x1592614))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(ClanManagementPanel*, float))(Il2CppBase() + 0x159268C))(this, deltaTime);
	}
	template <typename T = void> T OnRenameClick() {
		return ((T (*)(ClanManagementPanel*))(Il2CppBase() + 0x1592A5C))(this);
	}
	template <typename T = void> T OnDisbandButtonClick() {
		return ((T (*)(ClanManagementPanel*))(Il2CppBase() + 0x1592C7C))(this);
	}
	template <typename T = void> T KickPlayer(int64_t playerId) {
		return ((T (*)(ClanManagementPanel*, int64_t))(Il2CppBase() + 0x1591820))(this, playerId);
	}
	template <typename T = void> T OnShareInviteButtonClicked() {
		return ((T (*)(ClanManagementPanel*))(Il2CppBase() + 0x1592DA8))(this);
	}
	template <typename T = void> T OnClanUserClicked(uint8_t cellIndex) {
		return ((T (*)(ClanManagementPanel*, uint8_t))(Il2CppBase() + 0x1590B84))(this, cellIndex);
	}
	template <typename T = void> T ShowClanInvitation() {
		return ((T (*)(ClanManagementPanel*))(Il2CppBase() + 0x15930F4))(this);
	}
	template <typename T = void> T CancelOngoingInvite(int64_t inviteId) {
		return ((T (*)(ClanManagementPanel*, int64_t))(Il2CppBase() + 0x1591738))(this, inviteId);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ClanManagementPanel*))(Il2CppBase() + 0x1593118))(this);
	}

};

