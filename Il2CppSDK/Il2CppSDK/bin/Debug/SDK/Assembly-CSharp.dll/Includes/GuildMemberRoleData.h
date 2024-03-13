#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildMemberRoleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMemberRoleData"));
	}

	template <typename T = int64_t> T& TargetPlayerId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = GuildRole*> T& Role() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GuildMemberRoleData*, uintptr_t))(Il2CppBase() + 0x1B38318))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GuildMemberRoleData*, uintptr_t))(Il2CppBase() + 0x1B3836C))(this, reader);
	}

};

