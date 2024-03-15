#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildRankViewItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRankViewItem"));
	}

	template <typename R = uintptr_t> R& toggle() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Rank() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Init(ICommonClientContexts* world, int64_t guildId) {
		return ((R (*)(GuildRankViewItem*, ICommonClientContexts*, int64_t))(Il2CppBase() + 0x193D494))(this, world, guildId);
	}

};

