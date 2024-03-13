#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RatingGuildItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RatingGuildItem"));
	}

	template <typename T = uintptr_t> T& Position() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GuildName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NameButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PointCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = TooltipTrigger*> T& PointTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& MembersCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Server() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& InfoButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& BottomBorder() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& Selectedbackground() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& TopColor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int64_t> T& _guildId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = ContextMenuView*> T& _contextMenuView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = GuildWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _actions() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = RatingGuildType*> T& _ratingGuildType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Init(GuildWindow* window, ContextMenuView* contextMenuView, int64_t guildId, int32_t position, RatingGuildType* ratingType) {
		return ((T (*)(RatingGuildItem*, GuildWindow*, ContextMenuView*, int64_t, int32_t, RatingGuildType*))(Il2CppBase() + 0x1719C00))(this, window, contextMenuView, guildId, position, ratingType);
	}
	template <typename T = void> T HideBottomBorder() {
		return ((T (*)(RatingGuildItem*))(Il2CppBase() + 0x171ABE8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RatingGuildItem*))(Il2CppBase() + 0x171AC08))(this);
	}
	template <typename T = void> T OnInfoButtonPressed() {
		return ((T (*)(RatingGuildItem*))(Il2CppBase() + 0x171AD40))(this);
	}
	template <typename T = void> T ShowInfo() {
		return ((T (*)(RatingGuildItem*))(Il2CppBase() + 0x171AE38))(this);
	}
	template <typename T = void> T JoinGuild() {
		return ((T (*)(RatingGuildItem*))(Il2CppBase() + 0x171AF24))(this);
	}
	template <typename T = void> T SendInvite() {
		return ((T (*)(RatingGuildItem*))(Il2CppBase() + 0x171B778))(this);
	}
	template <typename T = void> T OnInfoButtonPressedb__20_0() {
		return ((T (*)(RatingGuildItem*))(Il2CppBase() + 0x171B8C8))(this);
	}

};

