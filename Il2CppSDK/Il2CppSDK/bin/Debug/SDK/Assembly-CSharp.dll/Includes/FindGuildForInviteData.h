#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindGuildForInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindGuildForInviteData"));
	}

	template <typename R = Il2CppString*> R& GuildTag() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& GuildName() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FindGuildForInviteData*, uintptr_t))(Il2CppBase() + 0x1693EDC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FindGuildForInviteData*, uintptr_t))(Il2CppBase() + 0x1693F28))(this, reader);
	}

};

