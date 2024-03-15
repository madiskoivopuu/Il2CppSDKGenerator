#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildRecommendedPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRecommendedPanel"));
	}

	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RatingGuildItem*> R& GuildItem() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& LoadingIndicator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& EmptyIndicator() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ContextMenuView*> R& _contextMenu() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<int64_t>*> static R& _ratingIds() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Bind(GuildWindow* window) {
		return ((R (*)(GuildRecommendedPanel*, GuildWindow*))(Il2CppBase() + 0x193F860))(this, window);
	}
	template <typename R = void> R OnRecommendedGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes errorCode) {
		return ((R (*)(GuildRecommendedPanel*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x193F868))(this, ids, errorCode);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildRecommendedPanel*))(Il2CppBase() + 0x193FDD0))(this);
	}
	template <typename R = void> R RequestGuilds() {
		return ((R (*)(GuildRecommendedPanel*))(Il2CppBase() + 0x193FE34))(this);
	}
	template <typename R = bool> R NeedToUpdateRatingGuilds(uintptr_t* guilds) {
		return ((R (*)(GuildRecommendedPanel*, uintptr_t*))(Il2CppBase() + 0x193FED4))(this, guilds);
	}
	template <typename R = void> R CleanUpGrid() {
		return ((R (*)(GuildRecommendedPanel*))(Il2CppBase() + 0x1940138))(this);
	}
	template <typename R = void> R RebuildGrid(Il2CppArray<GuildEntity*>* guilds) {
		return ((R (*)(GuildRecommendedPanel*, Il2CppArray<GuildEntity*>*))(Il2CppBase() + 0x193FBB0))(this, guilds);
	}

};

