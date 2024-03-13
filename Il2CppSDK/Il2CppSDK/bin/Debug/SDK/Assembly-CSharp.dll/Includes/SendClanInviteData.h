#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendClanInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendClanInviteData"));
	}

	template <typename T = int64_t> T& InvitedUserId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint8_t> T& Slot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SendClanInviteData*, uintptr_t))(Il2CppBase() + 0x1363F8C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SendClanInviteData*, uintptr_t))(Il2CppBase() + 0x1363FF0))(this, reader);
	}

};

