#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildTagEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildTagEntity"));
	}


	template <typename R = GuildTagComponent*> R get_guildTag() {
		return ((R (*)(IGuildTagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGuildTag() {
		return ((R (*)(IGuildTagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGuildTag(Il2CppString* newValue) {
		return ((R (*)(IGuildTagEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildTag(Il2CppString* newValue) {
		return ((R (*)(IGuildTagEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveGuildTag() {
		return ((R (*)(IGuildTagEntity*))(Il2CppBase() + 0x0))(this);
	}

};

