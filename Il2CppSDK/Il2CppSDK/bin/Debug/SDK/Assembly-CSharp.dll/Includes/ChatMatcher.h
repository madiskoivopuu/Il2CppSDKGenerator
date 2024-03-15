#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatMatcher"));
	}

	 static IMatcher1ChatEntity*>*& _matcherChannels() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1ChatEntity*>*& _matcherChat() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1ChatEntity*>*& _matcherFrom() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1ChatEntity*>*& _matcherGroupChat() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1ChatEntity*>*& _matcherGuildBossName() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1ChatEntity*>*& _matcherGuildDailyMessage() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1ChatEntity*>*& _matcherGuildEventType() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1ChatEntity*>*& _matcherGuildPlayerName() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1ChatEntity*>*& _matcherGuildQuestName() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1ChatEntity*>*& _matcherGuildRandomMessage() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1ChatEntity*>*& _matcherGuildRole() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1ChatEntity*>*& _matcherGuildWeeklyRank() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1ChatEntity*>*& _matcherMessageView() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1ChatEntity*>*& _matcherPlayerId() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1ChatEntity*>*& _matcherPlayerName() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1ChatEntity*>*& _matcherText() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1ChatEntity*>*& _matcherTick() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1ChatEntity*>*& _matcherTo() {
		return *(IMatcher1ChatEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	 static IAllOfMatcher1ChatEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1ChatEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x140202C))(0, indices);
	}
	 static IAllOfMatcher1ChatEntity*>* AllOf_1(Il2CppArray<IMatcher1ChatEntity*>*>* matchers) {
		return ((IAllOfMatcher1ChatEntity*>* (*)(void *, Il2CppArray<IMatcher1ChatEntity*>*>*))(Il2CppBase() + 0x13F0158))(0, matchers);
	}
	 static IAnyOfMatcher1ChatEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1ChatEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x14020A4))(0, indices);
	}
	 static IAnyOfMatcher1ChatEntity*>* AnyOf_1(Il2CppArray<IMatcher1ChatEntity*>*>* matchers) {
		return ((IAnyOfMatcher1ChatEntity*>* (*)(void *, Il2CppArray<IMatcher1ChatEntity*>*>*))(Il2CppBase() + 0x140211C))(0, matchers);
	}
	 static IMatcher1ChatEntity*>* get_Channels() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x13EFFD8))(0);
	}
	 static IMatcher1ChatEntity*>* get_Chat() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402194))(0);
	}
	 static IMatcher1ChatEntity*>* get_From() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x13F2984))(0);
	}
	 static IMatcher1ChatEntity*>* get_GroupChat() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402330))(0);
	}
	 static IMatcher1ChatEntity*>* get_GuildBossName() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x14024CC))(0);
	}
	 static IMatcher1ChatEntity*>* get_GuildDailyMessage() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402668))(0);
	}
	 static IMatcher1ChatEntity*>* get_GuildEventType() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402804))(0);
	}
	 static IMatcher1ChatEntity*>* get_GuildPlayerName() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x14029A0))(0);
	}
	 static IMatcher1ChatEntity*>* get_GuildQuestName() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402B3C))(0);
	}
	 static IMatcher1ChatEntity*>* get_GuildRandomMessage() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402CD8))(0);
	}
	 static IMatcher1ChatEntity*>* get_GuildRole() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1402E74))(0);
	}
	 static IMatcher1ChatEntity*>* get_GuildWeeklyRank() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1403010))(0);
	}
	 static IMatcher1ChatEntity*>* get_MessageView() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x14031AC))(0);
	}
	 static IMatcher1ChatEntity*>* get_PlayerId() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x13F27E8))(0);
	}
	 static IMatcher1ChatEntity*>* get_PlayerName() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1403348))(0);
	}
	 static IMatcher1ChatEntity*>* get_Text() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x14034E4))(0);
	}
	 static IMatcher1ChatEntity*>* get_Tick() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x13EFE3C))(0);
	}
	 static IMatcher1ChatEntity*>* get_To() {
		return ((IMatcher1ChatEntity*>* (*)(void *))(Il2CppBase() + 0x1403680))(0);
	}

};

