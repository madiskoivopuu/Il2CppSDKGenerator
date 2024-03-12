#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AcceptGuildInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcceptGuildInviteData"));
	}

	template <typename T = int64_t> T& InviteId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Accept() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AcceptGuildInviteData*, uintptr_t))(Il2CppBase() + 0x1D966C4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AcceptGuildInviteData*, uintptr_t))(Il2CppBase() + 0x1D96718))(this, reader);
	}

};

}
