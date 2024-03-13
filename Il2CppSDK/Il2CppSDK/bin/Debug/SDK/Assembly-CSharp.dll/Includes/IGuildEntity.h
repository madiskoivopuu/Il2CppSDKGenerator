#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildEntity"));
	}


	template <typename T = GuildComponent*> T get_guild() {
		return ((T (*)(IGuildEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(IGuildEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(IGuildEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(IGuildEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(IGuildEntity*))(Il2CppBase() + 0x0))(this);
	}

};

