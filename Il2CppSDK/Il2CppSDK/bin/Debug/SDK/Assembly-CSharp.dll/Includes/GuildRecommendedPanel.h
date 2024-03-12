#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildRecommendedPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRecommendedPanel"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GuildItem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LoadingIndicator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& EmptyIndicator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _contextMenu() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _ratingIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(GuildRecommendedPanel*, uintptr_t))(Il2CppBase() + 0x193F860))(this, window);
	}
	template <typename T = void> T OnRecommendedGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t errorCode) {
		return ((T (*)(GuildRecommendedPanel*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x193F868))(this, ids, errorCode);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildRecommendedPanel*))(Il2CppBase() + 0x193FDD0))(this);
	}
	template <typename T = void> T RequestGuilds() {
		return ((T (*)(GuildRecommendedPanel*))(Il2CppBase() + 0x193FE34))(this);
	}
	template <typename T = bool> T NeedToUpdateRatingGuilds(Il2CppArray<uintptr_t>** guilds) {
		return ((T (*)(GuildRecommendedPanel*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x193FED4))(this, guilds);
	}
	template <typename T = void> T CleanUpGrid() {
		return ((T (*)(GuildRecommendedPanel*))(Il2CppBase() + 0x1940138))(this);
	}
	template <typename T = void> T RebuildGrid(Il2CppArray<uintptr_t>* guilds) {
		return ((T (*)(GuildRecommendedPanel*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x193FBB0))(this, guilds);
	}

};

}
