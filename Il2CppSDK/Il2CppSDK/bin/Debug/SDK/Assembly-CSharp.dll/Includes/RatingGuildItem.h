#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RatingGuildItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RatingGuildItem"));
	}

	template <typename R = uintptr_t> R& Position() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& GuildName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& NameButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& PointCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = TooltipTrigger*> R& PointTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& MembersCount() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& Server() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& Type() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& InfoButton() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& BottomBorder() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& Selectedbackground() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& TopColor() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int64_t> R& _guildId() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = ContextMenuView*> R& _contextMenuView() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppArray<ContextAction>*> R& _actions() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = RatingGuildType> R& _ratingGuildType() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Init(GuildWindow* window, ContextMenuView* contextMenuView, int64_t guildId, int32_t position, RatingGuildType ratingType) {
		return ((R (*)(RatingGuildItem*, GuildWindow*, ContextMenuView*, int64_t, int32_t, RatingGuildType))(Il2CppBase() + 0x1719C00))(this, window, contextMenuView, guildId, position, ratingType);
	}
	template <typename R = void> R HideBottomBorder() {
		return ((R (*)(RatingGuildItem*))(Il2CppBase() + 0x171ABE8))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(RatingGuildItem*))(Il2CppBase() + 0x171AC08))(this);
	}
	template <typename R = void> R OnInfoButtonPressed() {
		return ((R (*)(RatingGuildItem*))(Il2CppBase() + 0x171AD40))(this);
	}
	template <typename R = void> R ShowInfo() {
		return ((R (*)(RatingGuildItem*))(Il2CppBase() + 0x171AE38))(this);
	}
	template <typename R = void> R JoinGuild() {
		return ((R (*)(RatingGuildItem*))(Il2CppBase() + 0x171AF24))(this);
	}
	template <typename R = void> R SendInvite() {
		return ((R (*)(RatingGuildItem*))(Il2CppBase() + 0x171B778))(this);
	}
	template <typename R = void> R OnInfoButtonPressedb__20_0() {
		return ((R (*)(RatingGuildItem*))(Il2CppBase() + 0x171B8C8))(this);
	}

};

