#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatMatcher"));
	}

	 static IMatcher1<ChatEntity*>*& _matcherChannels() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<ChatEntity*>*& _matcherChat() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<ChatEntity*>*& _matcherFrom() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<ChatEntity*>*& _matcherGroupChat() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<ChatEntity*>*& _matcherGuildBossName() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<ChatEntity*>*& _matcherGuildDailyMessage() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<ChatEntity*>*& _matcherGuildEventType() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<ChatEntity*>*& _matcherGuildPlayerName() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<ChatEntity*>*& _matcherGuildQuestName() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<ChatEntity*>*& _matcherGuildRandomMessage() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<ChatEntity*>*& _matcherGuildRole() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<ChatEntity*>*& _matcherGuildWeeklyRank() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<ChatEntity*>*& _matcherMessageView() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<ChatEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<ChatEntity*>*& _matcherPlayerName() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<ChatEntity*>*& _matcherText() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<ChatEntity*>*& _matcherTick() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<ChatEntity*>*& _matcherTo() {
		return *(IMatcher1<ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	 static IAllOfMatcher1<ChatEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<ChatEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x140202C))(0, indices);
	}
	 static IAllOfMatcher1<ChatEntity*>* AllOf_1(Il2CppArray<IMatcher1<ChatEntity*>*>* matchers) {
		return ((IAllOfMatcher1<ChatEntity*>* (*)(void *, Il2CppArray<IMatcher1<ChatEntity*>*>*))(Il2CppBase() + 0x13F0158))(0, matchers);
	}
	 static IAnyOfMatcher1<ChatEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<ChatEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x14020A4))(0, indices);
	}
	 static IAnyOfMatcher1<ChatEntity*>* AnyOf_1(Il2CppArray<IMatcher1<ChatEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<ChatEntity*>* (*)(void *, Il2CppArray<IMatcher1<ChatEntity*>*>*))(Il2CppBase() + 0x140211C))(0, matchers);
	}
	 static IMatcher1<ChatEntity*>* get_Channels() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x13EFFD8))(0);
	}
	 static IMatcher1<ChatEntity*>* get_Chat() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402194))(0);
	}
	 static IMatcher1<ChatEntity*>* get_From() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x13F2984))(0);
	}
	 static IMatcher1<ChatEntity*>* get_GroupChat() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402330))(0);
	}
	 static IMatcher1<ChatEntity*>* get_GuildBossName() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x14024CC))(0);
	}
	 static IMatcher1<ChatEntity*>* get_GuildDailyMessage() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402668))(0);
	}
	 static IMatcher1<ChatEntity*>* get_GuildEventType() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402804))(0);
	}
	 static IMatcher1<ChatEntity*>* get_GuildPlayerName() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x14029A0))(0);
	}
	 static IMatcher1<ChatEntity*>* get_GuildQuestName() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402B3C))(0);
	}
	 static IMatcher1<ChatEntity*>* get_GuildRandomMessage() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402CD8))(0);
	}
	 static IMatcher1<ChatEntity*>* get_GuildRole() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402E74))(0);
	}
	 static IMatcher1<ChatEntity*>* get_GuildWeeklyRank() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1403010))(0);
	}
	 static IMatcher1<ChatEntity*>* get_MessageView() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x14031AC))(0);
	}
	 static IMatcher1<ChatEntity*>* get_PlayerId() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x13F27E8))(0);
	}
	 static IMatcher1<ChatEntity*>* get_PlayerName() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1403348))(0);
	}
	 static IMatcher1<ChatEntity*>* get_Text() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x14034E4))(0);
	}
	 static IMatcher1<ChatEntity*>* get_Tick() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x13EFE3C))(0);
	}
	 static IMatcher1<ChatEntity*>* get_To() {
		return ((IMatcher1<ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1403680))(0);
	}

};

