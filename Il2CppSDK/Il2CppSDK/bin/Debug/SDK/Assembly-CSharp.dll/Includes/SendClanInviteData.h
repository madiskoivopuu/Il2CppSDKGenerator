#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendClanInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendClanInviteData"));
	}

	template <typename R = int64_t> R& InvitedUserId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uint8_t> R& Slot() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SendClanInviteData*, uintptr_t))(Il2CppBase() + 0x1363F8C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SendClanInviteData*, uintptr_t))(Il2CppBase() + 0x1363FF0))(this, reader);
	}

};

