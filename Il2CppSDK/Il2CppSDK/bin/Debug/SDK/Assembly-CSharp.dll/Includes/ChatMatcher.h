#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatMatcher"));
	}

	template <typename T = void*> static T& _matcherChannels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherGroupChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherGuildBossName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherGuildDailyMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherGuildEventType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherGuildPlayerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherGuildQuestName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherGuildRandomMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherGuildRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherGuildWeeklyRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherMessageView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherPlayerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140202C))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13F0158))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14020A4))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140211C))(0, matchers);
	}
	template <typename T = void*> static T get_Channels() {
		return ((T (*)(void *))(Il2CppBase() + 0x13EFFD8))(0);
	}
	template <typename T = void*> static T get_Chat() {
		return ((T (*)(void *))(Il2CppBase() + 0x1402194))(0);
	}
	template <typename T = void*> static T get_From() {
		return ((T (*)(void *))(Il2CppBase() + 0x13F2984))(0);
	}
	template <typename T = void*> static T get_GroupChat() {
		return ((T (*)(void *))(Il2CppBase() + 0x1402330))(0);
	}
	template <typename T = void*> static T get_GuildBossName() {
		return ((T (*)(void *))(Il2CppBase() + 0x14024CC))(0);
	}
	template <typename T = void*> static T get_GuildDailyMessage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1402668))(0);
	}
	template <typename T = void*> static T get_GuildEventType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1402804))(0);
	}
	template <typename T = void*> static T get_GuildPlayerName() {
		return ((T (*)(void *))(Il2CppBase() + 0x14029A0))(0);
	}
	template <typename T = void*> static T get_GuildQuestName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1402B3C))(0);
	}
	template <typename T = void*> static T get_GuildRandomMessage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1402CD8))(0);
	}
	template <typename T = void*> static T get_GuildRole() {
		return ((T (*)(void *))(Il2CppBase() + 0x1402E74))(0);
	}
	template <typename T = void*> static T get_GuildWeeklyRank() {
		return ((T (*)(void *))(Il2CppBase() + 0x1403010))(0);
	}
	template <typename T = void*> static T get_MessageView() {
		return ((T (*)(void *))(Il2CppBase() + 0x14031AC))(0);
	}
	template <typename T = void*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x13F27E8))(0);
	}
	template <typename T = void*> static T get_PlayerName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1403348))(0);
	}
	template <typename T = void*> static T get_Text() {
		return ((T (*)(void *))(Il2CppBase() + 0x14034E4))(0);
	}
	template <typename T = void*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x13EFE3C))(0);
	}
	template <typename T = void*> static T get_To() {
		return ((T (*)(void *))(Il2CppBase() + 0x1403680))(0);
	}

};

}
