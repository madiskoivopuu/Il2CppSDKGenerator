#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ClanOffBackground() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GuildOffBackground() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = GuildTabButton*> T& ClanMembersButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = ClanInitialPanel*> T& ClanInitialPanel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = ClanManagementPanel*> T& ClanManagementPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = ClanSearchPanel*> T& ClanSearchPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = ClanInvitesPlayerPanel*> T& ClanInvitesPlayerPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = GuildInitialPanel*> T& GuildInitialPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = GuildTabButton*> T& GuildInitialButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = GuildPanel*> T& GuildPanel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = GuildTabButton*> T& GuildButton() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = GuildMembersPanel*> T& MembersPanel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = GuildTabButton*> T& MembersButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = GuildQuestsPanel*> T& QuestsPanel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = GuildTabButton*> T& QuestsButton() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = GuildRecommendedPanel*> T& RecommendedPanel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = GuildTabButton*> T& RecommendedButton() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = GuildRatingsPanel*> T& RatingsPanel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = GuildTabButton*> T& RatingsButton() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = GuildInvitesPanel*> T& InvitesPanel() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = GuildTabButton*> T& InvitesButton() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = GuildSettingsPanel*> T& SettingsPanel() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = GuildTabButton*> T& SettingsButton() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = ContextMenuView*> T& ContextMenuViewPrefab() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& InvitesToPlayerCount() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& InvitesToGuildCount() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = ContextMenuView*> T& ContextMenuViewInstance() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = GuildTabButton*> T& _currentActiveTab() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int64_t> T& _lastGuildMessageId() {
		return *(T*)((uintptr_t)this + 0x168);
	}

	template <typename T = ContextMenuView*> T get_ContextMenuViewInstance() {
		return ((T (*)(GuildWindow*))(Il2CppBase() + 0x194855C))(this);
	}
	template <typename T = void> T set_ContextMenuViewInstance(ContextMenuView* value) {
		return ((T (*)(GuildWindow*, ContextMenuView*))(Il2CppBase() + 0x1948564))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildWindow*))(Il2CppBase() + 0x1948574))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(GuildWindow*))(Il2CppBase() + 0x1948600))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(GuildWindow*, float))(Il2CppBase() + 0x19496C8))(this, deltaTime);
	}
	template <typename T = void> T ShowCurrentPanels() {
		return ((T (*)(GuildWindow*))(Il2CppBase() + 0x194915C))(this);
	}
	template <typename T = void> T InitContextMenu() {
		return ((T (*)(GuildWindow*))(Il2CppBase() + 0x1948A94))(this);
	}
	template <typename T = void> T OnGuildTabChanged(GuildTabButton* tab) {
		return ((T (*)(GuildWindow*, GuildTabButton*))(Il2CppBase() + 0x194A908))(this, tab);
	}
	template <typename T = void> T OnClanTabUpdate() {
		return ((T (*)(GuildWindow*))(Il2CppBase() + 0x194AA64))(this);
	}
	template <typename T = uintptr_t> T GetActiveClanPanel() {
		return ((T (*)(GuildWindow*))(Il2CppBase() + 0x1948C00))(this);
	}
	template <typename T = void> T ProcessGuildMails() {
		return ((T (*)(GuildWindow*))(Il2CppBase() + 0x194A08C))(this);
	}
	template <typename T = void> T OnGuildMemberPanelError(ErrorCodes* code) {
		return ((T (*)(GuildWindow*, ErrorCodes*))(Il2CppBase() + 0x194AB4C))(this, code);
	}
	template <typename T = void> T OnUpdateGuildError(ErrorCodes* errorCode) {
		return ((T (*)(GuildWindow*, ErrorCodes*))(Il2CppBase() + 0x194B114))(this, errorCode);
	}
	template <typename T = void> T OnRatingGuildsResponse(RatingGuildType* type, Il2CppArray<uintptr_t>* ids, ErrorCodes* errorCode) {
		return ((T (*)(GuildWindow*, RatingGuildType*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x194B170))(this, type, ids, errorCode);
	}

};

