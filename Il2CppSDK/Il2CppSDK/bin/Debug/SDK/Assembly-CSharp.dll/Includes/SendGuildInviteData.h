#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendGuildInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendGuildInviteData"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& GuildId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SendGuildInviteData*, uintptr_t))(Il2CppBase() + 0x1364120))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SendGuildInviteData*, uintptr_t))(Il2CppBase() + 0x1364184))(this, reader);
	}

};

