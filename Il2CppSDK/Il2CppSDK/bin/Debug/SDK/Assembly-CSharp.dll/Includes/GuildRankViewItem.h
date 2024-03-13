#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildRankViewItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRankViewItem"));
	}

	template <typename T = uintptr_t> T& toggle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Init(ICommonClientContexts* world, int64_t guildId) {
		return ((T (*)(GuildRankViewItem*, ICommonClientContexts*, int64_t))(Il2CppBase() + 0x193D494))(this, world, guildId);
	}

};

