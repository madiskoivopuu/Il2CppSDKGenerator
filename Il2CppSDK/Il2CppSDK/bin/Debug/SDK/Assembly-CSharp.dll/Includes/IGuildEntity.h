#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildEntity"));
	}


	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(IGuildEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(IGuildEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(IGuildEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(IGuildEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(IGuildEntity*))(Il2CppBase() + 0x0))(this);
	}

};

