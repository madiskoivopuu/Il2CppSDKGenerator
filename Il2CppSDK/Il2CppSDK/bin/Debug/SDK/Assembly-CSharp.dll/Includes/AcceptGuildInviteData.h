#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AcceptGuildInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcceptGuildInviteData"));
	}

	template <typename R = int64_t> R& InviteId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Accept() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AcceptGuildInviteData*, uintptr_t))(Il2CppBase() + 0x1D966C4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AcceptGuildInviteData*, uintptr_t))(Il2CppBase() + 0x1D96718))(this, reader);
	}

};

