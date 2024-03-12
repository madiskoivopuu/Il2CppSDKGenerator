#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildTagEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildTagEntity"));
	}


	template <typename T = uintptr_t> T get_guildTag() {
		return ((T (*)(IGuildTagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGuildTag() {
		return ((T (*)(IGuildTagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGuildTag(Il2CppString* newValue) {
		return ((T (*)(IGuildTagEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildTag(Il2CppString* newValue) {
		return ((T (*)(IGuildTagEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveGuildTag() {
		return ((T (*)(IGuildTagEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
