#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildMemberRoleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMemberRoleData"));
	}

	template <typename R = int64_t> R& TargetPlayerId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = GuildRole*> R& Role() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GuildMemberRoleData*, uintptr_t))(Il2CppBase() + 0x1B38318))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GuildMemberRoleData*, uintptr_t))(Il2CppBase() + 0x1B3836C))(this, reader);
	}

};

