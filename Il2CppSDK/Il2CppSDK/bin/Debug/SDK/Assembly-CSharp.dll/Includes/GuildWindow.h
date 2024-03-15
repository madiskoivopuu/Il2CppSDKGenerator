#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ClanOffBackground() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& GuildOffBackground() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = GuildTabButton*> R& ClanMembersButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = ClanInitialPanel*> R& ClanInitialPanel() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = ClanManagementPanel*> R& ClanManagementPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = ClanSearchPanel*> R& ClanSearchPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = ClanInvitesPlayerPanel*> R& ClanInvitesPlayerPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = GuildInitialPanel*> R& GuildInitialPanel() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = GuildTabButton*> R& GuildInitialButton() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = GuildPanel*> R& GuildPanel() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = GuildTabButton*> R& GuildButton() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = GuildMembersPanel*> R& MembersPanel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = GuildTabButton*> R& MembersButton() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = GuildQuestsPanel*> R& QuestsPanel() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = GuildTabButton*> R& QuestsButton() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = GuildRecommendedPanel*> R& RecommendedPanel() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = GuildTabButton*> R& RecommendedButton() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = GuildRatingsPanel*> R& RatingsPanel() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = GuildTabButton*> R& RatingsButton() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = GuildInvitesPanel*> R& InvitesPanel() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = GuildTabButton*> R& InvitesButton() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = GuildSettingsPanel*> R& SettingsPanel() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = GuildTabButton*> R& SettingsButton() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = ContextMenuView*> R& ContextMenuViewPrefab() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& InvitesToPlayerCount() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& InvitesToGuildCount() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = ContextMenuView*> R& ContextMenuViewInstance() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = GuildTabButton*> R& _currentActiveTab() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = int64_t> R& _lastGuildMessageId() {
		return *(R*)((uintptr_t)this + 0x168);
	}

	template <typename R = ContextMenuView*> R get_ContextMenuViewInstance() {
		return ((R (*)(GuildWindow*))(Il2CppBase() + 0x194855C))(this);
	}
	template <typename R = void> R set_ContextMenuViewInstance(ContextMenuView* value) {
		return ((R (*)(GuildWindow*, ContextMenuView*))(Il2CppBase() + 0x1948564))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(GuildWindow*))(Il2CppBase() + 0x1948574))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(GuildWindow*))(Il2CppBase() + 0x1948600))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(GuildWindow*, float))(Il2CppBase() + 0x19496C8))(this, deltaTime);
	}
	template <typename R = void> R ShowCurrentPanels() {
		return ((R (*)(GuildWindow*))(Il2CppBase() + 0x194915C))(this);
	}
	template <typename R = void> R InitContextMenu() {
		return ((R (*)(GuildWindow*))(Il2CppBase() + 0x1948A94))(this);
	}
	template <typename R = void> R OnGuildTabChanged(GuildTabButton* tab) {
		return ((R (*)(GuildWindow*, GuildTabButton*))(Il2CppBase() + 0x194A908))(this, tab);
	}
	template <typename R = void> R OnClanTabUpdate() {
		return ((R (*)(GuildWindow*))(Il2CppBase() + 0x194AA64))(this);
	}
	template <typename R = uintptr_t> R GetActiveClanPanel() {
		return ((R (*)(GuildWindow*))(Il2CppBase() + 0x1948C00))(this);
	}
	template <typename R = void> R ProcessGuildMails() {
		return ((R (*)(GuildWindow*))(Il2CppBase() + 0x194A08C))(this);
	}
	template <typename R = void> R OnGuildMemberPanelError(ProtoTools::ErrorCodes code) {
		return ((R (*)(GuildWindow*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x194AB4C))(this, code);
	}
	template <typename R = void> R OnUpdateGuildError(ProtoTools::ErrorCodes errorCode) {
		return ((R (*)(GuildWindow*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x194B114))(this, errorCode);
	}
	template <typename R = void> R OnRatingGuildsResponse(RatingGuildType type, Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes errorCode) {
		return ((R (*)(GuildWindow*, RatingGuildType, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x194B170))(this, type, ids, errorCode);
	}

};

