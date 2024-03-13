#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindGuildForInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindGuildForInviteData"));
	}

	template <typename T = Il2CppString*> T& GuildTag() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& GuildName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FindGuildForInviteData*, uintptr_t))(Il2CppBase() + 0x1693EDC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FindGuildForInviteData*, uintptr_t))(Il2CppBase() + 0x1693F28))(this, reader);
	}

};

